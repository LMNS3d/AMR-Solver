namespace myOctree {

//VECFIELD CLASS
//This is a template class for any vector field variable in the domain.
//x, y, z - 3d arrays for storing field variable values at the cells along x, y and z directions.
//Use three objects of this class to build a vector field.
//
//Usage:
//Field object(nx,ny,nz);
//Parameters are the number of cells along x, y and z (including the padding) which usually remains  same for al    l the blocks in the mesh.
//Padding represents extra layer of cells at all the sides of the block, which acts as ghost cells at the block     boundaries or buffer cells at the processor boundaries.
//New objects of this class are defined in the constructors of Block class and the pointers to these objects are     members of the Block class.
class VecField {

        public:
        //Members
        int Nx,Ny,Nz;              //size
        int N;                  //size
        double*** x;            //values
        double*** y;            //values
        double*** z;            //values
        std::string name;
	FieldBc xbc[3][2];       //boundary conditions
	FieldBc ybc[3][2];       //boundary conditions
	FieldBc zbc[3][2];       //boundary conditions

        //Constructors
        //allocates memory to the field variables equal to the number of cells in the domain
        VecField( int N_x, int N_y, int N_z, std::string info );

        //default constructor
        VecField();

        //Copy constructor
        VecField(const VecField &obj);

        //Destructor
        ~VecField();

        //sets field with the input value
        void set_field(double);


        private:
        protected:

};


}