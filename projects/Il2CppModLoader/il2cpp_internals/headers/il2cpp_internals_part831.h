namespace app {

struct VRMainControlPanel__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * browserPrefab;
  float moveSpeed;
  float height;
  float radius;
  int32_t browsersToFit;
  struct List_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel_ * allBrowsers;
  struct ExternalKeyboard * keyboard;
  struct Vector3 baseKeyboardScale;
  struct VRBrowserPanel * keyboardTarget;
};
struct VRMainControlPanel {
  struct VRMainControlPanel__Class *klass;
  struct MonitorData *monitor;
  struct VRMainControlPanel__Fields fields;
};
struct __declspec(align(8)) List_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel___Fields {
  struct VRBrowserPanel__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel_ {
  struct List_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel___Fields fields;
};
struct VRBrowserPanel__Array {
  struct VRBrowserPanel__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct VRBrowserPanel * vector[32];
};
struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel_ {
  struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel___Class *klass;
  struct MonitorData *monitor;
};
struct ExternalKeyboard__Fields {
  struct MonoBehaviour__Fields _;
  bool automaticFocus;
  struct Browser * initialBrowser;
  bool hideWhenUnneeded;
  struct PointerUIBase * activeBrowserUI;
  struct Browser * keyboardBrowser;
  bool forcingFocus;
  struct Browser * _activeBrowser;
  struct Action_2_ZenFulcrum_EmbeddedBrowser_Browser_Boolean_ * onFocusChange;
};
struct ExternalKeyboard {
  struct ExternalKeyboard__Class *klass;
  struct MonitorData *monitor;
  struct ExternalKeyboard__Fields fields;
};
struct Action_2_ZenFulcrum_EmbeddedBrowser_Browser_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_2_ZenFulcrum_EmbeddedBrowser_Browser_Boolean_ {
  struct Action_2_ZenFulcrum_EmbeddedBrowser_Browser_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Action_2_ZenFulcrum_EmbeddedBrowser_Browser_Boolean___Fields fields;
};
struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel___StaticFields {
};
struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel___VTable vtable;
};
struct List_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel___VTable {
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
struct List_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel___StaticFields {
  struct VRBrowserPanel__Array * _emptyArray;
};
struct List_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel___VTable vtable;
};
struct Action_2_ZenFulcrum_EmbeddedBrowser_Browser_Boolean___VTable {
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
struct Action_2_ZenFulcrum_EmbeddedBrowser_Browser_Boolean___StaticFields {
};
struct Action_2_ZenFulcrum_EmbeddedBrowser_Browser_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_2_ZenFulcrum_EmbeddedBrowser_Browser_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_2_ZenFulcrum_EmbeddedBrowser_Browser_Boolean___VTable vtable;
};
struct ExternalKeyboard__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ActiveBrowser;
  VirtualInvokeData set_ActiveBrowser;
};
struct ExternalKeyboard__StaticFields {
};
struct ExternalKeyboard__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExternalKeyboard__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExternalKeyboard__VTable vtable;
};
struct VRMainControlPanel__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VRMainControlPanel__StaticFields {
  struct VRMainControlPanel * instance;
};
struct VRMainControlPanel__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VRMainControlPanel__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VRMainControlPanel__VTable vtable;
};

struct __declspec(align(8)) VRMainControlPanel_c_DisplayClass10_0__Fields {
  struct VRMainControlPanel * __4__this;
  int32_t direction;
};
struct VRMainControlPanel_c_DisplayClass10_0 {
  struct VRMainControlPanel_c_DisplayClass10_0__Class *klass;
  struct MonitorData *monitor;
  struct VRMainControlPanel_c_DisplayClass10_0__Fields fields;
};
struct VRMainControlPanel_c_DisplayClass10_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VRMainControlPanel_c_DisplayClass10_0__StaticFields {
};
struct VRMainControlPanel_c_DisplayClass10_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VRMainControlPanel_c_DisplayClass10_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VRMainControlPanel_c_DisplayClass10_0__VTable vtable;
};

