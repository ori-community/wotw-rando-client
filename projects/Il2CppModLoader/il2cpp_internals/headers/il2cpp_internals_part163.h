namespace app {
struct DynamicDataResolver__StaticFields {
};
struct DynamicDataResolver__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DynamicDataResolver__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DynamicDataResolver__VTable vtable;
};
struct GameObjectDataProvider__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetResolverForType;
};
struct GameObjectDataProvider__StaticFields {
};
struct GameObjectDataProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GameObjectDataProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GameObjectDataProvider__VTable vtable;
};

struct MoonTypeCrossSceneTest__Fields {
  struct MonoBehaviour__Fields _;
  struct MoonReference_1_UnityEngine_SpriteRenderer_ * TestSprite;
  struct MoonInt * TestInt;
  struct MoonReference_1_ITestInterface_ * TestInterfaceImplimentor;
};
struct MoonTypeCrossSceneTest {
  struct MoonTypeCrossSceneTest__Class *klass;
  struct MonitorData *monitor;
  struct MoonTypeCrossSceneTest__Fields fields;
};
struct MoonTypeExtraData {
  int32_t IntExtraData;
};
struct MoonTypeExtraData__Boxed {
  struct MoonTypeExtraData__Class *klass;
  struct MonitorData *monitor;
  struct MoonTypeExtraData fields;
};
struct MoonTypeData {
  struct Object_1 * UnityObjectRef;
  struct MoonTypeExtraData ExtraData;
};
struct MoonTypeData__Boxed {
  struct MoonTypeData__Class *klass;
  struct MonitorData *monitor;
  struct MoonTypeData fields;
};
struct __declspec(align(8)) MoonReference_1_UnityEngine_SpriteRenderer___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_UnityEngine_SpriteRenderer_ * m_cachedProxyType;
  struct SpriteRenderer * m_volatileValue;
};
struct MoonReference_1_UnityEngine_SpriteRenderer_ {
  struct MoonReference_1_UnityEngine_SpriteRenderer___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_UnityEngine_SpriteRenderer___Fields fields;
};
struct IMoonTypeResolver {
  struct IMoonTypeResolver__Class *klass;
  struct MonitorData *monitor;
};
struct IMoonType_1_UnityEngine_SpriteRenderer_ {
  struct IMoonType_1_UnityEngine_SpriteRenderer___Class *klass;
  struct MonitorData *monitor;
};
struct IMoonResolverContext {
  struct IMoonResolverContext__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) MoonInt__Fields {
  int32_t m_staticValue;
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_System_Int32_ * m_cachedProxyType;
};
struct MoonInt {
  struct MoonInt__Class *klass;
  struct MonitorData *monitor;
  struct MoonInt__Fields fields;
};
struct IMoonType_1_System_Int32_ {
  struct IMoonType_1_System_Int32___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) MoonReference_1_ITestInterface___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_ITestInterface_ * m_cachedProxyType;
  struct ITestInterface * m_volatileValue;
};
struct MoonReference_1_ITestInterface_ {
  struct MoonReference_1_ITestInterface___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_ITestInterface___Fields fields;
};
struct IMoonType_1_ITestInterface_ {
  struct IMoonType_1_ITestInterface___Class *klass;
  struct MonitorData *monitor;
};
struct ITestInterface {
  struct ITestInterface__Class *klass;
  struct MonitorData *monitor;
};
struct MoonTypeExtraData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonTypeExtraData__StaticFields {
};
struct MoonTypeExtraData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTypeExtraData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTypeExtraData__VTable vtable;
};
struct MoonTypeData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonTypeData__StaticFields {
};
struct MoonTypeData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTypeData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTypeData__VTable vtable;
};
struct IMoonTypeResolver__VTable {
  VirtualInvokeData ResolveSource;
  VirtualInvokeData CanResolveSource;
  VirtualInvokeData IsMoonTypeProxy;
  VirtualInvokeData GetProxyType;
};
struct IMoonTypeResolver__StaticFields {
};
struct IMoonTypeResolver__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonTypeResolver__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonTypeResolver__VTable vtable;
};
struct IMoonType_1_UnityEngine_SpriteRenderer___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_UnityEngine_SpriteRenderer___StaticFields {
};
struct IMoonType_1_UnityEngine_SpriteRenderer___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_UnityEngine_SpriteRenderer___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_UnityEngine_SpriteRenderer___VTable vtable;
};
struct IMoonResolverContext__VTable {
};
struct IMoonResolverContext__StaticFields {
};
struct IMoonResolverContext__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonResolverContext__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonResolverContext__VTable vtable;
};
struct MoonReference_1_UnityEngine_SpriteRenderer___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
  VirtualInvokeData get_IsStaticValue;
  VirtualInvokeData GetTypeData;
  VirtualInvokeData CanResolve;
  VirtualInvokeData get_IsCrossSceneReference;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
};
struct MoonReference_1_UnityEngine_SpriteRenderer___StaticFields {
};
struct MoonReference_1_UnityEngine_SpriteRenderer___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_UnityEngine_SpriteRenderer___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_UnityEngine_SpriteRenderer___VTable vtable;
};
struct IMoonType_1_System_Int32___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_System_Int32___StaticFields {
};
struct IMoonType_1_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_System_Int32___VTable vtable;
};
struct MoonInt__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
  VirtualInvokeData get_IsStaticValue;
  VirtualInvokeData GetTypeData;
  VirtualInvokeData CanResolve;
  VirtualInvokeData get_IsCrossSceneReference;
};
struct MoonInt__StaticFields {
};
struct MoonInt__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonInt__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonInt__VTable vtable;
};
struct IMoonType_1_ITestInterface___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_ITestInterface___StaticFields {
};
struct IMoonType_1_ITestInterface___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_ITestInterface___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_ITestInterface___VTable vtable;
};
struct ITestInterface__VTable {
};
struct ITestInterface__StaticFields {
};
struct ITestInterface__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ITestInterface__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ITestInterface__VTable vtable;
};
struct MoonReference_1_ITestInterface___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
  VirtualInvokeData get_IsStaticValue;
  VirtualInvokeData GetTypeData;
  VirtualInvokeData CanResolve;
  VirtualInvokeData get_IsCrossSceneReference;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
};
struct MoonReference_1_ITestInterface___StaticFields {
};
struct MoonReference_1_ITestInterface___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_ITestInterface___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_ITestInterface___VTable vtable;
};
struct MoonTypeCrossSceneTest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonTypeCrossSceneTest__StaticFields {
};
struct MoonTypeCrossSceneTest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTypeCrossSceneTest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTypeCrossSceneTest__VTable vtable;
};

