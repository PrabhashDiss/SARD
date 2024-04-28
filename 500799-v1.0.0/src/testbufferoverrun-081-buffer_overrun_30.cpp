struct S { int m[9]; };
    if (sizeof(s->m) < 36) {
        return -1; // Return an error value or handle the out-of-bounds access appropriately
    }
    return s->m[36]; // Access the array element at index 36
    return s->m[36]; // Access the array element at index 36
