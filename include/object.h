namespace pe {

	class Object {
	public:
		Vector positon;
		Vector velocity;

		float angle;
		float angular_velocity;

		bool immovable = false;

		virtual float getMass() const;
		virtual float getVolume() const;

		virtual void setMass();

		virtual void getAABB(Vector* a, Vector* b) const;

	private:
		float mass;
		float volume;
	};

}
