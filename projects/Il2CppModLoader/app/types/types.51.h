namespace app {
struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Int32___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UnsafeOnCompleted;
    VirtualInvokeData OnCompleted;
};

struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Int32___StaticFields {
};

struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Int32___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Int32___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Int32___VTable vtable;
};

struct CryptoStream_ReadAsyncInternal_d_34__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData MoveNext;
    VirtualInvokeData SetStateMachine;
};

struct CryptoStream_ReadAsyncInternal_d_34__StaticFields {
};

struct CryptoStream_ReadAsyncInternal_d_34__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CryptoStream_ReadAsyncInternal_d_34__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CryptoStream_ReadAsyncInternal_d_34__VTable vtable;
};

struct AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult_ {
    struct AsyncMethodBuilderCore m_coreState;
    struct Task_1_VoidTaskResult_ *m_task;
};

struct AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Boxed {
    struct AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Class *klass;
    MonitorData *monitor;
    struct AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult_ fields;
};

struct AsyncTaskMethodBuilder {
    struct AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult_ m_builder;
};

struct AsyncTaskMethodBuilder__Boxed {
    struct AsyncTaskMethodBuilder__Class *klass;
    MonitorData *monitor;
    struct AsyncTaskMethodBuilder fields;
};

struct CryptoStream_WriteAsyncInternal_d_37 {
    int32_t __1__state;
    struct AsyncTaskMethodBuilder __t__builder;
    struct CryptoStream *__4__this;
    int32_t count;
    int32_t offset;
    struct Byte__Array *buffer;
    struct CancellationToken cancellationToken;
    int32_t _bytesToWrite_5__1;
    int32_t _currentInputIndex_5__2;
    int32_t _numWholeBlocksInBytes_5__3;
    struct SemaphoreSlim *_sem_5__4;
    struct CryptoStream_HopToThreadPoolAwaitable __u__1;
    struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2;
};

struct CryptoStream_WriteAsyncInternal_d_37__Boxed {
    struct CryptoStream_WriteAsyncInternal_d_37__Class *klass;
    MonitorData *monitor;
    struct CryptoStream_WriteAsyncInternal_d_37 fields;
};

struct AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___StaticFields {
    struct Task_1_VoidTaskResult_ *s_defaultResultTask;
};

struct AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AsyncTaskMethodBuilder_1_System_Threading_Tasks_VoidTaskResult___VTable vtable;
};

struct AsyncTaskMethodBuilder__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AsyncTaskMethodBuilder__StaticFields {
    struct Task_1_VoidTaskResult_ *s_cachedCompleted;
};

struct AsyncTaskMethodBuilder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AsyncTaskMethodBuilder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AsyncTaskMethodBuilder__VTable vtable;
};

struct CryptoStream_WriteAsyncInternal_d_37__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData MoveNext;
    VirtualInvokeData SetStateMachine;
};

struct CryptoStream_WriteAsyncInternal_d_37__StaticFields {
};

struct CryptoStream_WriteAsyncInternal_d_37__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CryptoStream_WriteAsyncInternal_d_37__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CryptoStream_WriteAsyncInternal_d_37__VTable vtable;
};

struct DeriveBytes {
    struct DeriveBytes__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) PasswordDeriveBytes__Fields {
    int32_t _extraCount;
    int32_t _prefix;
    int32_t _iterations;
    struct Byte__Array *_baseValue;
    struct Byte__Array *_extra;
    struct Byte__Array *_salt;
    struct String *_hashName;
    struct Byte__Array *_password;
    struct HashAlgorithm *_hash;
};

struct PasswordDeriveBytes {
    struct PasswordDeriveBytes__Class *klass;
    MonitorData *monitor;
    struct PasswordDeriveBytes__Fields fields;
};

struct PasswordDeriveBytes__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData GetBytes;
    VirtualInvokeData Reset;
    VirtualInvokeData Dispose_1;
};

struct PasswordDeriveBytes__StaticFields {
};

struct PasswordDeriveBytes__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PasswordDeriveBytes__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PasswordDeriveBytes__VTable vtable;
};

struct DeriveBytes__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData Dispose_1;
};

struct DeriveBytes__StaticFields {
};

struct DeriveBytes__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DeriveBytes__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DeriveBytes__VTable vtable;
};

