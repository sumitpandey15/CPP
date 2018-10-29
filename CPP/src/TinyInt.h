class TinyInt
{
public:
    TinyInt();
    TinyInt(int);
    ~TinyInt();

    operator int()
    {
        return m_nTinyInt;
    }

private:
    int m_nTinyInt = 0;
};
