namespace app {
    struct Instruction__Array__Array__Array {
        struct Instruction__Array__Array__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Instruction__Array__Array* vector[32];
    };

    struct Instruction__Array__Array__VTable {
    };

    struct Instruction__Array__Array__StaticFields {
    };

    struct Instruction__Array__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Instruction__Array__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Instruction__Array__Array__VTable vtable;
    };

    struct Instruction__Array__Array__Array__VTable {
    };

    struct Instruction__Array__Array__Array__StaticFields {
    };

    struct Instruction__Array__Array__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Instruction__Array__Array__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Instruction__Array__Array__Array__VTable vtable;
    };

    struct BranchInstruction__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_ConsumedStack;
        VirtualInvokeData get_ProducedStack;
        VirtualInvokeData get_ConsumedContinuations;
        VirtualInvokeData get_ProducedContinuations;
        VirtualInvokeData Run;
        VirtualInvokeData get_InstructionName;
        VirtualInvokeData ToDebugString;
        VirtualInvokeData get_Cache;
    };

    struct BranchInstruction__StaticFields {
        struct Instruction__Array__Array__Array* s_caches;
    };

    struct BranchInstruction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BranchInstruction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BranchInstruction__VTable vtable;
    };

    struct __declspec(align(8)) IndexedBranchInstruction__Fields {
        int32_t _labelIndex;
    };

    struct IndexedBranchInstruction {
        struct IndexedBranchInstruction__Class* klass;
        MonitorData* monitor;
        struct IndexedBranchInstruction__Fields fields;
    };

    struct GotoInstruction__Fields {
        struct IndexedBranchInstruction__Fields _;
        bool _hasResult;
        bool _hasValue;
        bool _labelTargetGetsValue;
    };

    struct GotoInstruction {
        struct GotoInstruction__Class* klass;
        MonitorData* monitor;
        struct GotoInstruction__Fields fields;
    };

    struct GotoInstruction__Array {
        struct GotoInstruction__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct GotoInstruction* vector[32];
    };

    struct GotoInstruction__Array__VTable {
    };

    struct GotoInstruction__Array__StaticFields {
    };

    struct GotoInstruction__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GotoInstruction__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GotoInstruction__Array__VTable vtable;
    };

    struct GotoInstruction__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_ConsumedStack;
        VirtualInvokeData get_ProducedStack;
        VirtualInvokeData get_ConsumedContinuations;
        VirtualInvokeData get_ProducedContinuations;
        VirtualInvokeData Run;
        VirtualInvokeData get_InstructionName;
        VirtualInvokeData ToDebugString;
    };

    struct GotoInstruction__StaticFields {
        struct GotoInstruction__Array* s_cache;
    };

    struct GotoInstruction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GotoInstruction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GotoInstruction__VTable vtable;
    };

    struct IndexedBranchInstruction__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_ConsumedStack;
        VirtualInvokeData get_ProducedStack;
        VirtualInvokeData get_ConsumedContinuations;
        VirtualInvokeData get_ProducedContinuations;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData ToDebugString;
    };

    struct IndexedBranchInstruction__StaticFields {
    };

    struct IndexedBranchInstruction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IndexedBranchInstruction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IndexedBranchInstruction__VTable vtable;
    };

    struct EnterTryCatchFinallyInstruction__Fields {
        struct IndexedBranchInstruction__Fields _;
        bool _hasFinally;
        struct TryCatchFinallyHandler* _tryHandler;
    };

    struct EnterTryCatchFinallyInstruction {
        struct EnterTryCatchFinallyInstruction__Class* klass;
        MonitorData* monitor;
        struct EnterTryCatchFinallyInstruction__Fields fields;
    };

    struct __declspec(align(8)) TryCatchFinallyHandler__Fields {
        int32_t TryStartIndex;
        int32_t TryEndIndex;
        int32_t FinallyStartIndex;
        int32_t FinallyEndIndex;
        int32_t GotoEndTargetIndex;
        struct ExceptionHandler__Array* _handlers;
    };

    struct TryCatchFinallyHandler {
        struct TryCatchFinallyHandler__Class* klass;
        MonitorData* monitor;
        struct TryCatchFinallyHandler__Fields fields;
    };

    struct __declspec(align(8)) ExceptionHandler__Fields {
        struct Type* _exceptionType;
        int32_t LabelIndex;
        int32_t HandlerStartIndex;
        int32_t HandlerEndIndex;
        struct ExceptionFilter* Filter;
    };

    struct ExceptionHandler {
        struct ExceptionHandler__Class* klass;
        MonitorData* monitor;
        struct ExceptionHandler__Fields fields;
    };

    struct __declspec(align(8)) ExceptionFilter__Fields {
        int32_t LabelIndex;
        int32_t StartIndex;
        int32_t EndIndex;
    };

    struct ExceptionFilter {
        struct ExceptionFilter__Class* klass;
        MonitorData* monitor;
        struct ExceptionFilter__Fields fields;
    };

    struct ExceptionHandler__Array {
        struct ExceptionHandler__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ExceptionHandler* vector[32];
    };

    struct ExceptionFilter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ExceptionFilter__StaticFields {
    };

    struct ExceptionFilter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ExceptionFilter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ExceptionFilter__VTable vtable;
    };

    struct ExceptionHandler__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ExceptionHandler__StaticFields {
    };

    struct ExceptionHandler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ExceptionHandler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ExceptionHandler__VTable vtable;
    };

    struct ExceptionHandler__Array__VTable {
    };

    struct ExceptionHandler__Array__StaticFields {
    };

    struct ExceptionHandler__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ExceptionHandler__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ExceptionHandler__Array__VTable vtable;
    };

    struct TryCatchFinallyHandler__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TryCatchFinallyHandler__StaticFields {
    };

    struct TryCatchFinallyHandler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TryCatchFinallyHandler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TryCatchFinallyHandler__VTable vtable;
    };

    struct EnterTryCatchFinallyInstruction__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_ConsumedStack;
        VirtualInvokeData get_ProducedStack;
        VirtualInvokeData get_ConsumedContinuations;
        VirtualInvokeData get_ProducedContinuations;
        VirtualInvokeData Run;
        VirtualInvokeData get_InstructionName;
        VirtualInvokeData ToDebugString;
    };

    struct EnterTryCatchFinallyInstruction__StaticFields {
    };

    struct EnterTryCatchFinallyInstruction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnterTryCatchFinallyInstruction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnterTryCatchFinallyInstruction__VTable vtable;
    };

    struct EnterTryFaultInstruction__Fields {
        struct IndexedBranchInstruction__Fields _;
        struct TryFaultHandler* _tryHandler;
    };

    struct EnterTryFaultInstruction {
        struct EnterTryFaultInstruction__Class* klass;
        MonitorData* monitor;
        struct EnterTryFaultInstruction__Fields fields;
    };

    struct __declspec(align(8)) TryFaultHandler__Fields {
        int32_t TryStartIndex;
        int32_t TryEndIndex;
        int32_t FinallyStartIndex;
        int32_t FinallyEndIndex;
    };

    struct TryFaultHandler {
        struct TryFaultHandler__Class* klass;
        MonitorData* monitor;
        struct TryFaultHandler__Fields fields;
    };

    struct TryFaultHandler__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TryFaultHandler__StaticFields {
    };

    struct TryFaultHandler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TryFaultHandler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TryFaultHandler__VTable vtable;
    };

    struct EnterTryFaultInstruction__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_ConsumedStack;
        VirtualInvokeData get_ProducedStack;
        VirtualInvokeData get_ConsumedContinuations;
        VirtualInvokeData get_ProducedContinuations;
        VirtualInvokeData Run;
        VirtualInvokeData get_InstructionName;
        VirtualInvokeData ToDebugString;
    };

    struct EnterTryFaultInstruction__StaticFields {
    };

    struct EnterTryFaultInstruction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnterTryFaultInstruction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnterTryFaultInstruction__VTable vtable;
    };

    struct EnterFinallyInstruction__Fields {
        struct IndexedBranchInstruction__Fields _;
    };

    struct EnterFinallyInstruction {
        struct EnterFinallyInstruction__Class* klass;
        MonitorData* monitor;
        struct EnterFinallyInstruction__Fields fields;
    };

    struct EnterFinallyInstruction__Array {
        struct EnterFinallyInstruction__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct EnterFinallyInstruction* vector[32];
    };

    struct EnterFinallyInstruction__Array__VTable {
    };

    struct EnterFinallyInstruction__Array__StaticFields {
    };

    struct EnterFinallyInstruction__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnterFinallyInstruction__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnterFinallyInstruction__Array__VTable vtable;
    };

    struct EnterFinallyInstruction__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_ConsumedStack;
        VirtualInvokeData get_ProducedStack;
        VirtualInvokeData get_ConsumedContinuations;
        VirtualInvokeData get_ProducedContinuations;
        VirtualInvokeData Run;
        VirtualInvokeData get_InstructionName;
        VirtualInvokeData ToDebugString;
    };

    struct EnterFinallyInstruction__StaticFields {
        struct EnterFinallyInstruction__Array* s_cache;
    };

    struct EnterFinallyInstruction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnterFinallyInstruction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnterFinallyInstruction__VTable vtable;
    };

    struct LeaveFinallyInstruction {
        struct LeaveFinallyInstruction__Class* klass;
        MonitorData* monitor;
    };

    struct LeaveFinallyInstruction__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_ConsumedStack;
        VirtualInvokeData get_ProducedStack;
        VirtualInvokeData get_ConsumedContinuations;
        VirtualInvokeData get_ProducedContinuations;
        VirtualInvokeData Run;
        VirtualInvokeData get_InstructionName;
        VirtualInvokeData ToDebugString;
    };

    struct LeaveFinallyInstruction__StaticFields {
        struct Instruction* Instance;
    };

    struct LeaveFinallyInstruction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LeaveFinallyInstruction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LeaveFinallyInstruction__VTable vtable;
    };

    struct EnterFaultInstruction__Fields {
        struct IndexedBranchInstruction__Fields _;
    };

    struct EnterFaultInstruction {
        struct EnterFaultInstruction__Class* klass;
        MonitorData* monitor;
        struct EnterFaultInstruction__Fields fields;
    };

    struct EnterFaultInstruction__Array {
        struct EnterFaultInstruction__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct EnterFaultInstruction* vector[32];
    };

    struct EnterFaultInstruction__Array__VTable {
    };

    struct EnterFaultInstruction__Array__StaticFields {
    };

    struct EnterFaultInstruction__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnterFaultInstruction__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnterFaultInstruction__Array__VTable vtable;
    };

    struct EnterFaultInstruction__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_ConsumedStack;
        VirtualInvokeData get_ProducedStack;
        VirtualInvokeData get_ConsumedContinuations;
        VirtualInvokeData get_ProducedContinuations;
        VirtualInvokeData Run;
        VirtualInvokeData get_InstructionName;
        VirtualInvokeData ToDebugString;
    };

    struct EnterFaultInstruction__StaticFields {
        struct EnterFaultInstruction__Array* s_cache;
    };

    struct EnterFaultInstruction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnterFaultInstruction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnterFaultInstruction__VTable vtable;
    };

    struct LeaveFaultInstruction {
        struct LeaveFaultInstruction__Class* klass;
        MonitorData* monitor;
    };

    struct LeaveFaultInstruction__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_ConsumedStack;
        VirtualInvokeData get_ProducedStack;
        VirtualInvokeData get_ConsumedContinuations;
        VirtualInvokeData get_ProducedContinuations;
        VirtualInvokeData Run;
        VirtualInvokeData get_InstructionName;
        VirtualInvokeData ToDebugString;
    };

    struct LeaveFaultInstruction__StaticFields {
        struct Instruction* Instance;
    };

    struct LeaveFaultInstruction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LeaveFaultInstruction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LeaveFaultInstruction__VTable vtable;
    };

    struct EnterExceptionFilterInstruction {
        struct EnterExceptionFilterInstruction__Class* klass;
        MonitorData* monitor;
    };

    struct EnterExceptionFilterInstruction__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_ConsumedStack;
        VirtualInvokeData get_ProducedStack;
        VirtualInvokeData get_ConsumedContinuations;
        VirtualInvokeData get_ProducedContinuations;
        VirtualInvokeData Run;
        VirtualInvokeData get_InstructionName;
        VirtualInvokeData ToDebugString;
    };

    struct EnterExceptionFilterInstruction__StaticFields {
        struct EnterExceptionFilterInstruction* Instance;
    };

    struct EnterExceptionFilterInstruction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnterExceptionFilterInstruction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnterExceptionFilterInstruction__VTable vtable;
    };

    struct LeaveExceptionFilterInstruction {
        struct LeaveExceptionFilterInstruction__Class* klass;
        MonitorData* monitor;
    };

    struct LeaveExceptionFilterInstruction__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_ConsumedStack;
        VirtualInvokeData get_ProducedStack;
        VirtualInvokeData get_ConsumedContinuations;
        VirtualInvokeData get_ProducedContinuations;
        VirtualInvokeData Run;
        VirtualInvokeData get_InstructionName;
        VirtualInvokeData ToDebugString;
    };

    struct LeaveExceptionFilterInstruction__StaticFields {
        struct LeaveExceptionFilterInstruction* Instance;
    };

    struct LeaveExceptionFilterInstruction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LeaveExceptionFilterInstruction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LeaveExceptionFilterInstruction__VTable vtable;
    };

    struct __declspec(align(8)) EnterExceptionHandlerInstruction__Fields {
        bool _hasValue;
    };

    struct EnterExceptionHandlerInstruction {
        struct EnterExceptionHandlerInstruction__Class* klass;
        MonitorData* monitor;
        struct EnterExceptionHandlerInstruction__Fields fields;
    };

    struct EnterExceptionHandlerInstruction__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_ConsumedStack;
        VirtualInvokeData get_ProducedStack;
        VirtualInvokeData get_ConsumedContinuations;
        VirtualInvokeData get_ProducedContinuations;
        VirtualInvokeData Run;
        VirtualInvokeData get_InstructionName;
        VirtualInvokeData ToDebugString;
    };

    struct EnterExceptionHandlerInstruction__StaticFields {
        struct EnterExceptionHandlerInstruction* Void;
        struct EnterExceptionHandlerInstruction* NonVoid;
    };

    struct EnterExceptionHandlerInstruction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnterExceptionHandlerInstruction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnterExceptionHandlerInstruction__VTable vtable;
    };

    struct LeaveExceptionHandlerInstruction__Fields {
        struct IndexedBranchInstruction__Fields _;
        bool _hasValue;
    };

    struct LeaveExceptionHandlerInstruction {
        struct LeaveExceptionHandlerInstruction__Class* klass;
        MonitorData* monitor;
        struct LeaveExceptionHandlerInstruction__Fields fields;
    };

    struct LeaveExceptionHandlerInstruction__Array {
        struct LeaveExceptionHandlerInstruction__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct LeaveExceptionHandlerInstruction* vector[32];
    };

    struct LeaveExceptionHandlerInstruction__Array__VTable {
    };

    struct LeaveExceptionHandlerInstruction__Array__StaticFields {
    };

    struct LeaveExceptionHandlerInstruction__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LeaveExceptionHandlerInstruction__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LeaveExceptionHandlerInstruction__Array__VTable vtable;
    };

    struct LeaveExceptionHandlerInstruction__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_ConsumedStack;
        VirtualInvokeData get_ProducedStack;
        VirtualInvokeData get_ConsumedContinuations;
        VirtualInvokeData get_ProducedContinuations;
        VirtualInvokeData Run;
        VirtualInvokeData get_InstructionName;
        VirtualInvokeData ToDebugString;
    };

    struct LeaveExceptionHandlerInstruction__StaticFields {
        struct LeaveExceptionHandlerInstruction__Array* s_cache;
    };

    struct LeaveExceptionHandlerInstruction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LeaveExceptionHandlerInstruction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LeaveExceptionHandlerInstruction__VTable vtable;
    };

    struct __declspec(align(8)) ThrowInstruction__Fields {
        bool _hasResult;
        bool _rethrow;
    };

    struct ThrowInstruction {
        struct ThrowInstruction__Class* klass;
        MonitorData* monitor;
        struct ThrowInstruction__Fields fields;
    };

    struct ThrowInstruction__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_ConsumedStack;
        VirtualInvokeData get_ProducedStack;
        VirtualInvokeData get_ConsumedContinuations;
        VirtualInvokeData get_ProducedContinuations;
        VirtualInvokeData Run;
        VirtualInvokeData get_InstructionName;
        VirtualInvokeData ToDebugString;
    };

    struct ThrowInstruction__StaticFields {
        struct ThrowInstruction* Throw;
        struct ThrowInstruction* VoidThrow;
        struct ThrowInstruction* Rethrow;
        struct ThrowInstruction* VoidRethrow;
        struct ConstructorInfo* _runtimeWrappedExceptionCtor;
    };

    struct ThrowInstruction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ThrowInstruction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ThrowInstruction__VTable vtable;
    };

    struct __declspec(align(8)) StringSwitchInstruction__Fields {
        struct Dictionary_2_System_String_System_Int32_* _cases;
        struct StrongBox_1_System_Int32_* _nullCase;
    };

    struct StringSwitchInstruction {
        struct StringSwitchInstruction__Class* klass;
        MonitorData* monitor;
        struct StringSwitchInstruction__Fields fields;
    };

    struct __declspec(align(8)) StrongBox_1_System_Int32___Fields {
        int32_t Value;
    };

    struct StrongBox_1_System_Int32_ {
        struct StrongBox_1_System_Int32___Class* klass;
        MonitorData* monitor;
        struct StrongBox_1_System_Int32___Fields fields;
    };

    struct StrongBox_1_System_Int32___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Runtime_CompilerServices_IStrongBox_get_Value;
        VirtualInvokeData System_Runtime_CompilerServices_IStrongBox_set_Value;
    };

    struct StrongBox_1_System_Int32___StaticFields {
    };

    struct StrongBox_1_System_Int32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StrongBox_1_System_Int32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StrongBox_1_System_Int32___VTable vtable;
    };

    struct StringSwitchInstruction__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_ConsumedStack;
        VirtualInvokeData get_ProducedStack;
        VirtualInvokeData get_ConsumedContinuations;
        VirtualInvokeData get_ProducedContinuations;
        VirtualInvokeData Run;
        VirtualInvokeData get_InstructionName;
        VirtualInvokeData ToDebugString;
    };

    struct StringSwitchInstruction__StaticFields {
    };

    struct StringSwitchInstruction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StringSwitchInstruction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StringSwitchInstruction__VTable vtable;
    };

    struct DecrementInstruction {
        struct DecrementInstruction__Class* klass;
        MonitorData* monitor;
    };

    struct DecrementInstruction_DecrementInt16 {
        struct DecrementInstruction_DecrementInt16__Class* klass;
        MonitorData* monitor;
    };

    struct DecrementInstruction_DecrementInt16__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_ConsumedStack;
        VirtualInvokeData get_ProducedStack;
        VirtualInvokeData get_ConsumedContinuations;
        VirtualInvokeData get_ProducedContinuations;
        VirtualInvokeData Run;
        VirtualInvokeData get_InstructionName;
        VirtualInvokeData ToDebugString;
    };

    struct DecrementInstruction_DecrementInt16__StaticFields {
    };

    struct DecrementInstruction_DecrementInt16__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DecrementInstruction_DecrementInt16__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DecrementInstruction_DecrementInt16__VTable vtable;
    };

    struct DecrementInstruction__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_ConsumedStack;
        VirtualInvokeData get_ProducedStack;
        VirtualInvokeData get_ConsumedContinuations;
        VirtualInvokeData get_ProducedContinuations;
        VirtualInvokeData __unknown;
        VirtualInvokeData get_InstructionName;
        VirtualInvokeData ToDebugString;
    };

    struct DecrementInstruction__StaticFields {
        struct Instruction* s_Int16;
        struct Instruction* s_Int32;
        struct Instruction* s_Int64;
        struct Instruction* s_UInt16;
        struct Instruction* s_UInt32;
        struct Instruction* s_UInt64;
        struct Instruction* s_Single;
        struct Instruction* s_Double;
    };

    struct DecrementInstruction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DecrementInstruction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DecrementInstruction__VTable vtable;
    };

    struct DecrementInstruction_DecrementInt32 {
        struct DecrementInstruction_DecrementInt32__Class* klass;
        MonitorData* monitor;
    };

    struct DecrementInstruction_DecrementInt32__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_ConsumedStack;
        VirtualInvokeData get_ProducedStack;
        VirtualInvokeData get_ConsumedContinuations;
        VirtualInvokeData get_ProducedContinuations;
        VirtualInvokeData Run;
        VirtualInvokeData get_InstructionName;
        VirtualInvokeData ToDebugString;
    };

    struct DecrementInstruction_DecrementInt32__StaticFields {
    };

    struct DecrementInstruction_DecrementInt32__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DecrementInstruction_DecrementInt32__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DecrementInstruction_DecrementInt32__VTable vtable;
    };

    struct DecrementInstruction_DecrementInt64 {
        struct DecrementInstruction_DecrementInt64__Class* klass;
        MonitorData* monitor;
    };

    struct DecrementInstruction_DecrementInt64__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_ConsumedStack;
        VirtualInvokeData get_ProducedStack;
        VirtualInvokeData get_ConsumedContinuations;
        VirtualInvokeData get_ProducedContinuations;
        VirtualInvokeData Run;
        VirtualInvokeData get_InstructionName;
        VirtualInvokeData ToDebugString;
    };

    struct DecrementInstruction_DecrementInt64__StaticFields {
    };

    struct DecrementInstruction_DecrementInt64__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DecrementInstruction_DecrementInt64__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DecrementInstruction_DecrementInt64__VTable vtable;
    };

    struct DecrementInstruction_DecrementUInt16 {
        struct DecrementInstruction_DecrementUInt16__Class* klass;
        MonitorData* monitor;
    };

    struct DecrementInstruction_DecrementUInt16__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_ConsumedStack;
        VirtualInvokeData get_ProducedStack;
        VirtualInvokeData get_ConsumedContinuations;
        VirtualInvokeData get_ProducedContinuations;
        VirtualInvokeData Run;
        VirtualInvokeData get_InstructionName;
        VirtualInvokeData ToDebugString;
    };

} // namespace app