struct DES__Fields {
    struct SymmetricAlgorithm__Fields _;
};

struct DES {
    struct DES__Class *klass;
    MonitorData *monitor;
    struct DES__Fields fields;
};

struct DESCryptoServiceProvider__Fields {
    struct DES__Fields _;
};

struct DESCryptoServiceProvider {
    struct DESCryptoServiceProvider__Class *klass;
    MonitorData *monitor;
    struct DESCryptoServiceProvider__Fields fields;
};

struct DESCryptoServiceProvider__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData Dispose_1;
    VirtualInvokeData get_BlockSize;
    VirtualInvokeData set_BlockSize;
    VirtualInvokeData get_FeedbackSize;
    VirtualInvokeData set_FeedbackSize;
    VirtualInvokeData get_IV;
    VirtualInvokeData set_IV;
    VirtualInvokeData get_Key;
    VirtualInvokeData set_Key;
    VirtualInvokeData get_LegalBlockSizes;
    VirtualInvokeData get_LegalKeySizes;
    VirtualInvokeData get_KeySize;
    VirtualInvokeData set_KeySize;
    VirtualInvokeData get_Mode;
    VirtualInvokeData set_Mode;
    VirtualInvokeData get_Padding;
    VirtualInvokeData set_Padding;
    VirtualInvokeData CreateEncryptor;
    VirtualInvokeData CreateEncryptor_1;
    VirtualInvokeData CreateDecryptor;
    VirtualInvokeData CreateDecryptor_1;
    VirtualInvokeData GenerateKey;
    VirtualInvokeData GenerateIV;
};

struct DESCryptoServiceProvider__StaticFields {
};

struct DESCryptoServiceProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DESCryptoServiceProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DESCryptoServiceProvider__VTable vtable;
};

struct DES__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData Dispose_1;
    VirtualInvokeData get_BlockSize;
    VirtualInvokeData set_BlockSize;
    VirtualInvokeData get_FeedbackSize;
    VirtualInvokeData set_FeedbackSize;
    VirtualInvokeData get_IV;
    VirtualInvokeData set_IV;
    VirtualInvokeData get_Key;
    VirtualInvokeData set_Key;
    VirtualInvokeData get_LegalBlockSizes;
    VirtualInvokeData get_LegalKeySizes;
    VirtualInvokeData get_KeySize;
    VirtualInvokeData set_KeySize;
    VirtualInvokeData get_Mode;
    VirtualInvokeData set_Mode;
    VirtualInvokeData get_Padding;
    VirtualInvokeData set_Padding;
    VirtualInvokeData CreateEncryptor;
    VirtualInvokeData __unknown;
    VirtualInvokeData CreateDecryptor;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
    VirtualInvokeData __unknown_3;
};

struct DES__StaticFields {
    struct KeySizes__Array *s_legalBlockSizes;
    struct KeySizes__Array *s_legalKeySizes;
};

struct DES__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DES__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DES__VTable vtable;
};

struct KeyedHashAlgorithm__Fields {
    struct HashAlgorithm__Fields _;
    struct Byte__Array *KeyValue;
};

struct KeyedHashAlgorithm {
    struct KeyedHashAlgorithm__Class *klass;
    MonitorData *monitor;
    struct KeyedHashAlgorithm__Fields fields;
};

struct HMAC__Fields {
    struct KeyedHashAlgorithm__Fields _;
    int32_t blockSizeValue;
    struct String *m_hashName;
    struct HashAlgorithm *m_hash1;
    struct HashAlgorithm *m_hash2;
    struct Byte__Array *m_inner;
    struct Byte__Array *m_outer;
    bool m_hashing;
};

struct HMAC {
    struct HMAC__Class *klass;
    MonitorData *monitor;
    struct HMAC__Fields fields;
};

struct KeyedHashAlgorithm__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData get_InputBlockSize;
    VirtualInvokeData get_OutputBlockSize;
    VirtualInvokeData get_CanTransformMultipleBlocks;
    VirtualInvokeData get_CanReuseTransform;
    VirtualInvokeData TransformBlock;
    VirtualInvokeData TransformFinalBlock;
    VirtualInvokeData get_HashSize;
    VirtualInvokeData get_Hash;
    VirtualInvokeData get_InputBlockSize_1;
    VirtualInvokeData get_OutputBlockSize_1;
    VirtualInvokeData get_CanTransformMultipleBlocks_1;
    VirtualInvokeData get_CanReuseTransform_1;
    VirtualInvokeData Dispose_1;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
    VirtualInvokeData get_Key;
    VirtualInvokeData set_Key;
};