struct DataProviderTest__Fields {
  struct MonoBehaviour__Fields _;
  struct DynamicDataResolver * m_dataResolver;
  struct GameObject * GameObjectToExpose;
  struct Vector3 Vector3ToExpose;
  struct String * StringToExpose;
  int32_t IntToExpose;
  struct InterfaceTest * ExposedInterfaceTest;
};
struct DataProviderTest {
  struct DataProviderTest__Class *klass;
  struct MonitorData *monitor;
  struct DataProviderTest__Fields fields;
};
struct InterfaceTest__Fields {
  struct MonoBehaviour__Fields _;
};
struct InterfaceTest {
  struct InterfaceTest__Class *klass;
  struct MonitorData *monitor;
  struct InterfaceTest__Fields fields;
};
struct InterfaceTest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InterfaceTest__StaticFields {
};
struct InterfaceTest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InterfaceTest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InterfaceTest__VTable vtable;
};
struct DataProviderTest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetResolverForType;
};
struct DataProviderTest__StaticFields {
};
struct DataProviderTest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DataProviderTest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DataProviderTest__VTable vtable;
};

struct DataProviderTest2__Fields {
  struct MonoBehaviour__Fields _;
  struct DynamicDataResolver * m_dataResolver;
  struct GameObject * GameObjectToExpose;
  struct Vector3 Vector3ToExpose;
  struct String * StringToExpose;
  int32_t IntToExpose;
  struct InterfaceTest * ExposedInterfaceTest;
};
struct DataProviderTest2 {
  struct DataProviderTest2__Class *klass;
  struct MonitorData *monitor;
  struct DataProviderTest2__Fields fields;
};
struct DataProviderTest2__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetResolverForType;
};
struct DataProviderTest2__StaticFields {
};
struct DataProviderTest2__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DataProviderTest2__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DataProviderTest2__VTable vtable;
};

struct DataProviderTest3__Fields {
  struct MonoBehaviour__Fields _;
  struct DynamicDataResolver * m_dataResolver;
  struct GameObject * GameObjectToExpose;
  struct Vector3 Vector3ToExpose;
  struct String * StringToExpose;
  int32_t IntToExpose;
  struct InterfaceTest * ExposedInterfaceTest;
};
struct DataProviderTest3 {
  struct DataProviderTest3__Class *klass;
  struct MonitorData *monitor;
  struct DataProviderTest3__Fields fields;
};
struct DataProviderTest3__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetResolverForType;
};
struct DataProviderTest3__StaticFields {
};
struct DataProviderTest3__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DataProviderTest3__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DataProviderTest3__VTable vtable;
};

