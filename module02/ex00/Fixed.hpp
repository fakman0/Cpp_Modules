#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed{
    private:
        int number;
        static const int fractionalBits = 8;
    public:
        Fixed();
        Fixed(const Fixed &original);
        ~Fixed();
        Fixed &operator=(Fixed &other);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};


#endif