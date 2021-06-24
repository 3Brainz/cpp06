#include <serialize.hpp>

uintptr_t	serialize(Data* ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data *>(raw));
}

int main(int argc, char **argv)
{
	Data		*genericGreek = new Data;
	uintptr_t	serialized = serialize(genericGreek);
	Data		*deserialized = deserialize(serialized);
	(void)argc;
	(void)argv;

	genericGreek->name = "Stavros";
	genericGreek->surname = "Kakouliadis";
	genericGreek->pater_familia = "That's rome";


	cout << "ptr as int " << serialized << endl;
	cout << "ptr as Data " << deserialized->name << " " << deserialized->surname << " " << deserialized->pater_familia << endl;
	delete (deserialized);
	return (0);
}