struct __declspec(align(8)) VRMainControlPanel_c_DisplayClass11_0__Fields {
  struct VRBrowserPanel * nextTo;
};
struct VRMainControlPanel_c_DisplayClass11_0 {
  struct VRMainControlPanel_c_DisplayClass11_0__Class *klass;
  struct MonitorData *monitor;
  struct VRMainControlPanel_c_DisplayClass11_0__Fields fields;
};
struct VRMainControlPanel_c_DisplayClass11_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VRMainControlPanel_c_DisplayClass11_0__StaticFields {
};
struct VRMainControlPanel_c_DisplayClass11_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VRMainControlPanel_c_DisplayClass11_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VRMainControlPanel_c_DisplayClass11_0__VTable vtable;
};

struct __declspec(align(8)) VRMainControlPanel_DestroyBrowser_d_15__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct VRMainControlPanel * __4__this;
  struct VRBrowserPanel * pane;
  struct Vector3 _targetPos_5__2;
  float _t0_5__3;
};
struct VRMainControlPanel_DestroyBrowser_d_15 {
  struct VRMainControlPanel_DestroyBrowser_d_15__Class *klass;
  struct MonitorData *monitor;
  struct VRMainControlPanel_DestroyBrowser_d_15__Fields fields;
};
struct VRMainControlPanel_DestroyBrowser_d_15__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct VRMainControlPanel_DestroyBrowser_d_15__StaticFields {
};
struct VRMainControlPanel_DestroyBrowser_d_15__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VRMainControlPanel_DestroyBrowser_d_15__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VRMainControlPanel_DestroyBrowser_d_15__VTable vtable;
};

struct __declspec(align(8)) DialogHandler_c_DisplayClass3_0__Fields {
  struct DialogHandler_DialogCallback * dialogCallback;
  struct DialogHandler * handler;
  struct DialogHandler_MenuCallback * contextCallback;
};
struct DialogHandler_c_DisplayClass3_0 {
  struct DialogHandler_c_DisplayClass3_0__Class *klass;
  struct MonitorData *monitor;
  struct DialogHandler_c_DisplayClass3_0__Fields fields;
};
struct DialogHandler_c_DisplayClass3_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DialogHandler_c_DisplayClass3_0__StaticFields {
};
struct DialogHandler_c_DisplayClass3_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DialogHandler_c_DisplayClass3_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DialogHandler_c_DisplayClass3_0__VTable vtable;
};

struct DownloadManager__Fields {
  struct MonoBehaviour__Fields _;
  bool manageAllBrowsers;
  bool promptForFileNames;
  struct String * saveFolder;
  struct Text * statusBar;
  struct List_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download_ * downloads;
  struct StringBuilder * sb;
};
struct DownloadManager {
  struct DownloadManager__Class *klass;
  struct MonitorData *monitor;
  struct DownloadManager__Fields fields;
};
struct __declspec(align(8)) List_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download___Fields {
  struct DownloadManager_Download__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download_ {
  struct List_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download___Fields fields;
};
struct __declspec(align(8)) DownloadManager_Download__Fields {
  struct Browser * browser;
  int32_t downloadId;
  struct String * name;
  struct String * path;
  int32_t speed;
  int32_t percent;
  struct String * status;
};
struct DownloadManager_Download {
  struct DownloadManager_Download__Class *klass;
  struct MonitorData *monitor;
  struct DownloadManager_Download__Fields fields;
};
struct DownloadManager_Download__Array {
  struct DownloadManager_Download__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DownloadManager_Download * vector[32];
};
struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download_ {
  struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download___Class *klass;
  struct MonitorData *monitor;
};
struct DownloadManager_Download__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DownloadManager_Download__StaticFields {
};
struct DownloadManager_Download__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DownloadManager_Download__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DownloadManager_Download__VTable vtable;
};
struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download___StaticFields {
};
struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download___VTable vtable;
};
struct List_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download___VTable {
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
struct List_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download___StaticFields {
  struct DownloadManager_Download__Array * _emptyArray;
};
struct List_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download___VTable vtable;
};
struct DownloadManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DownloadManager__StaticFields {
};
struct DownloadManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DownloadManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DownloadManager__VTable vtable;
};