struct KeyedHashAlgorithm__StaticFields {
};

struct KeyedHashAlgorithm__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyedHashAlgorithm__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyedHashAlgorithm__VTable vtable;
};

struct HMAC__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData get_InputBlockSize;
    VirtualInvokeData get_OutputBlockSize;
    VirtualInvokeData get_CanTransformMultipleBlocks;
    VirtualInvokeData get_CanReuseTransform;
    VirtualInvokeData TransformBlock;
    VirtualInvokeData TransformFinalBlock;
    VirtualInvokeData get_HashSize;
    VirtualInvokeData get_Hash;
    VirtualInvokeData get_InputBlockSize_1;
    VirtualInvokeData get_OutputBlockSize_1;
    VirtualInvokeData get_CanTransformMultipleBlocks_1;
    VirtualInvokeData get_CanReuseTransform_1;
    VirtualInvokeData Dispose_1;
    VirtualInvokeData Initialize;
    VirtualInvokeData HashCore;
    VirtualInvokeData HashFinal;
    VirtualInvokeData get_Key;
    VirtualInvokeData set_Key;
};

struct HMAC__StaticFields {
};

struct HMAC__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HMAC__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HMAC__VTable vtable;
};

struct Func_1_System_Security_Cryptography_HashAlgorithm___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_1_System_Security_Cryptography_HashAlgorithm_ {
    struct Func_1_System_Security_Cryptography_HashAlgorithm___Class *klass;
    MonitorData *monitor;
    struct Func_1_System_Security_Cryptography_HashAlgorithm___Fields fields;
};

struct Func_1_System_Security_Cryptography_HashAlgorithm___VTable {
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

struct Func_1_System_Security_Cryptography_HashAlgorithm___StaticFields {
};

struct Func_1_System_Security_Cryptography_HashAlgorithm___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_1_System_Security_Cryptography_HashAlgorithm___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_1_System_Security_Cryptography_HashAlgorithm___VTable vtable;
};

struct HMACMD5__Fields {
    struct HMAC__Fields _;
};

struct HMACMD5 {
    struct HMACMD5__Class *klass;
    MonitorData *monitor;
    struct HMACMD5__Fields fields;
};

struct HMACMD5__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData get_InputBlockSize;
    VirtualInvokeData get_OutputBlockSize;
    VirtualInvokeData get_CanTransformMultipleBlocks;
    VirtualInvokeData get_CanReuseTransform;
    VirtualInvokeData TransformBlock;
    VirtualInvokeData TransformFinalBlock;
    VirtualInvokeData get_HashSize;
    VirtualInvokeData get_Hash;
    VirtualInvokeData get_InputBlockSize_1;
    VirtualInvokeData get_OutputBlockSize_1;
    VirtualInvokeData get_CanTransformMultipleBlocks_1;
    VirtualInvokeData get_CanReuseTransform_1;
    VirtualInvokeData Dispose_1;
    VirtualInvokeData Initialize;
    VirtualInvokeData HashCore;
    VirtualInvokeData HashFinal;
    VirtualInvokeData get_Key;
    VirtualInvokeData set_Key;
};

struct HMACMD5__StaticFields {
};

struct HMACMD5__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HMACMD5__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HMACMD5__VTable vtable;
};

struct HMACRIPEMD160__Fields {
    struct HMAC__Fields _;
};

struct HMACRIPEMD160 {
    struct HMACRIPEMD160__Class *klass;
    MonitorData *monitor;
    struct HMACRIPEMD160__Fields fields;
};