struct ReferenceTester__Fields {
  struct MonoBehaviour__Fields _;
  int32_t IntValueDirect;
  struct MoonInt * IntValueStatic;
  struct MoonInt * IntValueDataProvider;
  struct String * StringValueDirect;
  struct MoonString * StringValueStatic;
  struct MoonString * StringValueDataProvider;
  struct Vector3 Vector3ValueDirect;
  struct MoonVector3 * Vector3ValueStatic;
  struct MoonVector3 * Vector3ValueDataProvider;
  struct GameObject * GOValueDirect;
  struct MoonReference_1_UnityEngine_GameObject_ * GOValueStatic;
  struct MoonReference_1_UnityEngine_GameObject_ * GOValueDataProvider;
  struct MoonReference_1_ITestInterface_ * InterfaceStatic;
  struct MoonReference_1_ITestInterface_ * InterfaceDataProvider;
  struct List_1_Moon_MoonReference_1_ * GOMoonTypeList;
  struct List_1_Moon_MoonInt_ * IntMoonTypeList;
  struct String * latestPerfResults;
};
struct ReferenceTester {
  struct ReferenceTester__Class *klass;
  struct MonitorData *monitor;
  struct ReferenceTester__Fields fields;
};
struct __declspec(align(8)) MoonString__Fields {
  struct String * m_staticValue;
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_System_String_ * m_cachedProxyType;
};
struct MoonString {
  struct MoonString__Class *klass;
  struct MonitorData *monitor;
  struct MoonString__Fields fields;
};
struct IMoonType_1_System_String_ {
  struct IMoonType_1_System_String___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) MoonVector3__Fields {
  struct Vector3 m_staticValue;
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_UnityEngine_Vector3_ * m_cachedProxyType;
};
struct MoonVector3 {
  struct MoonVector3__Class *klass;
  struct MonitorData *monitor;
  struct MoonVector3__Fields fields;
};
struct IMoonType_1_UnityEngine_Vector3_ {
  struct IMoonType_1_UnityEngine_Vector3___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) MoonReference_1_UnityEngine_GameObject___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_UnityEngine_GameObject_ * m_cachedProxyType;
  struct GameObject * m_volatileValue;
};
struct MoonReference_1_UnityEngine_GameObject_ {
  struct MoonReference_1_UnityEngine_GameObject___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_UnityEngine_GameObject___Fields fields;
};
struct IMoonType_1_UnityEngine_GameObject_ {
  struct IMoonType_1_UnityEngine_GameObject___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_MoonReference_1___Fields {
  struct MoonReference_1_UnityEngine_GameObject___Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_MoonReference_1_ {
  struct List_1_Moon_MoonReference_1___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_MoonReference_1___Fields fields;
};
struct MoonReference_1_UnityEngine_GameObject___Array {
  struct MoonReference_1_UnityEngine_GameObject___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonReference_1_UnityEngine_GameObject_ * vector[32];
};
struct IEnumerator_1_Moon_MoonReference_1_ {
  struct IEnumerator_1_Moon_MoonReference_1___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_MoonInt___Fields {
  struct MoonInt__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_MoonInt_ {
  struct List_1_Moon_MoonInt___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_MoonInt___Fields fields;
};
struct MoonInt__Array {
  struct MoonInt__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonInt * vector[32];
};
struct IEnumerator_1_Moon_MoonInt_ {
  struct IEnumerator_1_Moon_MoonInt___Class *klass;
  struct MonitorData *monitor;
};
struct IMoonType_1_System_String___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_System_String___StaticFields {
};
struct IMoonType_1_System_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_System_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_System_String___VTable vtable;
};
struct MoonString__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
  VirtualInvokeData get_IsStaticValue;
  VirtualInvokeData GetTypeData;
  VirtualInvokeData CanResolve;
  VirtualInvokeData get_IsCrossSceneReference;
};
struct MoonString__StaticFields {
};
struct MoonString__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonString__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonString__VTable vtable;
};
struct IMoonType_1_UnityEngine_Vector3___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_UnityEngine_Vector3___StaticFields {
};
struct IMoonType_1_UnityEngine_Vector3___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_UnityEngine_Vector3___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_UnityEngine_Vector3___VTable vtable;
};
struct MoonVector3__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
  VirtualInvokeData get_IsStaticValue;
  VirtualInvokeData GetTypeData;
  VirtualInvokeData CanResolve;
  VirtualInvokeData get_IsCrossSceneReference;
};
struct MoonVector3__StaticFields {
};
struct MoonVector3__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonVector3__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonVector3__VTable vtable;
};
struct IMoonType_1_UnityEngine_GameObject___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_UnityEngine_GameObject___StaticFields {
};
struct IMoonType_1_UnityEngine_GameObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_UnityEngine_GameObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_UnityEngine_GameObject___VTable vtable;
};
struct MoonReference_1_UnityEngine_GameObject___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
  VirtualInvokeData get_IsStaticValue;
  VirtualInvokeData GetTypeData;
  VirtualInvokeData CanResolve;
  VirtualInvokeData get_IsCrossSceneReference;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
};
struct MoonReference_1_UnityEngine_GameObject___StaticFields {
};
struct MoonReference_1_UnityEngine_GameObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_UnityEngine_GameObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_UnityEngine_GameObject___VTable vtable;
};
struct IEnumerator_1_Moon_MoonReference_1___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_MoonReference_1___StaticFields {
};
struct IEnumerator_1_Moon_MoonReference_1___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_MoonReference_1___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_MoonReference_1___VTable vtable;
};
struct List_1_Moon_MoonReference_1___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData RemoveAt_1;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData get_Count_2;
};
struct List_1_Moon_MoonReference_1___StaticFields {
  struct MoonReference_1_UnityEngine_GameObject___Array * _emptyArray;
};
struct List_1_Moon_MoonReference_1___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_MoonReference_1___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_MoonReference_1___VTable vtable;
};
struct IEnumerator_1_Moon_MoonInt___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_MoonInt___StaticFields {
};
struct IEnumerator_1_Moon_MoonInt___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_MoonInt___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_MoonInt___VTable vtable;
};
struct List_1_Moon_MoonInt___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData RemoveAt_1;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData get_Count_2;
};
struct List_1_Moon_MoonInt___StaticFields {
  struct MoonInt__Array * _emptyArray;
};
struct List_1_Moon_MoonInt___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_MoonInt___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_MoonInt___VTable vtable;
};
struct ReferenceTester__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ReferenceTester__StaticFields {
};
struct ReferenceTester__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReferenceTester__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReferenceTester__VTable vtable;
};

