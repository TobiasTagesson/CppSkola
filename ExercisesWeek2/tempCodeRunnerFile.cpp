    for(unsigned int i = 0; i <= name.length(); i++)
    {
        if (isalpha(name[i]) && cap == true)
        {
            name[i] = toupper(name[i]);
            cap = false;
        }
        else if (isspace(name[i]))
        {  
            cap = true;
        }
    }