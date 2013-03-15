class FeatureProcessor {
	public:
		virtual void ParseFromString(const string& input) = 0;
		
		virtual string SerializeToString() = 0;

		virtual Process(const feature* input, feature* output) = 0;
};