struct __declspec(align(8)) DownloadManager_c_DisplayClass7_0__Fields {
  struct DownloadManager * __4__this;
  struct Browser * browser;
};
struct DownloadManager_c_DisplayClass7_0 {
  struct DownloadManager_c_DisplayClass7_0__Class *klass;
  struct MonitorData *monitor;
  struct DownloadManager_c_DisplayClass7_0__Fields fields;
};
struct DownloadManager_c_DisplayClass7_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DownloadManager_c_DisplayClass7_0__StaticFields {
};
struct DownloadManager_c_DisplayClass7_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DownloadManager_c_DisplayClass7_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DownloadManager_c_DisplayClass7_0__VTable vtable;
};

struct WebResources {
  struct WebResources__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) EditorWebResources__Fields {
  struct String * basePath;
  struct Regex * matchDots;
};
struct EditorWebResources {
  struct EditorWebResources__Class *klass;
  struct MonitorData *monitor;
  struct EditorWebResources__Fields fields;
};
struct WebResources__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData SendResponse;
  VirtualInvokeData SendResponse_1;
  VirtualInvokeData SendError;
  VirtualInvokeData SendFile;
};
struct WebResources__StaticFields {
  struct Dictionary_2_System_String_System_String_ * extensionMimeTypes;
  struct Dictionary_2_System_Int32_System_String_ * statusTexts;
};
struct WebResources__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WebResources__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WebResources__VTable vtable;
};
struct EditorWebResources__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData HandleRequest;
  VirtualInvokeData SendResponse;
  VirtualInvokeData SendResponse_1;
  VirtualInvokeData SendError;
  VirtualInvokeData SendFile;
};
struct EditorWebResources__StaticFields {
};
struct EditorWebResources__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EditorWebResources__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EditorWebResources__VTable vtable;
};

struct __declspec(align(8)) ExternalKeyboard_FindAndListenForBrowsers_d_15__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct ExternalKeyboard * __4__this;
};
struct ExternalKeyboard_FindAndListenForBrowsers_d_15 {
  struct ExternalKeyboard_FindAndListenForBrowsers_d_15__Class *klass;
  struct MonitorData *monitor;
  struct ExternalKeyboard_FindAndListenForBrowsers_d_15__Fields fields;
};
struct ExternalKeyboard_FindAndListenForBrowsers_d_15__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct ExternalKeyboard_FindAndListenForBrowsers_d_15__StaticFields {
};
struct ExternalKeyboard_FindAndListenForBrowsers_d_15__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExternalKeyboard_FindAndListenForBrowsers_d_15__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExternalKeyboard_FindAndListenForBrowsers_d_15__VTable vtable;
};

struct __declspec(align(8)) ExternalKeyboard_c_DisplayClass16_0__Fields {
  struct ExternalKeyboard * __4__this;
  struct Browser * browser;
};
struct ExternalKeyboard_c_DisplayClass16_0 {
  struct ExternalKeyboard_c_DisplayClass16_0__Class *klass;
  struct MonitorData *monitor;
  struct ExternalKeyboard_c_DisplayClass16_0__Fields fields;
};
struct ExternalKeyboard_c_DisplayClass16_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ExternalKeyboard_c_DisplayClass16_0__StaticFields {
};
struct ExternalKeyboard_c_DisplayClass16_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExternalKeyboard_c_DisplayClass16_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExternalKeyboard_c_DisplayClass16_0__VTable vtable;
};

struct ExternalKeyboard_c {
  struct ExternalKeyboard_c__Class *klass;
  struct MonitorData *monitor;
};
struct ExternalKeyboard_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ExternalKeyboard_c__StaticFields {
  struct ExternalKeyboard_c * __9;
  struct Action_2_ZenFulcrum_EmbeddedBrowser_Browser_Boolean_ * __9__22_0;
};
struct ExternalKeyboard_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExternalKeyboard_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExternalKeyboard_c__VTable vtable;
};

