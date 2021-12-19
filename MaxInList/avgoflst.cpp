int avgoflst(int* list, int size) {
    if(size < 1) return 0;
    int average = 0;
    for (int i = 0; i < size; i++)
    {
        average += list[i];
    }
    average = average / size;
    return average;
}