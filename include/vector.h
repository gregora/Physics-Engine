namespace pe {

	class Vector {
	public:
		float x;
		float y;

		Vector(float x = 0, float y = 0);
		void set(float x, float y);
		float length() const;
	};

	float dot(const Vector a, const Vector b);

}