struct __declspec(align(8)) DynamicDataExportAttribute__Fields {
  struct String * _CustomInspectorName_k__BackingField;
  int32_t ID;
};
struct DynamicDataExportAttribute {
  struct DynamicDataExportAttribute__Class *klass;
  struct MonitorData *monitor;
  struct DynamicDataExportAttribute__Fields fields;
};
struct DynamicDataExportAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct DynamicDataExportAttribute__StaticFields {
};
struct DynamicDataExportAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DynamicDataExportAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DynamicDataExportAttribute__VTable vtable;
};

enum DataProviderID__Enum : int32_t {
  DataProviderID__Enum_GameObjectDataProvider = 1,
  DataProviderID__Enum_DataProviderTest = 2,
  DataProviderID__Enum_DataProviderTest2 = 3,
  DataProviderID__Enum_DataProviderTest3 = 4,
  DataProviderID__Enum_Blackboard = 5,
  DataProviderID__Enum_TestEntity = 6,
  DataProviderID__Enum_FloatAnimator = 7,
  DataProviderID__Enum_AnimalAnimationController = 8,
  DataProviderID__Enum_DynamicCubeReference = 9,
  DataProviderID__Enum_TongueController = 10,
  DataProviderID__Enum_HorizontalKickbackTimelineBehaviour = 11,
  DataProviderID__Enum_HorizontalKickbackBehaviour = 12,
  DataProviderID__Enum_SpiderBossPhase = 13,
  DataProviderID__Enum_TurtleAIUtilities = 14,
  DataProviderID__Enum_Entity = 15,
  DataProviderID__Enum_PlatformMovement = 16,
  DataProviderID__Enum_CartographerNPC = 17,
  DataProviderID__Enum_ShardTraderNPC = 18,
  DataProviderID__Enum_PathFollowingPlatform = 19,
  DataProviderID__Enum_Sensor = 20,
  DataProviderID__Enum_SeinBowAttack = 21,
  DataProviderID__Enum_CharacterState = 22,
  DataProviderID__Enum_MeleeWeapon = 23,
  DataProviderID__Enum_HornBugBossEntity = 24,
  DataProviderID__Enum_CrabEntity = 25,
  DataProviderID__Enum_MantisEntity = 26,
  DataProviderID__Enum_MinerEntity = 27,
  DataProviderID__Enum_MinerBuilderEntity = 28,
  DataProviderID__Enum_MothEnemy = 29,
  DataProviderID__Enum_SandWormEntity = 30,
  DataProviderID__Enum_SpikeSlugEntity = 31,
  DataProviderID__Enum_ShellSlugEntity = 32,
  DataProviderID__Enum_SneezeSlugEntity = 33,
  DataProviderID__Enum_SpiderBossEntity = 34,
  DataProviderID__Enum_PlatformingMovement = 35,
  DataProviderID__Enum_TurtleEntity = 36,
  DataProviderID__Enum_FoxPlatformingMovement = 37,
  DataProviderID__Enum_ShardTraderEntity = 38,
  DataProviderID__Enum_NewEntityPlatformMovement = 39,
  DataProviderID__Enum_GroundMovingEntity = 40,
  DataProviderID__Enum_SeinCinematic = 41,
  DataProviderID__Enum_SeinComboHandler = 42,
  DataProviderID__Enum_SeinComboHandlerOld = 43,
  DataProviderID__Enum_SeinHeavySpiritSlash = 44,
  DataProviderID__Enum_MeleeWeaponHammer = 45,
  DataProviderID__Enum_MeleeWeaponSword = 46,
  DataProviderID__Enum_MeleeWeaponTorch = 47,
  DataProviderID__Enum_SeinMeleeAttack = 48,
  DataProviderID__Enum_SeinChargeFlameAbility = 49,
  DataProviderID__Enum_SeinIceSpiritFlame = 50,
  DataProviderID__Enum_SeinSpiritFlameAbility = 51,
  DataProviderID__Enum_SeinSpiritFlameTargetting = 52,
  DataProviderID__Enum_SeinStandardSpiritFlameAbility = 53,
  DataProviderID__Enum_SeinSpiritLeashAbility = 54,
  DataProviderID__Enum_SeinSpiritSlash = 55,
  DataProviderID__Enum_SeinInvincibility = 56,
  DataProviderID__Enum_SeinSwimming = 57,
  DataProviderID__Enum_CartBoost = 58,
  DataProviderID__Enum_CartFlip = 59,
  DataProviderID__Enum_CartJump = 60,
  DataProviderID__Enum_SeinRide = 61,
  DataProviderID__Enum_SeinCutsceneBlocked = 62,
  DataProviderID__Enum_SeinLever = 63,
  DataProviderID__Enum_SeinEnvironmentForceController = 64,
  DataProviderID__Enum_SeinGrenadeAttack = 65,
  DataProviderID__Enum_CharacterJumpSustain = 66,
  DataProviderID__Enum_BombableSolidWallEntity = 67,
  DataProviderID__Enum_SeinPlatformMovement = 69,
  DataProviderID__Enum_SpikeSlugHorizontalKickbackBehaviour = 68,
  DataProviderID__Enum_RotatingHorizontalKickbackBehaviour = 70,
  DataProviderID__Enum_CharacterPlatformMovement = 71,
  DataProviderID__Enum_TurtleHorizontalKickbackBehaviour = 72,
  DataProviderID__Enum_SeinDashNew = 73,
  DataProviderID__Enum_CharacterAirNoDeceleration = 74,
  DataProviderID__Enum_CharacterApplyFrictionToSpeed = 75,
  DataProviderID__Enum_CharacterCinematic = 76,
  DataProviderID__Enum_CharacterGravity = 77,
  DataProviderID__Enum_CharacterGravityToGround = 78,
  DataProviderID__Enum_CharacterInstantStop = 79,
  DataProviderID__Enum_CharacterLeftRightMovement = 80,
  DataProviderID__Enum_CharacterSpriteMirror = 81,
  DataProviderID__Enum_CapsuleCrushDetector = 82,
  DataProviderID__Enum_CharacterUpwardsDeceleration = 83,
  DataProviderID__Enum_SeinBashAttack = 84,
  DataProviderID__Enum_SeinBurrowSpell = 85,
  DataProviderID__Enum_SeinCarry = 86,
  DataProviderID__Enum_SeinChargeJump = 87,
  DataProviderID__Enum_SeinChargeJumpCharging = 88,
  DataProviderID__Enum_SeinChargeShotSpell = 89,
  DataProviderID__Enum_SeinCounterstrikeSpell = 90,
  DataProviderID__Enum_SeinCrouch = 91,
  DataProviderID__Enum_SeinCutsceneMovement = 92,
  DataProviderID__Enum_SeinDamageReciever = 93,
  DataProviderID__Enum_SeinDashAttack = 94,
  DataProviderID__Enum_SeinDoubleJump = 95,
  DataProviderID__Enum_SeinEarthShatterSpell = 96,
  DataProviderID__Enum_SeinEdgeClamber = 97,
  DataProviderID__Enum_SeinEnergyWallSpell = 98,
  DataProviderID__Enum_SeinEntanglingRootsSpell = 99,
  DataProviderID__Enum_SeinFall = 100,
  DataProviderID__Enum_SeinFireburstSpell = 101,
  DataProviderID__Enum_SeinFirewhirlSpell = 102,
  DataProviderID__Enum_SeinFootsteps = 103,
  DataProviderID__Enum_SeinGlowSpell = 104,
  DataProviderID__Enum_SeinGlide = 105,
  DataProviderID__Enum_SeinGrabBlock = 106,
  DataProviderID__Enum_SeinGrabRope = 107,
  DataProviderID__Enum_SeinGrabSurface = 108,
  DataProviderID__Enum_SeinGrabWall = 109,
  DataProviderID__Enum_SeinHold = 110,
  DataProviderID__Enum_SeinHomingMissileSpell = 111,
  DataProviderID__Enum_SeinIdle = 112,
  DataProviderID__Enum_SeinInteraction = 113,
  DataProviderID__Enum_SeinInvisibilitySpell = 114,
  DataProviderID__Enum_SeinJump = 115,
  DataProviderID__Enum_SeinJumpShotSpell = 116,
  DataProviderID__Enum_SeinLaunch = 117,
  DataProviderID__Enum_SeinLeached = 118,
  DataProviderID__Enum_SeinLifeAbsorbSpell = 119,
  DataProviderID__Enum_SeinLightningSpell = 120,
  DataProviderID__Enum_SeinLightSpearSpell = 121,
  DataProviderID__Enum_SeinLightSpell = 122,
  DataProviderID__Enum_SeinLockOnSpell = 123,
  DataProviderID__Enum_SeinLookUp = 124,
  DataProviderID__Enum_SeinMarkOfTheWildsSpell = 125,
  DataProviderID__Enum_SeinMeditateSpell = 126,
  DataProviderID__Enum_SeinMindControlSpell = 127,
  DataProviderID__Enum_SeinMineSpell = 128,
  DataProviderID__Enum_SeinMirageSpell = 129,
  DataProviderID__Enum_SeinPinned = 130,
  DataProviderID__Enum_SeinPowerOfFriendshipSpell = 131,
  DataProviderID__Enum_SeinPowerslideSpell = 132,
  DataProviderID__Enum_SeinPushAgainstWall = 133,
  DataProviderID__Enum_SeinRoundupLeashSpell = 134,
  DataProviderID__Enum_SeinRun = 135,
  DataProviderID__Enum_SeinShieldSpell = 136,
  DataProviderID__Enum_SeinSpiritCrescentSpell = 137,
  DataProviderID__Enum_SeinSpiritFlareSpell = 138,
  DataProviderID__Enum_SeinSpiritSentrySpell = 139,
  DataProviderID__Enum_SeinSpiritShardsSpell = 140,
  DataProviderID__Enum_SeinSpiritSpearSpell = 141,
  DataProviderID__Enum_SeinStandingOnEdge = 142,
  DataProviderID__Enum_SeinStickyMineSpell = 143,
  DataProviderID__Enum_SeinStomp = 144,
  DataProviderID__Enum_SeinTimeWarpSpell = 145,
  DataProviderID__Enum_SeinTrapSpell = 146,
  DataProviderID__Enum_SeinWallChargeJump = 147,
  DataProviderID__Enum_SeinWallDangle = 148,
  DataProviderID__Enum_SeinWallJump = 149,
  DataProviderID__Enum_SeinWallSlide = 150,
  DataProviderID__Enum_SeinWarpSpell = 151,
  DataProviderID__Enum_SeinSoulFlame = 152,
  DataProviderID__Enum_SeinDigging = 153,
  DataProviderID__Enum_SeinChakramSpell = 154,
  DataProviderID__Enum_CartographerEntity = 156,
  DataProviderID__Enum_SeinBounceAbility = 157,
  DataProviderID__Enum_CartPlatformMovement = 158,
  DataProviderID__Enum_BugHornEntity = 159,
  DataProviderID__Enum_EntityPlatformingMovement = 160,
  DataProviderID__Enum_EntityReactionBehaviour = 161,
  DataProviderID__Enum_SeinSpriteRotationController = 162,
  DataProviderID__Enum_MantisHorizontalKickbackBehaviour = 163,
  DataProviderID__Enum_WandererNPC = 164,
  DataProviderID__Enum_WandererEntity = 165,
  DataProviderID__Enum_CharactersDynamicProvider = 166,
  DataProviderID__Enum_CharacterStatePuppet = 167,
  DataProviderID__Enum_Vitals = 168,
  DataProviderID__Enum_Ku = 169,
  DataProviderID__Enum_JumperEntity = 170,
  DataProviderID__Enum_SneezeSlugSettings = 171,
  DataProviderID__Enum_CloudAttackSettings = 172,
  DataProviderID__Enum_NPCEntity = 173,
  DataProviderID__Enum_MovingPlatformTest = 174,
  DataProviderID__Enum_PositionStateOwner = 175,
  DataProviderID__Enum_SpiderBatEntity = 176,
  DataProviderID__Enum_UberStateController = 177,
  DataProviderID__Enum_UberStateModifierA = 178,
  DataProviderID__Enum_UberStateModifierB = 179,
  DataProviderID__Enum_UberStateModifierC = 180,
  DataProviderID__Enum_PositionStateModifier = 181,
  DataProviderID__Enum_UberStateModifier = 182,
  DataProviderID__Enum_RotationStateModifier = 183,
  DataProviderID__Enum_ColorStateModifierWisps = 184,
  DataProviderID__Enum_GasballEnity = 185,
  DataProviderID__Enum_TentacleEntity = 187,
  DataProviderID__Enum_UberStateController2 = 188,
  DataProviderID__Enum_CollapsingPlatform = 189,
  DataProviderID__Enum_SeinDrill = 190,
  DataProviderID__Enum_Door = 191,
  DataProviderID__Enum_PressurePlate = 192,
  DataProviderID__Enum_RigidbodyStateModifier = 193,
  DataProviderID__Enum_Sein = 194,
  DataProviderID__Enum_PhysicalSystemStateModifier = 195,
  DataProviderID__Enum_ScaleStateModifier = 196,
  DataProviderID__Enum_EnemyEntity = 197,
  DataProviderID__Enum_SwarmEntity = 198,
  DataProviderID__Enum_MortarEntity = 199,
  DataProviderID__Enum_MortarSpitAttackSettings = 200,
  DataProviderID__Enum_SkeetoEntity = 201,
  DataProviderID__Enum_KwolokBossEntity = 202,
  DataProviderID__Enum_MudkisserGreyboxEntity = 203,
  DataProviderID__Enum_MeleeWeaponSwordstaff = 204,
  DataProviderID__Enum_MeleeWeaponChainsword = 205,
  DataProviderID__Enum_LizardEntity = 206,
  DataProviderID__Enum_SeinSpiritMagnet = 207,
  DataProviderID__Enum_FloatValueWithCondition = 208,
  DataProviderID__Enum_DropSlugEntity = 209,
  DataProviderID__Enum_BuilderEntity = 210,
  DataProviderID__Enum_GardenerEntity = 211,
  DataProviderID__Enum_SeinTurretSpell = 212,
  DataProviderID__Enum_WispTrigger = 213,
  DataProviderID__Enum_LaserShooterEntity = 214,
  DataProviderID__Enum_DropSlugVariationEntity = 215,
  DataProviderID__Enum_KamikazeJumperGroupAgro = 216,
  DataProviderID__Enum_SeinGoldenSeinAbility = 217,
  DataProviderID__Enum_PetrifiedOwlEntity = 218,
  DataProviderID__Enum_SpiderlingEntity = 219,
  DataProviderID__Enum_SpiderBossBaseBehaviour = 220,
  DataProviderID__Enum_DoorLogic = 221,
  DataProviderID__Enum_DoorAnimator = 222,
  DataProviderID__Enum_BreakableWallLogic = 223,
  DataProviderID__Enum_BreakableWallAnimator = 224,
  DataProviderID__Enum_VerletStructureStateModifier = 225,
  DataProviderID__Enum_ShootableCreepLogic = 226,
  DataProviderID__Enum_ShootableCreepAnimator = 227,
  DataProviderID__Enum_BombSlugEntity = 228,
  DataProviderID__Enum_ElectricSlugEntity = 229,
  DataProviderID__Enum_LianaHealLanternAnimator = 230,
  DataProviderID__Enum_LeashHookAnimator = 231,
  DataProviderID__Enum_TransparentWallAnimator = 232,
  DataProviderID__Enum_EnergyPlantLogic = 233,
  DataProviderID__Enum_EnergyPlantAnimator = 234,
  DataProviderID__Enum_EntityPlaceholder = 235,
  DataProviderID__Enum_KeystoneDoorAnimator = 236,
  DataProviderID__Enum_PiranhaEntity = 237,
  DataProviderID__Enum_FrogEntity = 238,
  DataProviderID__Enum_NightCrawlerChaseController = 239,
  DataProviderID__Enum_SnapTrapHookAnimator = 240,
  DataProviderID__Enum_MinerGrayboxEntity = 241,
  DataProviderID__Enum_KwolokBossBaseBehaviour = 242,
  DataProviderID__Enum_EnemyDoorLogic = 243,
  DataProviderID__Enum_EnemyDoorAnimator = 244,
  DataProviderID__Enum_ActivationStateModifier = 245,
  DataProviderID__Enum_PassiveStateModifier = 246,
  DataProviderID__Enum_MoonCustomDoorWithSlots = 247,
  DataProviderID__Enum_BombableWallAnimator = 248,
  DataProviderID__Enum_DashableSwitchLogic = 249,
  DataProviderID__Enum_DashableSwitchAnimator = 249,
  DataProviderID__Enum_LaserShooterMiniboss = 250,
  DataProviderID__Enum_KamikazeLizardEntity = 251,
  DataProviderID__Enum_SeinBowPuppet = 252,
  DataProviderID__Enum_PetrifiedOwlBossBaseBehaviour = 253,
  DataProviderID__Enum_LaserShooterMinibossPlaceholder = 254,
  DataProviderID__Enum_HornbugBossBaseBehaviour = 255,
  DataProviderID__Enum_RaceData = 256,
  DataProviderID__Enum_SeinFeatherFlap = 257,
  DataProviderID__Enum_NPCEntityPlaceholder = 258,
  DataProviderID__Enum_KuDashPuppet = 259,
  DataProviderID__Enum_DynamicMessageProvider = 260,
  DataProviderID__Enum_MokiNPCEntity = 261,
  DataProviderID__Enum_MoleEntity = 262,
  DataProviderID__Enum_TransparentWallB = 263,
  DataProviderID__Enum_TransparentWallLogic = 264,
  DataProviderID__Enum_WeaponMasterEntity = 265,
  DataProviderID__Enum_CurrentCameraTransformProvider = 266,
  DataProviderID__Enum_GlidePuppet = 267,
  DataProviderID__Enum_ForsakenHeroWeaponView = 1000,
  DataProviderID__Enum_ForsakenHeroShieldView = 1001,
  DataProviderID__Enum_ForsakenHumanoidFinisherView = 1002,
  DataProviderID__Enum_ForsakenHeroCharacter = 1003,
  DataProviderID__Enum_ForsakenHeroAbilityMelee = 1004,
  DataProviderID__Enum_ForsakenHeroAbilityQuickstep = 1005,
  DataProviderID__Enum_ForsakenHeroAbilityRoll = 1006,
  DataProviderID__Enum_ForsakenHeroFinisherAction = 1007,
  DataProviderID__Enum_ForsakenHeroAbilityShield = 1008,
  DataProviderID__Enum_ForsakenHeroPlayerController = 1009,
  DataProviderID__Enum_ForsakenHeroAbility = 1010,
  DataProviderID__Enum_ForsakenHeroItemView = 1011,
  DataProviderID__Enum_ForsakenHeroAiUtilities = 1012,
  DataProviderID__Enum_ForsakenHeroAiController = 1013,
  DataProviderID__Enum_ForsakenHeroArmourView = 1014,
  DataProviderID__Enum_ForsakenHeroView = 1015,
  DataProviderID__Enum_ForsakenInteractableView = 1016,
  DataProviderID__Enum_ForsakenLeverView = 1017,
  DataProviderID__Enum_ForsakenMovingPlatformView = 1018,
  DataProviderID__Enum_ForsakenHeroQuickItemView = 1019,
  DataProviderID__Enum_ForsakenEntityViewNestedPrefab = 1020,
  DataProviderID__Enum_ForsakenHumanoidView = 1021,
  DataProviderID__Enum_ForsakenHumanoidViewEffects = 1022,
  DataProviderID__Enum_ForsakenAoeAttackView = 1023,
  DataProviderID__Enum_ForsakenCinematicSequence = 1024,
  DataProviderID__Enum_ForsakenEllsworth = 1025,
  DataProviderID__Enum_ForsakenPressurePlateView = 1026,
  DataProviderID__Enum_ForsakenSwampBird = 1027,
  DataProviderID__Enum_ForsakenGiantMite_DEPRECATED = 1028,
  DataProviderID__Enum_ForsakenLadderView = 1029,
};}