struct HMACRIPEMD160__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData get_InputBlockSize;
    VirtualInvokeData get_OutputBlockSize;
    VirtualInvokeData get_CanTransformMultipleBlocks;
    VirtualInvokeData get_CanReuseTransform;
    VirtualInvokeData TransformBlock;
    VirtualInvokeData TransformFinalBlock;
    VirtualInvokeData get_HashSize;
    VirtualInvokeData get_Hash;
    VirtualInvokeData get_InputBlockSize_1;
    VirtualInvokeData get_OutputBlockSize_1;
    VirtualInvokeData get_CanTransformMultipleBlocks_1;
    VirtualInvokeData get_CanReuseTransform_1;
    VirtualInvokeData Dispose_1;
    VirtualInvokeData Initialize;
    VirtualInvokeData HashCore;
    VirtualInvokeData HashFinal;
    VirtualInvokeData get_Key;
    VirtualInvokeData set_Key;
};

struct HMACRIPEMD160__StaticFields {
};

struct HMACRIPEMD160__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HMACRIPEMD160__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HMACRIPEMD160__VTable vtable;
};

struct HMACSHA1__Fields {
    struct HMAC__Fields _;
};

struct HMACSHA1 {
    struct HMACSHA1__Class *klass;
    MonitorData *monitor;
    struct HMACSHA1__Fields fields;
};

struct HMACSHA1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData get_InputBlockSize;
    VirtualInvokeData get_OutputBlockSize;
    VirtualInvokeData get_CanTransformMultipleBlocks;
    VirtualInvokeData get_CanReuseTransform;
    VirtualInvokeData TransformBlock;
    VirtualInvokeData TransformFinalBlock;
    VirtualInvokeData get_HashSize;
    VirtualInvokeData get_Hash;
    VirtualInvokeData get_InputBlockSize_1;
    VirtualInvokeData get_OutputBlockSize_1;
    VirtualInvokeData get_CanTransformMultipleBlocks_1;
    VirtualInvokeData get_CanReuseTransform_1;
    VirtualInvokeData Dispose_1;
    VirtualInvokeData Initialize;
    VirtualInvokeData HashCore;
    VirtualInvokeData HashFinal;
    VirtualInvokeData get_Key;
    VirtualInvokeData set_Key;
};

struct HMACSHA1__StaticFields {
};

struct HMACSHA1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HMACSHA1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HMACSHA1__VTable vtable;
};

struct HMACSHA256__Fields {
    struct HMAC__Fields _;
};

struct HMACSHA256 {
    struct HMACSHA256__Class *klass;
    MonitorData *monitor;
    struct HMACSHA256__Fields fields;
};

struct HMACSHA256__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData get_InputBlockSize;
    VirtualInvokeData get_OutputBlockSize;
    VirtualInvokeData get_CanTransformMultipleBlocks;
    VirtualInvokeData get_CanReuseTransform;
    VirtualInvokeData TransformBlock;
    VirtualInvokeData TransformFinalBlock;
    VirtualInvokeData get_HashSize;
    VirtualInvokeData get_Hash;
    VirtualInvokeData get_InputBlockSize_1;
    VirtualInvokeData get_OutputBlockSize_1;
    VirtualInvokeData get_CanTransformMultipleBlocks_1;
    VirtualInvokeData get_CanReuseTransform_1;
    VirtualInvokeData Dispose_1;
    VirtualInvokeData Initialize;
    VirtualInvokeData HashCore;
    VirtualInvokeData HashFinal;
    VirtualInvokeData get_Key;
    VirtualInvokeData set_Key;
};

struct HMACSHA256__StaticFields {
};

struct HMACSHA256__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HMACSHA256__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HMACSHA256__VTable vtable;
};

struct HMACSHA384__Fields {
    struct HMAC__Fields _;
    bool m_useLegacyBlockSize;
};

struct HMACSHA384 {
    struct HMACSHA384__Class *klass;
    MonitorData *monitor;
    struct HMACSHA384__Fields fields;
};

struct HMACSHA384__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData get_InputBlockSize;
    VirtualInvokeData get_OutputBlockSize;
    VirtualInvokeData get_CanTransformMultipleBlocks;
    VirtualInvokeData get_CanReuseTransform;
    VirtualInvokeData TransformBlock;
    VirtualInvokeData TransformFinalBlock;
    VirtualInvokeData get_HashSize;
    VirtualInvokeData get_Hash;
    VirtualInvokeData get_InputBlockSize_1;
    VirtualInvokeData get_OutputBlockSize_1;
    VirtualInvokeData get_CanTransformMultipleBlocks_1;
    VirtualInvokeData get_CanReuseTransform_1;
    VirtualInvokeData Dispose_1;
    VirtualInvokeData Initialize;
    VirtualInvokeData HashCore;
    VirtualInvokeData HashFinal;
    VirtualInvokeData get_Key;
    VirtualInvokeData set_Key;
};

