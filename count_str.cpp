int count_str(string a, string b) {
    int count = 0;

    while (true) {
        if (a.find(b) == string::npos || a.size()<b.size()) break;
        if (a.find(b) != string::npos) {
            count++;
            a = a.substr(a.find(b) + b.size());
        }
    }

    return count;
}
