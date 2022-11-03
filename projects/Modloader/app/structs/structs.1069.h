namespace app {
    struct __declspec(align(8)) SayWordsOnTouch_Verse__Fields {
        float delay;
        struct String* textHTML;
        float dwellTime;
    };

    struct SayWordsOnTouch_Verse {
        struct SayWordsOnTouch_Verse__Class* klass;
        MonitorData* monitor;
        struct SayWordsOnTouch_Verse__Fields fields;
    };

    struct SayWordsOnTouch_Verse__Array {
        struct SayWordsOnTouch_Verse__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SayWordsOnTouch_Verse* vector[32];
    };

    struct SayWordsOnTouch_Verse__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SayWordsOnTouch_Verse__StaticFields {
    };

    struct SayWordsOnTouch_Verse__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SayWordsOnTouch_Verse__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SayWordsOnTouch_Verse__VTable vtable;
    };

    struct SayWordsOnTouch_Verse__Array__VTable {
    };

    struct SayWordsOnTouch_Verse__Array__StaticFields {
    };

    struct SayWordsOnTouch_Verse__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SayWordsOnTouch_Verse__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SayWordsOnTouch_Verse__Array__VTable vtable;
    };

    struct SayWordsOnTouch__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SayWordsOnTouch__StaticFields {
        int32_t _ActiveSpeakers_k__BackingField;
    };

    struct SayWordsOnTouch__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SayWordsOnTouch__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SayWordsOnTouch__VTable vtable;
    };

    struct __declspec(align(8)) SayWordsOnTouch_SayStuff_d_10__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct SayWordsOnTouch* __4__this;
        int32_t _idx_5__2;
    };

    struct SayWordsOnTouch_SayStuff_d_10 {
        struct SayWordsOnTouch_SayStuff_d_10__Class* klass;
        MonitorData* monitor;
        struct SayWordsOnTouch_SayStuff_d_10__Fields fields;
    };

    struct SayWordsOnTouch_SayStuff_d_10__VTable {
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

    struct SayWordsOnTouch_SayStuff_d_10__StaticFields {
    };

    struct SayWordsOnTouch_SayStuff_d_10__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SayWordsOnTouch_SayStuff_d_10__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SayWordsOnTouch_SayStuff_d_10__VTable vtable;
    };

    struct SimpleController__Fields {
        struct MonoBehaviour__Fields _;
        struct Browser* browser;
        struct InputField* urlInput;
    };

    struct SimpleController {
        struct SimpleController__Class* klass;
        MonitorData* monitor;
        struct SimpleController__Fields fields;
    };

    struct SimpleController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SimpleController__StaticFields {
    };

    struct SimpleController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SimpleController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SimpleController__VTable vtable;
    };

    struct SimpleFPSController__Fields {
        struct MonoBehaviour__Fields _;
        float lookSpeed;
        float moveSpeed;
        float moveForce;
        float jumpForce;
        float dampening;
        struct Vector3 bottom;
        struct Camera* head;
        struct Rigidbody* body;
        float lookPitch;
    };

    struct SimpleFPSController {
        struct SimpleFPSController__Class* klass;
        MonitorData* monitor;
        struct SimpleFPSController__Fields fields;
    };

    struct SimpleFPSController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SimpleFPSController__StaticFields {
    };

    struct SimpleFPSController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SimpleFPSController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SimpleFPSController__VTable vtable;
    };

    struct SimpleScripting__Fields {
        struct MonoBehaviour__Fields _;
        struct Browser* browser;
        int32_t colorIdx;
        struct Color__Array* colors;
    };

    struct SimpleScripting {
        struct SimpleScripting__Class* klass;
        MonitorData* monitor;
        struct SimpleScripting__Fields fields;
    };

    struct SimpleScripting__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SimpleScripting__StaticFields {
    };

    struct SimpleScripting__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SimpleScripting__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SimpleScripting__VTable vtable;
    };

    struct SimpleScripting_c {
        struct SimpleScripting_c__Class* klass;
        MonitorData* monitor;
    };

    struct SimpleScripting_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SimpleScripting_c__StaticFields {
        struct SimpleScripting_c* __9;
        struct Browser_JSCallback* __9__1_0;
        struct Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode_* __9__2_0;
    };

    struct SimpleScripting_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SimpleScripting_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SimpleScripting_c__VTable vtable;
    };

    struct __declspec(align(8)) SimpleScripting_GetUsername2_d_7__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct SimpleScripting* __4__this;
    };

    struct SimpleScripting_GetUsername2_d_7 {
        struct SimpleScripting_GetUsername2_d_7__Class* klass;
        MonitorData* monitor;
        struct SimpleScripting_GetUsername2_d_7__Fields fields;
    };

    struct SimpleScripting_GetUsername2_d_7__VTable {
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

    struct SimpleScripting_GetUsername2_d_7__StaticFields {
    };

    struct SimpleScripting_GetUsername2_d_7__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SimpleScripting_GetUsername2_d_7__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SimpleScripting_GetUsername2_d_7__VTable vtable;
    };

    struct TestDownloadServer__Fields {
        struct MonoBehaviour__Fields _;
        struct HttpListener* server;
        int32_t port;
        bool serverEnabled;
    };

    struct TestDownloadServer {
        struct TestDownloadServer__Class* klass;
        MonitorData* monitor;
        struct TestDownloadServer__Fields fields;
    };

    struct TestDownloadServer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TestDownloadServer__StaticFields {
    };

    struct TestDownloadServer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TestDownloadServer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TestDownloadServer__VTable vtable;
    };

    struct __declspec(align(8)) TestDownloadServer_c_DisplayClass5_0__Fields {
        struct HttpListenerResponse* res;
        struct StreamWriter* output;
    };

    struct TestDownloadServer_c_DisplayClass5_0 {
        struct TestDownloadServer_c_DisplayClass5_0__Class* klass;
        MonitorData* monitor;
        struct TestDownloadServer_c_DisplayClass5_0__Fields fields;
    };

    struct TestDownloadServer_c_DisplayClass5_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TestDownloadServer_c_DisplayClass5_0__StaticFields {
    };

    struct TestDownloadServer_c_DisplayClass5_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TestDownloadServer_c_DisplayClass5_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TestDownloadServer_c_DisplayClass5_0__VTable vtable;
    };

    struct VRBrowserPanel__Fields {
        struct MonoBehaviour__Fields _;
        struct Browser* contentBrowser;
        struct Browser* controlBrowser;
        struct Transform* keyboardLocation;
    };

    struct VRBrowserPanel {
        struct VRBrowserPanel__Class* klass;
        MonitorData* monitor;
        struct VRBrowserPanel__Fields fields;
    };

    struct VRBrowserPanel__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CreateBrowser;
    };

    struct VRBrowserPanel__StaticFields {
    };

    struct VRBrowserPanel__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VRBrowserPanel__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VRBrowserPanel__VTable vtable;
    };

    struct DestroyDetector__Fields {
        struct MonoBehaviour__Fields _;
        struct Action* onDestroy;
    };

    struct DestroyDetector {
        struct DestroyDetector__Class* klass;
        MonitorData* monitor;
        struct DestroyDetector__Fields fields;
    };

    struct DestroyDetector__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DestroyDetector__StaticFields {
    };

    struct DestroyDetector__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DestroyDetector__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DestroyDetector__VTable vtable;
    };

    struct DestroyDetector_c {
        struct DestroyDetector_c__Class* klass;
        MonitorData* monitor;
    };

    struct DestroyDetector_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DestroyDetector_c__StaticFields {
        struct DestroyDetector_c* __9;
        struct Action* __9__4_0;
    };

    struct DestroyDetector_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DestroyDetector_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DestroyDetector_c__VTable vtable;
    };

    struct VRMainControlPanel__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject* browserPrefab;
        float moveSpeed;
        float height;
        float radius;
        int32_t browsersToFit;
        struct List_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel_* allBrowsers;
        struct ExternalKeyboard* keyboard;
        struct Vector3 baseKeyboardScale;
        struct VRBrowserPanel* keyboardTarget;
    };

    struct VRMainControlPanel {
        struct VRMainControlPanel__Class* klass;
        MonitorData* monitor;
        struct VRMainControlPanel__Fields fields;
    };

    struct __declspec(align(8)) List_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel___Fields {
        struct VRBrowserPanel__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel_ {
        struct List_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel___Class* klass;
        MonitorData* monitor;
        struct List_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel___Fields fields;
    };

    struct VRBrowserPanel__Array {
        struct VRBrowserPanel__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct VRBrowserPanel* vector[32];
    };

    struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel_ {
        struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel___Class* klass;
        MonitorData* monitor;
    };

    struct ExternalKeyboard__Fields {
        struct MonoBehaviour__Fields _;
        bool automaticFocus;
        struct Browser* initialBrowser;
        bool hideWhenUnneeded;
        struct PointerUIBase* activeBrowserUI;
        struct Browser* keyboardBrowser;
        bool forcingFocus;
        struct Browser* _activeBrowser;
        struct Action_2_ZenFulcrum_EmbeddedBrowser_Browser_Boolean_* onFocusChange;
    };

    struct ExternalKeyboard {
        struct ExternalKeyboard__Class* klass;
        MonitorData* monitor;
        struct ExternalKeyboard__Fields fields;
    };

    struct Action_2_ZenFulcrum_EmbeddedBrowser_Browser_Boolean___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_2_ZenFulcrum_EmbeddedBrowser_Browser_Boolean_ {
        struct Action_2_ZenFulcrum_EmbeddedBrowser_Browser_Boolean___Class* klass;
        MonitorData* monitor;
        struct Action_2_ZenFulcrum_EmbeddedBrowser_Browser_Boolean___Fields fields;
    };

    struct VRBrowserPanel__Array__VTable {
    };

    struct VRBrowserPanel__Array__StaticFields {
    };

    struct VRBrowserPanel__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VRBrowserPanel__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VRBrowserPanel__Array__VTable vtable;
    };

    struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel___StaticFields {
    };

    struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct VRBrowserPanel__Array* _emptyArray;
    };

    struct List_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_2_ZenFulcrum_EmbeddedBrowser_Browser_Boolean___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ExternalKeyboard__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ExternalKeyboard__VTable vtable;
    };

    struct VRMainControlPanel__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct VRMainControlPanel__StaticFields {
        struct VRMainControlPanel* instance;
    };

    struct VRMainControlPanel__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VRMainControlPanel__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VRMainControlPanel__VTable vtable;
    };

    struct __declspec(align(8)) VRMainControlPanel_c_DisplayClass10_0__Fields {
        struct VRMainControlPanel* __4__this;
        int32_t direction;
    };

    struct VRMainControlPanel_c_DisplayClass10_0 {
        struct VRMainControlPanel_c_DisplayClass10_0__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VRMainControlPanel_c_DisplayClass10_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VRMainControlPanel_c_DisplayClass10_0__VTable vtable;
    };

    struct __declspec(align(8)) VRMainControlPanel_c_DisplayClass11_0__Fields {
        struct VRBrowserPanel* nextTo;
    };

    struct VRMainControlPanel_c_DisplayClass11_0 {
        struct VRMainControlPanel_c_DisplayClass11_0__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VRMainControlPanel_c_DisplayClass11_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VRMainControlPanel_c_DisplayClass11_0__VTable vtable;
    };

    struct __declspec(align(8)) VRMainControlPanel_DestroyBrowser_d_15__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct VRMainControlPanel* __4__this;
        struct VRBrowserPanel* pane;
        struct Vector3 _targetPos_5__2;
        float _t0_5__3;
    };

    struct VRMainControlPanel_DestroyBrowser_d_15 {
        struct VRMainControlPanel_DestroyBrowser_d_15__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VRMainControlPanel_DestroyBrowser_d_15__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VRMainControlPanel_DestroyBrowser_d_15__VTable vtable;
    };

    struct __declspec(align(8)) DialogHandler_c_DisplayClass3_0__Fields {
        struct DialogHandler_DialogCallback* dialogCallback;
        struct DialogHandler* handler;
        struct DialogHandler_MenuCallback* contextCallback;
    };

    struct DialogHandler_c_DisplayClass3_0 {
        struct DialogHandler_c_DisplayClass3_0__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DialogHandler_c_DisplayClass3_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DialogHandler_c_DisplayClass3_0__VTable vtable;
    };

    struct DownloadManager__Fields {
        struct MonoBehaviour__Fields _;
        bool manageAllBrowsers;
        bool promptForFileNames;
        struct String* saveFolder;
        struct Text* statusBar;
        struct List_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download_* downloads;
        struct StringBuilder* sb;
    };

    struct DownloadManager {
        struct DownloadManager__Class* klass;
        MonitorData* monitor;
        struct DownloadManager__Fields fields;
    };

    struct __declspec(align(8)) List_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download___Fields {
        struct DownloadManager_Download__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download_ {
        struct List_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download___Class* klass;
        MonitorData* monitor;
        struct List_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download___Fields fields;
    };

    struct __declspec(align(8)) DownloadManager_Download__Fields {
        struct Browser* browser;
        int32_t downloadId;
        struct String* name;
        struct String* path;
        int32_t speed;
        int32_t percent;
        struct String* status;
    };

    struct DownloadManager_Download {
        struct DownloadManager_Download__Class* klass;
        MonitorData* monitor;
        struct DownloadManager_Download__Fields fields;
    };

    struct DownloadManager_Download__Array {
        struct DownloadManager_Download__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct DownloadManager_Download* vector[32];
    };

    struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download_ {
        struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download___Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DownloadManager_Download__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DownloadManager_Download__VTable vtable;
    };

    struct DownloadManager_Download__Array__VTable {
    };

    struct DownloadManager_Download__Array__StaticFields {
    };

    struct DownloadManager_Download__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DownloadManager_Download__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DownloadManager_Download__Array__VTable vtable;
    };

    struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download___StaticFields {
    };

    struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct DownloadManager_Download__Array* _emptyArray;
    };

    struct List_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DownloadManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DownloadManager__VTable vtable;
    };

    struct __declspec(align(8)) DownloadManager_c_DisplayClass7_0__Fields {
        struct DownloadManager* __4__this;
        struct Browser* browser;
    };

    struct DownloadManager_c_DisplayClass7_0 {
        struct DownloadManager_c_DisplayClass7_0__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DownloadManager_c_DisplayClass7_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DownloadManager_c_DisplayClass7_0__VTable vtable;
    };

    struct WebResources {
        struct WebResources__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) EditorWebResources__Fields {
        struct String* basePath;
        struct Regex* matchDots;
    };

    struct EditorWebResources {
        struct EditorWebResources__Class* klass;
        MonitorData* monitor;
        struct EditorWebResources__Fields fields;
    };

} // namespace app
