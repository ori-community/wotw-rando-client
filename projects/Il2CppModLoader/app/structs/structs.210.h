namespace app {
    struct GenericStack__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GenericStack__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GenericStack__VTable vtable;
    };

    enum class SpeechError__Enum : int32_t {
        NoError = 0x00000000,
        TopicLanguageNotSupported = 0x00000001,
        GrammarLanguageMismatch = 0x00000002,
        GrammarCompilationFailure = 0x00000003,
        AudioQualityFailure = 0x00000004,
        PauseLimitExceeded = 0x00000005,
        TimeoutExceeded = 0x00000006,
        NetworkFailure = 0x00000007,
        MicrophoneUnavailable = 0x00000008,
        UnknownError = 0x00000009,
    };

    struct SpeechError__Enum__Boxed {
        struct SpeechError__Enum__Class* klass;
        MonitorData* monitor;
        SpeechError__Enum value;
    };

    struct SpeechError__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct SpeechError__Enum__StaticFields {
    };

    struct SpeechError__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpeechError__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpeechError__Enum__VTable vtable;
    };

    enum class SpeechSystemStatus__Enum : int32_t {
        Stopped = 0x00000000,
        Running = 0x00000001,
        Failed = 0x00000002,
    };

    struct SpeechSystemStatus__Enum__Boxed {
        struct SpeechSystemStatus__Enum__Class* klass;
        MonitorData* monitor;
        SpeechSystemStatus__Enum value;
    };

    struct SpeechSystemStatus__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct SpeechSystemStatus__Enum__StaticFields {
    };

    struct SpeechSystemStatus__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpeechSystemStatus__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpeechSystemStatus__Enum__VTable vtable;
    };

    struct PhraseRecognitionSystem_ErrorDelegate__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct PhraseRecognitionSystem_ErrorDelegate {
        struct PhraseRecognitionSystem_ErrorDelegate__Class* klass;
        MonitorData* monitor;
        struct PhraseRecognitionSystem_ErrorDelegate__Fields fields;
    };

    struct PhraseRecognitionSystem_ErrorDelegate__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Clone;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData Clone_1;
        VirtualInvokeData GetMethodImpl;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData GetInvocationList;
        VirtualInvokeData CombineImpl;
        VirtualInvokeData RemoveImpl;
        VirtualInvokeData Invoke;
        VirtualInvokeData BeginInvoke;
        VirtualInvokeData EndInvoke;
    };

    struct PhraseRecognitionSystem_ErrorDelegate__StaticFields {
    };

    struct PhraseRecognitionSystem_ErrorDelegate__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PhraseRecognitionSystem_ErrorDelegate__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PhraseRecognitionSystem_ErrorDelegate__VTable vtable;
    };

    struct PhraseRecognitionSystem_StatusDelegate__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct PhraseRecognitionSystem_StatusDelegate {
        struct PhraseRecognitionSystem_StatusDelegate__Class* klass;
        MonitorData* monitor;
        struct PhraseRecognitionSystem_StatusDelegate__Fields fields;
    };

    struct PhraseRecognitionSystem_StatusDelegate__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Clone;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData Clone_1;
        VirtualInvokeData GetMethodImpl;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData GetInvocationList;
        VirtualInvokeData CombineImpl;
        VirtualInvokeData RemoveImpl;
        VirtualInvokeData Invoke;
        VirtualInvokeData BeginInvoke;
        VirtualInvokeData EndInvoke;
    };

    struct PhraseRecognitionSystem_StatusDelegate__StaticFields {
    };

    struct PhraseRecognitionSystem_StatusDelegate__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PhraseRecognitionSystem_StatusDelegate__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PhraseRecognitionSystem_StatusDelegate__VTable vtable;
    };

    struct __declspec(align(8)) PhraseRecognizer__Fields {
        void* m_Recognizer;
        struct PhraseRecognizer_PhraseRecognizedDelegate* OnPhraseRecognized;
    };

    struct PhraseRecognizer {
        struct PhraseRecognizer__Class* klass;
        MonitorData* monitor;
        struct PhraseRecognizer__Fields fields;
    };

    struct PhraseRecognizer_PhraseRecognizedDelegate__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct PhraseRecognizer_PhraseRecognizedDelegate {
        struct PhraseRecognizer_PhraseRecognizedDelegate__Class* klass;
        MonitorData* monitor;
        struct PhraseRecognizer_PhraseRecognizedDelegate__Fields fields;
    };

    enum class ConfidenceLevel__Enum : int32_t {
        High = 0x00000000,
        Medium = 0x00000001,
        Low = 0x00000002,
        Rejected = 0x00000003,
    };

    struct ConfidenceLevel__Enum__Boxed {
        struct ConfidenceLevel__Enum__Class* klass;
        MonitorData* monitor;
        ConfidenceLevel__Enum value;
    };

    struct PhraseRecognizedEventArgs {
        ConfidenceLevel__Enum confidence;

        struct SemanticMeaning__Array* semanticMeanings;
        struct String* text;
        struct DateTime phraseStartTime;
        struct TimeSpan phraseDuration;
    };

    struct PhraseRecognizedEventArgs__Boxed {
        struct PhraseRecognizedEventArgs__Class* klass;
        MonitorData* monitor;
        struct PhraseRecognizedEventArgs fields;
    };

    struct SemanticMeaning {
        struct String* key;
        struct String__Array* values;
    };

    struct SemanticMeaning__Boxed {
        struct SemanticMeaning__Class* klass;
        MonitorData* monitor;
        struct SemanticMeaning fields;
    };

    struct SemanticMeaning__Array {
        struct SemanticMeaning__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SemanticMeaning vector[32];
    };

    struct ConfidenceLevel__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct ConfidenceLevel__Enum__StaticFields {
    };

    struct ConfidenceLevel__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConfidenceLevel__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConfidenceLevel__Enum__VTable vtable;
    };

    struct SemanticMeaning__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SemanticMeaning__StaticFields {
    };

    struct SemanticMeaning__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SemanticMeaning__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SemanticMeaning__VTable vtable;
    };

    struct SemanticMeaning__Array__VTable {
    };

    struct SemanticMeaning__Array__StaticFields {
    };

    struct SemanticMeaning__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SemanticMeaning__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SemanticMeaning__Array__VTable vtable;
    };

    struct PhraseRecognizedEventArgs__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PhraseRecognizedEventArgs__StaticFields {
    };

    struct PhraseRecognizedEventArgs__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PhraseRecognizedEventArgs__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PhraseRecognizedEventArgs__VTable vtable;
    };

    struct PhraseRecognizer_PhraseRecognizedDelegate__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Clone;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData Clone_1;
        VirtualInvokeData GetMethodImpl;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData GetInvocationList;
        VirtualInvokeData CombineImpl;
        VirtualInvokeData RemoveImpl;
        VirtualInvokeData Invoke;
        VirtualInvokeData BeginInvoke;
        VirtualInvokeData EndInvoke;
    };

    struct PhraseRecognizer_PhraseRecognizedDelegate__StaticFields {
    };

    struct PhraseRecognizer_PhraseRecognizedDelegate__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PhraseRecognizer_PhraseRecognizedDelegate__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PhraseRecognizer_PhraseRecognizedDelegate__VTable vtable;
    };

    struct PhraseRecognizer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
    };

    struct PhraseRecognizer__StaticFields {
    };

    struct PhraseRecognizer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PhraseRecognizer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PhraseRecognizer__VTable vtable;
    };

    struct __declspec(align(8)) DictationRecognizer__Fields {
        void* m_Recognizer;
        struct DictationRecognizer_DictationHypothesisDelegate* DictationHypothesis;
        struct DictationRecognizer_DictationResultDelegate* DictationResult;
        struct DictationRecognizer_DictationCompletedDelegate* DictationComplete;
        struct DictationRecognizer_DictationErrorHandler* DictationError;
    };

    struct DictationRecognizer {
        struct DictationRecognizer__Class* klass;
        MonitorData* monitor;
        struct DictationRecognizer__Fields fields;
    };

    struct DictationRecognizer_DictationHypothesisDelegate__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct DictationRecognizer_DictationHypothesisDelegate {
        struct DictationRecognizer_DictationHypothesisDelegate__Class* klass;
        MonitorData* monitor;
        struct DictationRecognizer_DictationHypothesisDelegate__Fields fields;
    };

    struct DictationRecognizer_DictationResultDelegate__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct DictationRecognizer_DictationResultDelegate {
        struct DictationRecognizer_DictationResultDelegate__Class* klass;
        MonitorData* monitor;
        struct DictationRecognizer_DictationResultDelegate__Fields fields;
    };

    struct DictationRecognizer_DictationCompletedDelegate__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct DictationRecognizer_DictationCompletedDelegate {
        struct DictationRecognizer_DictationCompletedDelegate__Class* klass;
        MonitorData* monitor;
        struct DictationRecognizer_DictationCompletedDelegate__Fields fields;
    };

    enum class DictationCompletionCause__Enum : int32_t {
        Complete = 0x00000000,
        AudioQualityFailure = 0x00000001,
        Canceled = 0x00000002,
        TimeoutExceeded = 0x00000003,
        PauseLimitExceeded = 0x00000004,
        NetworkFailure = 0x00000005,
        MicrophoneUnavailable = 0x00000006,
        UnknownError = 0x00000007,
    };

    struct DictationCompletionCause__Enum__Boxed {
        struct DictationCompletionCause__Enum__Class* klass;
        MonitorData* monitor;
        DictationCompletionCause__Enum value;
    };

    struct DictationRecognizer_DictationErrorHandler__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct DictationRecognizer_DictationErrorHandler {
        struct DictationRecognizer_DictationErrorHandler__Class* klass;
        MonitorData* monitor;
        struct DictationRecognizer_DictationErrorHandler__Fields fields;
    };

    struct DictationRecognizer_DictationHypothesisDelegate__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Clone;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData Clone_1;
        VirtualInvokeData GetMethodImpl;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData GetInvocationList;
        VirtualInvokeData CombineImpl;
        VirtualInvokeData RemoveImpl;
        VirtualInvokeData Invoke;
        VirtualInvokeData BeginInvoke;
        VirtualInvokeData EndInvoke;
    };

    struct DictationRecognizer_DictationHypothesisDelegate__StaticFields {
    };

    struct DictationRecognizer_DictationHypothesisDelegate__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DictationRecognizer_DictationHypothesisDelegate__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DictationRecognizer_DictationHypothesisDelegate__VTable vtable;
    };

    struct DictationRecognizer_DictationResultDelegate__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Clone;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData Clone_1;
        VirtualInvokeData GetMethodImpl;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData GetInvocationList;
        VirtualInvokeData CombineImpl;
        VirtualInvokeData RemoveImpl;
        VirtualInvokeData Invoke;
        VirtualInvokeData BeginInvoke;
        VirtualInvokeData EndInvoke;
    };

    struct DictationRecognizer_DictationResultDelegate__StaticFields {
    };

    struct DictationRecognizer_DictationResultDelegate__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DictationRecognizer_DictationResultDelegate__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DictationRecognizer_DictationResultDelegate__VTable vtable;
    };

    struct DictationCompletionCause__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct DictationCompletionCause__Enum__StaticFields {
    };

    struct DictationCompletionCause__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DictationCompletionCause__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DictationCompletionCause__Enum__VTable vtable;
    };

    struct DictationRecognizer_DictationCompletedDelegate__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Clone;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData Clone_1;
        VirtualInvokeData GetMethodImpl;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData GetInvocationList;
        VirtualInvokeData CombineImpl;
        VirtualInvokeData RemoveImpl;
        VirtualInvokeData Invoke;
        VirtualInvokeData BeginInvoke;
        VirtualInvokeData EndInvoke;
    };

    struct DictationRecognizer_DictationCompletedDelegate__StaticFields {
    };

    struct DictationRecognizer_DictationCompletedDelegate__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DictationRecognizer_DictationCompletedDelegate__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DictationRecognizer_DictationCompletedDelegate__VTable vtable;
    };

    struct DictationRecognizer_DictationErrorHandler__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Clone;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData Clone_1;
        VirtualInvokeData GetMethodImpl;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData GetInvocationList;
        VirtualInvokeData CombineImpl;
        VirtualInvokeData RemoveImpl;
        VirtualInvokeData Invoke;
        VirtualInvokeData BeginInvoke;
        VirtualInvokeData EndInvoke;
    };

    struct DictationRecognizer_DictationErrorHandler__StaticFields {
    };

    struct DictationRecognizer_DictationErrorHandler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DictationRecognizer_DictationErrorHandler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DictationRecognizer_DictationErrorHandler__VTable vtable;
    };

    struct DictationRecognizer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
    };

    struct DictationRecognizer__StaticFields {
    };

    struct DictationRecognizer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DictationRecognizer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DictationRecognizer__VTable vtable;
    };

    struct JobHandle {
        void* jobGroup;
        int32_t version;
    };

    struct JobHandle__Boxed {
        struct JobHandle__Class* klass;
        MonitorData* monitor;
        struct JobHandle fields;
    };

    struct JobHandle__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct JobHandle__StaticFields {
    };

    struct JobHandle__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JobHandle__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JobHandle__VTable vtable;
    };

    struct JobHandle___VTable {
    };

    struct JobHandle___StaticFields {
    };

    struct JobHandle___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JobHandle___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JobHandle___VTable vtable;
    };

    struct __declspec(align(8)) JobProducerTypeAttribute__Fields {
        struct Type* _ProducerType_k__BackingField;
    };

    struct JobProducerTypeAttribute {
        struct JobProducerTypeAttribute__Class* klass;
        MonitorData* monitor;
        struct JobProducerTypeAttribute__Fields fields;
    };

    struct JobProducerTypeAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct JobProducerTypeAttribute__StaticFields {
    };

    struct JobProducerTypeAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JobProducerTypeAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JobProducerTypeAttribute__VTable vtable;
    };

    struct JobRanges {
        int32_t BatchSize;
        int32_t NumJobs;
        int32_t TotalIterationCount;
        int32_t NumPhases;
        int32_t IndicesPerPhase;
        void* StartEndIndex;
        void* PhaseData;
    };

    struct JobRanges__Boxed {
        struct JobRanges__Class* klass;
        MonitorData* monitor;
        struct JobRanges fields;
    };

    struct JobRanges__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct JobRanges__StaticFields {
    };

    struct JobRanges__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JobRanges__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JobRanges__VTable vtable;
    };

    struct JobRanges___VTable {
    };

    struct JobRanges___StaticFields {
    };

    struct JobRanges___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JobRanges___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JobRanges___VTable vtable;
    };

    struct JobsUtility_JobScheduleParameters {
        struct JobHandle Dependency;
        int32_t ScheduleMode;
        void* ReflectionData;
        void* JobDataPtr;
    };

    struct JobsUtility_JobScheduleParameters__Boxed {
        struct JobsUtility_JobScheduleParameters__Class* klass;
        MonitorData* monitor;
        struct JobsUtility_JobScheduleParameters fields;
    };

    struct JobsUtility_JobScheduleParameters__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct JobsUtility_JobScheduleParameters__StaticFields {
    };

    struct JobsUtility_JobScheduleParameters__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JobsUtility_JobScheduleParameters__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JobsUtility_JobScheduleParameters__VTable vtable;
    };

    struct JobsUtility_JobScheduleParameters___VTable {
    };

    struct JobsUtility_JobScheduleParameters___StaticFields {
    };

    struct JobsUtility_JobScheduleParameters___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JobsUtility_JobScheduleParameters___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JobsUtility_JobScheduleParameters___VTable vtable;
    };

    enum class JobType__Enum : int32_t {
        Single = 0x00000000,
        ParallelFor = 0x00000001,
    };

    struct JobType__Enum__Boxed {
        struct JobType__Enum__Class* klass;
        MonitorData* monitor;
        JobType__Enum value;
    };

    struct JobType__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct JobType__Enum__StaticFields {
    };

    struct JobType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JobType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JobType__Enum__VTable vtable;
    };

    enum class ScheduleMode__Enum : int32_t {
        Run = 0x00000000,
        Batched = 0x00000001,
    };

    struct ScheduleMode__Enum__Boxed {
        struct ScheduleMode__Enum__Class* klass;
        MonitorData* monitor;
        ScheduleMode__Enum value;
    };

    struct ScheduleMode__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct ScheduleMode__Enum__StaticFields {
    };

    struct ScheduleMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScheduleMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScheduleMode__Enum__VTable vtable;
    };

    struct __declspec(align(8)) MetaData__Fields {
        struct String* content;
        struct String* platform;
        struct Texture2D* screenshot;
    };

    struct MetaData {
        struct MetaData__Class* klass;
        MonitorData* monitor;
        struct MetaData__Fields fields;
    };

    struct MetaData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MetaData__StaticFields {
    };

    struct MetaData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MetaData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MetaData__VTable vtable;
    };

    struct Action_2_String_Boolean___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_2_String_Boolean_ {
        struct Action_2_String_Boolean___Class* klass;
        MonitorData* monitor;
        struct Action_2_String_Boolean___Fields fields;
    };

    struct Action_2_String_Boolean___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Clone;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData Clone_1;
        VirtualInvokeData GetMethodImpl;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData GetInvocationList;
        VirtualInvokeData CombineImpl;
        VirtualInvokeData RemoveImpl;
        VirtualInvokeData Invoke;
        VirtualInvokeData BeginInvoke;
        VirtualInvokeData EndInvoke;
    };

    struct Action_2_String_Boolean___StaticFields {
    };

    struct Action_2_String_Boolean___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_2_String_Boolean___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_2_String_Boolean___VTable vtable;
    };

} // namespace app
