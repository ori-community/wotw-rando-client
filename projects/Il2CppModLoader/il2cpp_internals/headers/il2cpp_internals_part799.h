namespace app {
enum Browser_NewWindowAction__Enum : int32_t {
  Browser_NewWindowAction__Enum_Ignore = 1,
  Browser_NewWindowAction__Enum_Redirect = 2,
  Browser_NewWindowAction__Enum_NewBrowser = 3,
  Browser_NewWindowAction__Enum_NewWindow = 4,
};
struct Browser_NewWindowAction__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Browser_NewWindowAction__Enum value;
};
struct Browser__Fields {
  struct MonoBehaviour__Fields _;
  struct String * _url;
  int32_t _width;
  int32_t _height;
  bool generateMipmap;
  struct Color32 baseColor;
  float _zoom;
  struct Action_2_String_String_ * onConsoleMessage;
  enum BrowserNative_ContextMenuOrigin__Enum allowContextMenuOn;
  enum Browser_NewWindowAction__Enum newWindowAction;
  struct INewWindowHandler * _NewWindowHandler_k__BackingField;
  bool _EnableRendering_k__BackingField;
  bool _EnableInput_k__BackingField;
  struct Action_1_UnityEngine_Texture2D_ * afterResize;
  struct IBrowserUI * _uiHandler;
  bool uiHandlerAssigned;
  struct CookieManager * _CookieManager_k__BackingField;
  int32_t browserId;
  int32_t unsafeBrowserId;
  bool browserIdRequested;
  struct Texture2D * texture;
  bool textureIsOurs;
  bool forceNextRender;
  bool isPopup;
  struct List_1_System_Action_ * thingsToDo;
  struct List_1_System_Action_ * onloadActions;
  struct List_1_System_Object_ * thingsToRemember;
  int32_t nextCallbackId;
  struct Dictionary_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ * registeredCallbacks;
  struct BrowserNative_ReadyFunc * onNativeReady;
  struct Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ * onLoad;
  struct Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ * onFetch;
  struct Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ * onFetchError;
  struct Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ * onCertError;
  struct Action * onSadTab;
  struct Action * onTextureUpdated;
  struct Action * onNavStateChange;
  struct Action_2_Int32_ZenFulcrum_EmbeddedBrowser_JSONNode_ * onDownloadStarted;
  struct Action_2_Int32_ZenFulcrum_EmbeddedBrowser_JSONNode_ * onDownloadStatus;
  struct Action_3_String_Boolean_String_ * onNodeFocus;
  struct Action_2_Boolean_Boolean_ * onBrowserFocus;
  struct BrowserFocusState * focusState;
  struct BrowserInput * browserInput;
  struct Browser * overlay;
  bool skipNextLoad;
  bool loadPending;
  struct BrowserNavState * navState;
  bool newWindowHandlerSet;
  struct INewWindowHandler * newWindowHandler;
  struct DialogHandler * dialogHandler;
  struct Action * pageReplacer;
  float pageReplacerPriority;
  struct List_1_System_Action_ * thingsToDoClone;
  struct Color32__Array * colorBuffer;
};
struct Browser {
  struct Browser__Class *klass;
  struct MonitorData *monitor;
  struct Browser__Fields fields;
};
struct Action_2_String_String___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_2_String_String_ {
  struct Action_2_String_String___Class *klass;
  struct MonitorData *monitor;
  struct Action_2_String_String___Fields fields;
};
struct INewWindowHandler {
  struct INewWindowHandler__Class *klass;
  struct MonitorData *monitor;
};
struct Action_1_UnityEngine_Texture2D___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_UnityEngine_Texture2D_ {
  struct Action_1_UnityEngine_Texture2D___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_UnityEngine_Texture2D___Fields fields;
};
struct IBrowserUI {
  struct IBrowserUI__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) CookieManager__Fields {
  struct Browser * browser;
};
struct CookieManager {
  struct CookieManager__Class *klass;
  struct MonitorData *monitor;
  struct CookieManager__Fields fields;
};
struct __declspec(align(8)) CookieManager_CookieFetch__Fields {
  struct BrowserNative_GetCookieFunc * nativeCB;
  struct Promise_1_System_Collections_Generic_List_1_ * promise;
  struct CookieManager * manager;
  struct List_1_ZenFulcrum_EmbeddedBrowser_Cookie_ * result;
};
struct CookieManager_CookieFetch {
  struct CookieManager_CookieFetch__Class *klass;
  struct MonitorData *monitor;
  struct CookieManager_CookieFetch__Fields fields;
};
struct BrowserNative_GetCookieFunc__Fields {
  struct MulticastDelegate__Fields _;
};
struct BrowserNative_GetCookieFunc {
  struct BrowserNative_GetCookieFunc__Class *klass;
  struct MonitorData *monitor;
  struct BrowserNative_GetCookieFunc__Fields fields;
};
struct __declspec(align(8)) BrowserNative_NativeCookie__Fields {
  struct String * name;
  struct String * value;
  struct String * domain;
  struct String * path;
  struct String * creation;
  struct String * lastAccess;
  struct String * expires;
  uint8_t secure;
  uint8_t httpOnly;
};
struct BrowserNative_NativeCookie {
  struct BrowserNative_NativeCookie__Class *klass;
  struct MonitorData *monitor;
  struct BrowserNative_NativeCookie__Fields fields;
};
enum PromiseState__Enum : int32_t {
  PromiseState__Enum_Pending = 0,
  PromiseState__Enum_Rejected = 1,
  PromiseState__Enum_Resolved = 2,
};
struct PromiseState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PromiseState__Enum value;
};
struct __declspec(align(8)) Promise_1_System_Collections_Generic_List_1___Fields {
  struct Exception * rejectionException;
  struct List_1_ZenFulcrum_EmbeddedBrowser_Cookie_ * resolveValue;
  struct List_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_ * rejectHandlers;
  struct List_1_System_Action_1__2 * resolveCallbacks;
  struct List_1_ZenFulcrum_EmbeddedBrowser_IRejectable_ * resolveRejectables;
  int32_t _Id_k__BackingField;
  struct String * _Name_k__BackingField;
  enum PromiseState__Enum _CurState_k__BackingField;
};
struct Promise_1_System_Collections_Generic_List_1_ {
  struct Promise_1_System_Collections_Generic_List_1___Class *klass;
  struct MonitorData *monitor;
  struct Promise_1_System_Collections_Generic_List_1___Fields fields;
};
struct __declspec(align(8)) List_1_ZenFulcrum_EmbeddedBrowser_Cookie___Fields {
  struct Cookie_1__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ZenFulcrum_EmbeddedBrowser_Cookie_ {
  struct List_1_ZenFulcrum_EmbeddedBrowser_Cookie___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ZenFulcrum_EmbeddedBrowser_Cookie___Fields fields;
};
struct __declspec(align(8)) Cookie_1__Fields {
  struct CookieManager * cookies;
  struct BrowserNative_NativeCookie * original;
  struct String * name;
  struct String * value;
  struct String * domain;
  struct String * path;
  struct DateTime creation;
  struct DateTime lastAccess;
  struct Nullable_1_DateTime_ expires;
  bool secure;
  bool httpOnly;
};
struct Cookie_1 {
  struct Cookie_1__Class *klass;
  struct MonitorData *monitor;
  struct Cookie_1__Fields fields;
};
struct Cookie_1__Array {
  struct Cookie_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Cookie_1 * vector[32];
};
struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_Cookie_ {
  struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_Cookie___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_ZenFulcrum_EmbeddedBrowser_RejectHandler___Fields {
  struct RejectHandler__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_ {
  struct List_1_ZenFulcrum_EmbeddedBrowser_RejectHandler___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ZenFulcrum_EmbeddedBrowser_RejectHandler___Fields fields;
};
struct RejectHandler {
  struct Action_1_Exception_ * callback;
  struct IRejectable * rejectable;
};
struct RejectHandler__Boxed {
  struct RejectHandler__Class *klass;
  struct MonitorData *monitor;
  struct RejectHandler fields;
};
struct RejectHandler__Array {
  struct RejectHandler__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RejectHandler vector[32];
};
struct Action_1_Exception___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_Exception_ {
  struct Action_1_Exception___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_Exception___Fields fields;
};
struct IRejectable {
  struct IRejectable__Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_ {
  struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_RejectHandler___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_System_Action_1__2__Fields {
  struct Action_1_System_Collections_Generic_List_1__4__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Action_1__2 {
  struct List_1_System_Action_1__2__Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Action_1__2__Fields fields;
};
struct Action_1_System_Collections_Generic_List_1__4__Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_System_Collections_Generic_List_1__4 {
  struct Action_1_System_Collections_Generic_List_1__4__Class *klass;
  struct MonitorData *monitor;
  struct Action_1_System_Collections_Generic_List_1__4__Fields fields;
};
struct Action_1_System_Collections_Generic_List_1__4__Array {
  struct Action_1_System_Collections_Generic_List_1__4__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Action_1_System_Collections_Generic_List_1__4 * vector[32];
};
struct IEnumerator_1_System_Action_1__5 {
  struct IEnumerator_1_System_Action_1__5__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_ZenFulcrum_EmbeddedBrowser_IRejectable___Fields {
  struct IRejectable__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ZenFulcrum_EmbeddedBrowser_IRejectable_ {
  struct List_1_ZenFulcrum_EmbeddedBrowser_IRejectable___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ZenFulcrum_EmbeddedBrowser_IRejectable___Fields fields;
};
struct IRejectable__Array {
  struct IRejectable__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IRejectable * vector[32];
};
struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_IRejectable_ {
  struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_IRejectable___Class *klass;
  struct MonitorData *monitor;
};
struct IPromise_1_System_Collections_Generic_List_1_ {
  struct IPromise_1_System_Collections_Generic_List_1___Class *klass;
  struct MonitorData *monitor;
};
struct IPromise {
  struct IPromise__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_System_Collections_Generic_List_1_ZenFulcrum_EmbeddedBrowser_IPromise___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_System_Collections_Generic_List_1_ZenFulcrum_EmbeddedBrowser_IPromise_ {
  struct Func_2_System_Collections_Generic_List_1_ZenFulcrum_EmbeddedBrowser_IPromise___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_System_Collections_Generic_List_1_ZenFulcrum_EmbeddedBrowser_IPromise___Fields fields;
};
struct Func_2_System_Collections_Generic_List_1_System_Collections_Generic_IEnumerable_1___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_System_Collections_Generic_List_1_System_Collections_Generic_IEnumerable_1_ {
  struct Func_2_System_Collections_Generic_List_1_System_Collections_Generic_IEnumerable_1___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_System_Collections_Generic_List_1_System_Collections_Generic_IEnumerable_1___Fields fields;
};
struct IEnumerable_1_ZenFulcrum_EmbeddedBrowser_IPromise_ {
  struct IEnumerable_1_ZenFulcrum_EmbeddedBrowser_IPromise___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_List_1_System_Object___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_System_Object___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_List_1_System_Object_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_List_1_System_Object_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_List_1_System_Object_ {
  struct Dictionary_2_System_Int32_List_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_List_1_System_Object___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_System_Object_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct List_1_System_Object_ * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_System_Object___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_System_Object_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_System_Object___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_System_Object___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_System_Object_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_List_1_System_Object___Fields {
  struct Dictionary_2_System_Int32_List_1_System_Object_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_List_1_System_Object_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_List_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_List_1_System_Object___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_List_1_System_Object___Fields {
  struct Dictionary_2_System_Int32_List_1_System_Object_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_List_1_System_Object_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_List_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_List_1_System_Object___Fields fields;
};
struct List_1_System_Object___Array {
  struct List_1_System_Object___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct List_1_System_Object_ * vector[32];
};
struct IEnumerator_1_List_1_System_Object_ {
  struct IEnumerator_1_List_1_System_Object___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_List_1_System_Object_ {
  struct ICollection_1_List_1_System_Object___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_List_1_System_Object_ {
  int32_t key;
  struct List_1_System_Object_ * value;
};
struct KeyValuePair_2_System_Int32_List_1_System_Object___Boxed {
  struct KeyValuePair_2_System_Int32_List_1_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_List_1_System_Object_ fields;
};
struct KeyValuePair_2_System_Int32_List_1_System_Object___Array {
  struct KeyValuePair_2_System_Int32_List_1_System_Object___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_List_1_System_Object_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_List_1_System_Object_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_List_1_System_Object___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_List_1_System_Object_ {
  struct IEnumerable_1_List_1_System_Object___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ {
  struct Dictionary_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct Browser_JSResultFunc * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ vector[32];
};
struct Browser_JSResultFunc__Fields {
  struct MulticastDelegate__Fields _;
};
struct Browser_JSResultFunc {
  struct Browser_JSResultFunc__Class *klass;
  struct MonitorData *monitor;
  struct Browser_JSResultFunc__Fields fields;
};
enum JSONNode_NodeType__Enum : int32_t {
  JSONNode_NodeType__Enum_Invalid = 0,
  JSONNode_NodeType__Enum_String = 1,
  JSONNode_NodeType__Enum_Number = 2,
  JSONNode_NodeType__Enum_Object = 3,
  JSONNode_NodeType__Enum_Array = 4,
  JSONNode_NodeType__Enum_Bool = 5,
  JSONNode_NodeType__Enum_Null = 6,
};
struct JSONNode_NodeType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum JSONNode_NodeType__Enum value;
};
struct __declspec(align(8)) JSONNode__Fields {
  enum JSONNode_NodeType__Enum _type;
  struct String * _stringValue;
  double _numberValue;
  struct Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ * _objectValue;
  struct List_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ * _arrayValue;
  bool _boolValue;
};
struct JSONNode {
  struct JSONNode__Class *klass;
  struct MonitorData *monitor;
  struct JSONNode__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ {
  struct Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct JSONNode * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Fields {
  struct Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Fields {
  struct Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Fields fields;
};
struct JSONNode__Array {
  struct JSONNode__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct JSONNode * vector[32];
};
struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ {
  struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_JSONNode___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ {
  struct ICollection_1_ZenFulcrum_EmbeddedBrowser_JSONNode___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ {
  struct String * key;
  struct JSONNode * value;
};
struct KeyValuePair_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Boxed {
  struct KeyValuePair_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ fields;
};
struct KeyValuePair_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Array {
  struct KeyValuePair_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ {
  struct IEnumerable_1_ZenFulcrum_EmbeddedBrowser_JSONNode___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_ZenFulcrum_EmbeddedBrowser_JSONNode___Fields {
  struct JSONNode__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ {
  struct List_1_ZenFulcrum_EmbeddedBrowser_JSONNode___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ZenFulcrum_EmbeddedBrowser_JSONNode___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Fields {
  struct Dictionary_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Fields {
  struct Dictionary_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Fields fields;
};
struct Browser_JSResultFunc__Array {
  struct Browser_JSResultFunc__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Browser_JSResultFunc * vector[32];
};
struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ {
  struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ {
  struct ICollection_1_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ {
  int32_t key;
  struct Browser_JSResultFunc * value;
};
struct KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Boxed {
  struct KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ fields;
};
struct KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Array {
  struct KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ {
  struct IEnumerable_1_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc___Class *klass;
  struct MonitorData *monitor;
};
struct BrowserNative_ReadyFunc__Fields {
  struct MulticastDelegate__Fields _;
};
struct BrowserNative_ReadyFunc {
  struct BrowserNative_ReadyFunc__Class *klass;
  struct MonitorData *monitor;
  struct BrowserNative_ReadyFunc__Fields fields;
};
struct Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ {
  struct Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode___Fields fields;
};
struct Action_2_Int32_ZenFulcrum_EmbeddedBrowser_JSONNode___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_2_Int32_ZenFulcrum_EmbeddedBrowser_JSONNode_ {
  struct Action_2_Int32_ZenFulcrum_EmbeddedBrowser_JSONNode___Class *klass;
  struct MonitorData *monitor;
  struct Action_2_Int32_ZenFulcrum_EmbeddedBrowser_JSONNode___Fields fields;
};
struct Action_3_String_Boolean_String___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_3_String_Boolean_String_ {
  struct Action_3_String_Boolean_String___Class *klass;
  struct MonitorData *monitor;
  struct Action_3_String_Boolean_String___Fields fields;
};
struct Action_2_Boolean_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_2_Boolean_Boolean_ {
  struct Action_2_Boolean_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Action_2_Boolean_Boolean___Fields fields;
};
struct __declspec(align(8)) BrowserFocusState__Fields {
  bool hasKeyboardFocus;
  bool hasMouseFocus;
  struct String * focusedTagName;
  bool focusedNodeEditable;
};
struct BrowserFocusState {
  struct BrowserFocusState__Class *klass;
  struct MonitorData *monitor;
  struct BrowserFocusState__Fields fields;
};
struct Action_1_ZenFulcrum_EmbeddedBrowser_Browser___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_ZenFulcrum_EmbeddedBrowser_Browser_ {
  struct Action_1_ZenFulcrum_EmbeddedBrowser_Browser___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_ZenFulcrum_EmbeddedBrowser_Browser___Fields fields;
};
enum MouseButton__Enum : int32_t {
  MouseButton__Enum_Left = 1,
  MouseButton__Enum_Middle = 2,
  MouseButton__Enum_Right = 4,
};
struct MouseButton__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MouseButton__Enum value;
};
struct __declspec(align(8)) BrowserInput__Fields {
  struct Browser * browser;
  bool kbWasFocused;
  bool mouseWasFocused;
  struct List_1_UnityEngine_Event_ * extraEventsToInject;
  enum MouseButton__Enum prevButtons;
  struct Vector2 prevPos;
  struct BrowserInput_ButtonHistory * leftClickHistory;
  struct Vector2 accumulatedScroll;
  float lastScrollEvent;
};
struct BrowserInput {
  struct BrowserInput__Class *klass;
  struct MonitorData *monitor;
  struct BrowserInput__Fields fields;
};
struct __declspec(align(8)) HashSet_1_UnityEngine_KeyCode___Fields {
  struct Int32__Array * _buckets;
  struct HashSet_1_T_Slot_UnityEngine_KeyCode___Array * _slots;
  int32_t _count;
  int32_t _lastIndex;
  int32_t _freeList;
  struct IEqualityComparer_1_UnityEngine_KeyCode_ * _comparer;
  int32_t _version;
  struct SerializationInfo * _siInfo;
};
struct HashSet_1_UnityEngine_KeyCode_ {
  struct HashSet_1_UnityEngine_KeyCode___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_UnityEngine_KeyCode___Fields fields;
};
struct HashSet_1_T_Slot_UnityEngine_KeyCode_ {
  int32_t hashCode;
  int32_t next;
  enum KeyCode__Enum value;
};
struct HashSet_1_T_Slot_UnityEngine_KeyCode___Boxed {
  struct HashSet_1_T_Slot_UnityEngine_KeyCode___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_T_Slot_UnityEngine_KeyCode_ fields;
};
struct HashSet_1_T_Slot_UnityEngine_KeyCode___Array {
  struct HashSet_1_T_Slot_UnityEngine_KeyCode___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HashSet_1_T_Slot_UnityEngine_KeyCode_ vector[32];
};
struct __declspec(align(8)) List_1_UnityEngine_Event___Fields {
  struct Event__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_Event_ {
  struct List_1_UnityEngine_Event___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_Event___Fields fields;
};
struct __declspec(align(8)) BrowserInput_ButtonHistory__Fields {
  float lastPressTime;
  int32_t repeatCount;
  struct Vector3 lastPosition;
};
struct BrowserInput_ButtonHistory {
  struct BrowserInput_ButtonHistory__Class *klass;
  struct MonitorData *monitor;
  struct BrowserInput_ButtonHistory__Fields fields;
};
struct __declspec(align(8)) BrowserNavState__Fields {
  bool canGoForward;
  bool canGoBack;
  bool loading;
  struct String * url;
};
struct BrowserNavState {
  struct BrowserNavState__Class *klass;
  struct MonitorData *monitor;
  struct BrowserNavState__Fields fields;
};
struct DialogHandler__Fields {
  struct MonoBehaviour__Fields _;
  struct Browser * parentBrowser;
  struct Browser * dialogBrowser;
  struct DialogHandler_DialogCallback * dialogCallback;
  struct DialogHandler_MenuCallback * contextCallback;
};
struct DialogHandler {
  struct DialogHandler__Class *klass;
  struct MonitorData *monitor;
  struct DialogHandler__Fields fields;
};
struct DialogHandler_DialogCallback__Fields {
  struct MulticastDelegate__Fields _;
};
struct DialogHandler_DialogCallback {
  struct DialogHandler_DialogCallback__Class *klass;
  struct MonitorData *monitor;
  struct DialogHandler_DialogCallback__Fields fields;
};
struct DialogHandler_MenuCallback__Fields {
  struct MulticastDelegate__Fields _;
};
struct DialogHandler_MenuCallback {
  struct DialogHandler_MenuCallback__Class *klass;
  struct MonitorData *monitor;
  struct DialogHandler_MenuCallback__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_ {
  struct Dictionary_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct Browser * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Fields {
  struct Dictionary_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Fields {
  struct Dictionary_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Fields fields;
};
struct Browser__Array {
  struct Browser__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Browser * vector[32];
};
struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_Browser_ {
  struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_Browser___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_ZenFulcrum_EmbeddedBrowser_Browser_ {
  struct ICollection_1_ZenFulcrum_EmbeddedBrowser_Browser___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_ {
  int32_t key;
  struct Browser * value;
};
struct KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Boxed {
  struct KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_ fields;
};
struct KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Array {
  struct KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_ZenFulcrum_EmbeddedBrowser_Browser_ {
  struct IEnumerable_1_ZenFulcrum_EmbeddedBrowser_Browser___Class *klass;
  struct MonitorData *monitor;
};
struct Action_2_String_String___VTable {
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
struct Action_2_String_String___StaticFields {
};
struct Action_2_String_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_2_String_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_2_String_String___VTable vtable;
};
struct INewWindowHandler__VTable {
  VirtualInvokeData CreateBrowser;
};
struct INewWindowHandler__StaticFields {
};
struct INewWindowHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct INewWindowHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct INewWindowHandler__VTable vtable;
};
struct Action_1_UnityEngine_Texture2D___VTable {
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
struct Action_1_UnityEngine_Texture2D___StaticFields {
};
struct Action_1_UnityEngine_Texture2D___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_UnityEngine_Texture2D___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_UnityEngine_Texture2D___VTable vtable;
};
struct IBrowserUI__VTable {
  VirtualInvokeData InputUpdate;
  VirtualInvokeData get_MouseHasFocus;
  VirtualInvokeData get_MousePosition;
  VirtualInvokeData get_MouseButtons;
  VirtualInvokeData get_MouseScroll;
  VirtualInvokeData get_KeyboardHasFocus;
  VirtualInvokeData get_KeyEvents;
  VirtualInvokeData get_BrowserCursor;
  VirtualInvokeData get_InputSettings;
};
struct IBrowserUI__StaticFields {
};
struct IBrowserUI__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IBrowserUI__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IBrowserUI__VTable vtable;
};
struct BrowserNative_NativeCookie__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};}