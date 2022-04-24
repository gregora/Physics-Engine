namespace pe {

	class Object {
	public:
		Vector position;
		Vector velocity;

		float angle;
		float angular_velocity;

		bool immovable = false;

		float mass;

		virtual float getVolume() const = 0;
		virtual void getAABB(Vector* a, Vector* b) const = 0;
	};

	class Circle : public Object {
	public:
		float radius;

		Circle(float x = 0, float y = 0, float r = 1, float mass = 1, bool immovable = false);
		Circle(Vector position, float r = 1, float mass = 1, bool immovable = false);

		float getVolume() const;
		void getAABB(Vector* a, Vector* b) const;

	};

}