struct HMACSHA384__StaticFields {
};

struct HMACSHA384__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HMACSHA384__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HMACSHA384__VTable vtable;
};

struct HMACSHA512__Fields {
    struct HMAC__Fields _;
    bool m_useLegacyBlockSize;
};

struct HMACSHA512 {
    struct HMACSHA512__Class *klass;
    MonitorData *monitor;
    struct HMACSHA512__Fields fields;
};

struct HMACSHA512__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData get_InputBlockSize;
    VirtualInvokeData get_OutputBlockSize;
    VirtualInvokeData get_CanTransformMultipleBlocks;
    VirtualInvokeData get_CanReuseTransform;
    VirtualInvokeData TransformBlock;
    VirtualInvokeData TransformFinalBlock;
    VirtualInvokeData get_HashSize;
    VirtualInvokeData get_Hash;
    VirtualInvokeData get_InputBlockSize_1;
    VirtualInvokeData get_OutputBlockSize_1;
    VirtualInvokeData get_CanTransformMultipleBlocks_1;
    VirtualInvokeData get_CanReuseTransform_1;
    VirtualInvokeData Dispose_1;
    VirtualInvokeData Initialize;
    VirtualInvokeData HashCore;
    VirtualInvokeData HashFinal;
    VirtualInvokeData get_Key;
    VirtualInvokeData set_Key;
};

struct HMACSHA512__StaticFields {
};

struct HMACSHA512__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HMACSHA512__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HMACSHA512__VTable vtable;
};

struct MACTripleDES__Fields {
    struct KeyedHashAlgorithm__Fields _;
    struct ICryptoTransform *m_encryptor;
    struct CryptoStream *_cs_1;
    struct TailStream *_ts;
    int32_t m_bytesPerBlock;
    struct TripleDES *des;
};

struct MACTripleDES {
    struct MACTripleDES__Class *klass;
    MonitorData *monitor;
    struct MACTripleDES__Fields fields;
};

struct TailStream__Fields {
    struct Stream__Fields _;
    struct Byte__Array *_Buffer;
    int32_t _BufferSize;
    int32_t _BufferIndex;
    bool _BufferFull;
};

struct TailStream {
    struct TailStream__Class *klass;
    MonitorData *monitor;
    struct TailStream__Fields fields;
};

struct TripleDES__Fields {
    struct SymmetricAlgorithm__Fields _;
};

struct TripleDES {
    struct TripleDES__Class *klass;
    MonitorData *monitor;
    struct TripleDES__Fields fields;
};

struct TripleDESCryptoServiceProvider__Fields {
    struct TripleDES__Fields _;
};

struct TripleDESCryptoServiceProvider {
    struct TripleDESCryptoServiceProvider__Class *klass;
    MonitorData *monitor;
    struct TripleDESCryptoServiceProvider__Fields fields;
};

struct TailStream__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CreateObjRef;
    VirtualInvokeData InitializeLifetimeService;
    VirtualInvokeData Dispose;
    VirtualInvokeData get_CanRead;
    VirtualInvokeData get_CanSeek;
    VirtualInvokeData get_CanTimeout;
    VirtualInvokeData get_CanWrite;
    VirtualInvokeData get_Length;
    VirtualInvokeData get_Position;
    VirtualInvokeData set_Position;
    VirtualInvokeData get_ReadTimeout;
    VirtualInvokeData set_ReadTimeout;
    VirtualInvokeData get_WriteTimeout;
    VirtualInvokeData set_WriteTimeout;
    VirtualInvokeData Close;
    VirtualInvokeData Dispose_1;
    VirtualInvokeData Flush;
    VirtualInvokeData FlushAsync;
    VirtualInvokeData BeginRead;
    VirtualInvokeData EndRead;
    VirtualInvokeData ReadAsync;
    VirtualInvokeData BeginWrite;
    VirtualInvokeData EndWrite;
    VirtualInvokeData WriteAsync;
    VirtualInvokeData Seek;
    VirtualInvokeData SetLength;
    VirtualInvokeData Read;
    VirtualInvokeData ReadByte;
    VirtualInvokeData Write;
    VirtualInvokeData WriteByte;
};