struct InvalidJSONNodeException__Fields {
  struct Exception__Fields _;
};
struct InvalidJSONNodeException {
  struct InvalidJSONNodeException__Class *klass;
  struct MonitorData *monitor;
  struct InvalidJSONNodeException__Fields fields;
};
struct InvalidJSONNodeException__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData get_Message;
  VirtualInvokeData get_Data;
  VirtualInvokeData get_InnerException;
  VirtualInvokeData get_StackTrace;
  VirtualInvokeData get_Source;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetType;
};
struct InvalidJSONNodeException__StaticFields {
};
struct InvalidJSONNodeException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InvalidJSONNodeException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InvalidJSONNodeException__VTable vtable;
};

struct __declspec(align(8)) ExceptionEventArgs__Fields {
  struct Exception * _Exception_k__BackingField;
};
struct ExceptionEventArgs {
  struct ExceptionEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct ExceptionEventArgs__Fields fields;
};
struct ExceptionEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ExceptionEventArgs__StaticFields {
};
struct ExceptionEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExceptionEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExceptionEventArgs__VTable vtable;
};

struct EventHandler_1_ZenFulcrum_EmbeddedBrowser_ExceptionEventArgs___Fields {
  struct MulticastDelegate__Fields _;
};
struct EventHandler_1_ZenFulcrum_EmbeddedBrowser_ExceptionEventArgs_ {
  struct EventHandler_1_ZenFulcrum_EmbeddedBrowser_ExceptionEventArgs___Class *klass;
  struct MonitorData *monitor;
  struct EventHandler_1_ZenFulcrum_EmbeddedBrowser_ExceptionEventArgs___Fields fields;
};
struct EventHandler_1_ZenFulcrum_EmbeddedBrowser_ExceptionEventArgs___VTable {
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
struct EventHandler_1_ZenFulcrum_EmbeddedBrowser_ExceptionEventArgs___StaticFields {
};
struct EventHandler_1_ZenFulcrum_EmbeddedBrowser_ExceptionEventArgs___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EventHandler_1_ZenFulcrum_EmbeddedBrowser_ExceptionEventArgs___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EventHandler_1_ZenFulcrum_EmbeddedBrowser_ExceptionEventArgs___VTable vtable;
};

struct IEnumerable_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo_ {
  struct IEnumerable_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___StaticFields {
};
struct IEnumerable_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___VTable vtable;
};

