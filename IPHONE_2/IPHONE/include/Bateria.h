#ifndef BATERIA_H
#define BATERIA_H


using std::string;
class Bateria
{
    public:
        Bateria();
        Bateria (float statusBateria);

        virtual ~Bateria();

        void verificarBateria();
    protected:
    private:

        float statusBateria;

};

#endif // BATERIA_H