struct TailStream__StaticFields {
};

struct TailStream__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TailStream__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TailStream__VTable vtable;
};

struct TripleDESCryptoServiceProvider__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData Dispose_1;
    VirtualInvokeData get_BlockSize;
    VirtualInvokeData set_BlockSize;
    VirtualInvokeData get_FeedbackSize;
    VirtualInvokeData set_FeedbackSize;
    VirtualInvokeData get_IV;
    VirtualInvokeData set_IV;
    VirtualInvokeData get_Key;
    VirtualInvokeData set_Key;
    VirtualInvokeData get_LegalBlockSizes;
    VirtualInvokeData get_LegalKeySizes;
    VirtualInvokeData get_KeySize;
    VirtualInvokeData set_KeySize;
    VirtualInvokeData get_Mode;
    VirtualInvokeData set_Mode;
    VirtualInvokeData get_Padding;
    VirtualInvokeData set_Padding;
    VirtualInvokeData CreateEncryptor;
    VirtualInvokeData CreateEncryptor_1;
    VirtualInvokeData CreateDecryptor;
    VirtualInvokeData CreateDecryptor_1;
    VirtualInvokeData GenerateKey;
    VirtualInvokeData GenerateIV;
};

struct TripleDESCryptoServiceProvider__StaticFields {
};

struct TripleDESCryptoServiceProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TripleDESCryptoServiceProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TripleDESCryptoServiceProvider__VTable vtable;
};

struct TripleDES__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData Dispose_1;
    VirtualInvokeData get_BlockSize;
    VirtualInvokeData set_BlockSize;
    VirtualInvokeData get_FeedbackSize;
    VirtualInvokeData set_FeedbackSize;
    VirtualInvokeData get_IV;
    VirtualInvokeData set_IV;
    VirtualInvokeData get_Key;
    VirtualInvokeData set_Key;
    VirtualInvokeData get_LegalBlockSizes;
    VirtualInvokeData get_LegalKeySizes;
    VirtualInvokeData get_KeySize;
    VirtualInvokeData set_KeySize;
    VirtualInvokeData get_Mode;
    VirtualInvokeData set_Mode;
    VirtualInvokeData get_Padding;
    VirtualInvokeData set_Padding;
    VirtualInvokeData CreateEncryptor;
    VirtualInvokeData __unknown;
    VirtualInvokeData CreateDecryptor;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
    VirtualInvokeData __unknown_3;
};

struct TripleDES__StaticFields {
    struct KeySizes__Array *s_legalBlockSizes;
    struct KeySizes__Array *s_legalKeySizes;
};

struct TripleDES__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TripleDES__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TripleDES__VTable vtable;
};

struct MACTripleDES__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData get_InputBlockSize;
    VirtualInvokeData get_OutputBlockSize;
    VirtualInvokeData get_CanTransformMultipleBlocks;
    VirtualInvokeData get_CanReuseTransform;
    VirtualInvokeData TransformBlock;
    VirtualInvokeData TransformFinalBlock;
    VirtualInvokeData get_HashSize;
    VirtualInvokeData get_Hash;
    VirtualInvokeData get_InputBlockSize_1;
    VirtualInvokeData get_OutputBlockSize_1;
    VirtualInvokeData get_CanTransformMultipleBlocks_1;
    VirtualInvokeData get_CanReuseTransform_1;
    VirtualInvokeData Dispose_1;
    VirtualInvokeData Initialize;
    VirtualInvokeData HashCore;
    VirtualInvokeData HashFinal;
    VirtualInvokeData get_Key;
    VirtualInvokeData set_Key;
};

struct MACTripleDES__StaticFields {
};

struct MACTripleDES__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MACTripleDES__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MACTripleDES__VTable vtable;
};

struct MaskGenerationMethod {
    struct MaskGenerationMethod__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) PKCS1MaskGenerationMethod__Fields {
    struct String *HashNameValue;
};

struct PKCS1MaskGenerationMethod {
    struct PKCS1MaskGenerationMethod__Class *klass;
    MonitorData *monitor;
    struct PKCS1MaskGenerationMethod__Fields fields;
};

struct PKCS1MaskGenerationMethod__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GenerateMask;
};

}