struct __declspec(align(8)) Promise__Fields {
  struct Exception * rejectionException;
  struct List_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_ * rejectHandlers;
  struct List_1_ZenFulcrum_EmbeddedBrowser_Promise_ResolveHandler_ * resolveHandlers;
  int32_t _Id_k__BackingField;
  struct String * _Name_k__BackingField;
  enum PromiseState__Enum _CurState_k__BackingField;
};
struct Promise {
  struct Promise__Class *klass;
  struct MonitorData *monitor;
  struct Promise__Fields fields;
};
struct __declspec(align(8)) HashSet_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___Fields {
  struct Int32__Array * _buckets;
  struct HashSet_1_T_Slot_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___Array * _slots;
  int32_t _count;
  int32_t _lastIndex;
  int32_t _freeList;
  struct IEqualityComparer_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo_ * _comparer;
  int32_t _version;
  struct SerializationInfo * _siInfo;
};
struct HashSet_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo_ {
  struct HashSet_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___Fields fields;
};
struct HashSet_1_T_Slot_ZenFulcrum_EmbeddedBrowser_IPromiseInfo_ {
  int32_t hashCode;
  int32_t next;
  struct IPromiseInfo * value;
};
struct HashSet_1_T_Slot_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___Boxed {
  struct HashSet_1_T_Slot_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_T_Slot_ZenFulcrum_EmbeddedBrowser_IPromiseInfo_ fields;
};
struct HashSet_1_T_Slot_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___Array {
  struct HashSet_1_T_Slot_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HashSet_1_T_Slot_ZenFulcrum_EmbeddedBrowser_IPromiseInfo_ vector[32];
};
struct IPromiseInfo {
  struct IPromiseInfo__Class *klass;
  struct MonitorData *monitor;
};
struct IEqualityComparer_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo_ {
  struct IEqualityComparer_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___Class *klass;
  struct MonitorData *monitor;
};
struct IPromiseInfo__Array {
  struct IPromiseInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IPromiseInfo * vector[32];
};
struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo_ {
  struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_ZenFulcrum_EmbeddedBrowser_Promise_ResolveHandler___Fields {
  struct Promise_ResolveHandler__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ZenFulcrum_EmbeddedBrowser_Promise_ResolveHandler_ {
  struct List_1_ZenFulcrum_EmbeddedBrowser_Promise_ResolveHandler___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ZenFulcrum_EmbeddedBrowser_Promise_ResolveHandler___Fields fields;
};
struct Promise_ResolveHandler {
  struct Action * callback;
  struct IRejectable * rejectable;
};
struct Promise_ResolveHandler__Boxed {
  struct Promise_ResolveHandler__Class *klass;
  struct MonitorData *monitor;
  struct Promise_ResolveHandler fields;
};
struct Promise_ResolveHandler__Array {
  struct Promise_ResolveHandler__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Promise_ResolveHandler vector[32];
};
struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_Promise_ResolveHandler_ {
  struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_Promise_ResolveHandler___Class *klass;
  struct MonitorData *monitor;
};
struct Func_1_ZenFulcrum_EmbeddedBrowser_IPromise___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_1_ZenFulcrum_EmbeddedBrowser_IPromise_ {
  struct Func_1_ZenFulcrum_EmbeddedBrowser_IPromise___Class *klass;
  struct MonitorData *monitor;
  struct Func_1_ZenFulcrum_EmbeddedBrowser_IPromise___Fields fields;
};
struct Func_1_System_Collections_Generic_IEnumerable_1___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_1_System_Collections_Generic_IEnumerable_1_ {
  struct Func_1_System_Collections_Generic_IEnumerable_1___Class *klass;
  struct MonitorData *monitor;
  struct Func_1_System_Collections_Generic_IEnumerable_1___Fields fields;
};
struct Func_1_System_Collections_Generic_IEnumerable_1__1__Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_1_System_Collections_Generic_IEnumerable_1__1 {
  struct Func_1_System_Collections_Generic_IEnumerable_1__1__Class *klass;
  struct MonitorData *monitor;
  struct Func_1_System_Collections_Generic_IEnumerable_1__1__Fields fields;
};
struct IEnumerable_1_System_Func_1__1 {
  struct IEnumerable_1_System_Func_1__1__Class *klass;
  struct MonitorData *monitor;
};
struct IPromiseInfo__VTable {
  VirtualInvokeData get_Id;
  VirtualInvokeData get_Name;
};
struct IPromiseInfo__StaticFields {
};
struct IPromiseInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IPromiseInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IPromiseInfo__VTable vtable;
};
struct HashSet_1_T_Slot_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HashSet_1_T_Slot_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___StaticFields {
};
struct HashSet_1_T_Slot_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashSet_1_T_Slot_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashSet_1_T_Slot_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___VTable vtable;
};
struct IEqualityComparer_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___StaticFields {
};
struct IEqualityComparer_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___VTable vtable;
};
struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___StaticFields {
};
struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___VTable vtable;
};
struct HashSet_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_T__Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData OnDeserialization;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData OnDeserialization_1;
  VirtualInvokeData Add;
  VirtualInvokeData UnionWith;
};
struct HashSet_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___StaticFields {
};
struct HashSet_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashSet_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashSet_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo___VTable vtable;
};
struct Promise_ResolveHandler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Promise_ResolveHandler__StaticFields {
};
struct Promise_ResolveHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Promise_ResolveHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Promise_ResolveHandler__VTable vtable;
};
struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_Promise_ResolveHandler___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_Promise_ResolveHandler___StaticFields {
};
struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_Promise_ResolveHandler___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_Promise_ResolveHandler___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_Promise_ResolveHandler___VTable vtable;
};
struct List_1_ZenFulcrum_EmbeddedBrowser_Promise_ResolveHandler___VTable {
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
};}