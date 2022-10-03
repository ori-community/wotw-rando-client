namespace app {
    struct TextAlignment__Enum__VTable {
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

    struct TextAlignment__Enum__StaticFields {
    };

    struct TextAlignment__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TextAlignment__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TextAlignment__Enum__VTable vtable;
    };

    struct __declspec(align(8)) Event__Fields {
        void* m_Ptr;
    };

    struct Event {
        struct Event__Class* klass;
        MonitorData* monitor;
        struct Event__Fields fields;
    };

    struct Event__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Event__StaticFields {
        struct Event* s_Current;
        struct Event* s_MasterEvent;
        struct Dictionary_2_System_String_System_Int32_* __f__switch_map0;
    };

    struct Event__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Event__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Event__VTable vtable;
    };

    enum class EventType__Enum : int32_t {
        MouseDown = 0x00000000,
        MouseUp = 0x00000001,
        MouseMove = 0x00000002,
        MouseDrag = 0x00000003,
        KeyDown = 0x00000004,
        KeyUp = 0x00000005,
        ScrollWheel = 0x00000006,
        Repaint = 0x00000007,
        Layout = 0x00000008,
        DragUpdated = 0x00000009,
        DragPerform = 0x0000000a,
        DragExited = 0x0000000f,
        Ignore = 0x0000000b,
        Used = 0x0000000c,
        ValidateCommand = 0x0000000d,
        ExecuteCommand = 0x0000000e,
        ContextClick = 0x00000010,
        MouseEnterWindow = 0x00000014,
        MouseLeaveWindow = 0x00000015,
        mouseDown = 0x00000000,
        mouseUp = 0x00000001,
        mouseMove = 0x00000002,
        mouseDrag = 0x00000003,
        keyDown = 0x00000004,
        keyUp = 0x00000005,
        scrollWheel = 0x00000006,
        repaint = 0x00000007,
        layout = 0x00000008,
        dragUpdated = 0x00000009,
        dragPerform = 0x0000000a,
        ignore = 0x0000000b,
        used = 0x0000000c,
    };

    struct EventType__Enum__Boxed {
        struct EventType__Enum__Class* klass;
        MonitorData* monitor;
        EventType__Enum value;
    };

    struct EventType__Enum__VTable {
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

    struct EventType__Enum__StaticFields {
    };

    struct EventType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EventType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EventType__Enum__VTable vtable;
    };

    enum class EventModifiers__Enum : int32_t {
        None = 0x00000000,
        Shift = 0x00000001,
        Control = 0x00000002,
        Alt = 0x00000004,
        Command = 0x00000008,
        Numeric = 0x00000010,
        CapsLock = 0x00000020,
        FunctionKey = 0x00000040,
    };

    struct EventModifiers__Enum__Boxed {
        struct EventModifiers__Enum__Class* klass;
        MonitorData* monitor;
        EventModifiers__Enum value;
    };

    struct EventModifiers__Enum__VTable {
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

    struct EventModifiers__Enum__StaticFields {
    };

    struct EventModifiers__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EventModifiers__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EventModifiers__Enum__VTable vtable;
    };

    struct GUISkin__Fields {
        struct ScriptableObject__Fields _;
        struct Font* m_Font;
        struct GUIStyle* m_box;
        struct GUIStyle* m_button;
        struct GUIStyle* m_toggle;
        struct GUIStyle* m_label;
        struct GUIStyle* m_textField;
        struct GUIStyle* m_textArea;
        struct GUIStyle* m_window;
        struct GUIStyle* m_horizontalSlider;
        struct GUIStyle* m_horizontalSliderThumb;
        struct GUIStyle* m_verticalSlider;
        struct GUIStyle* m_verticalSliderThumb;
        struct GUIStyle* m_horizontalScrollbar;
        struct GUIStyle* m_horizontalScrollbarThumb;
        struct GUIStyle* m_horizontalScrollbarLeftButton;
        struct GUIStyle* m_horizontalScrollbarRightButton;
        struct GUIStyle* m_verticalScrollbar;
        struct GUIStyle* m_verticalScrollbarThumb;
        struct GUIStyle* m_verticalScrollbarUpButton;
        struct GUIStyle* m_verticalScrollbarDownButton;
        struct GUIStyle* m_ScrollView;
        struct GUIStyle__Array* m_CustomStyles;
        struct GUISettings* m_Settings;
        struct Dictionary_2_System_String_UnityEngine_GUIStyle_* m_Styles;
    };

    struct GUISkin {
        struct GUISkin__Class* klass;
        MonitorData* monitor;
        struct GUISkin__Fields fields;
    };

    struct __declspec(align(8)) GUIStyle__Fields {
        void* m_Ptr;
        struct GUIStyleState* m_Normal;
        struct GUIStyleState* m_Hover;
        struct GUIStyleState* m_Active;
        struct GUIStyleState* m_Focused;
        struct GUIStyleState* m_OnNormal;
        struct GUIStyleState* m_OnHover;
        struct GUIStyleState* m_OnActive;
        struct GUIStyleState* m_OnFocused;
        struct RectOffset* m_Border;
        struct RectOffset* m_Padding;
        struct RectOffset* m_Margin;
        struct RectOffset* m_Overflow;
    };

    struct GUIStyle {
        struct GUIStyle__Class* klass;
        MonitorData* monitor;
        struct GUIStyle__Fields fields;
    };

    struct __declspec(align(8)) GUIStyleState__Fields {
        void* m_Ptr;
        struct GUIStyle* m_SourceStyle;
    };

    struct GUIStyleState {
        struct GUIStyleState__Class* klass;
        MonitorData* monitor;
        struct GUIStyleState__Fields fields;
    };

    struct GUIStyle__Array {
        struct GUIStyle__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct GUIStyle* vector[32];
    };

    struct __declspec(align(8)) GUISettings__Fields {
        bool m_DoubleClickSelectsWord;
        bool m_TripleClickSelectsLine;
        struct Color m_CursorColor;
        float m_CursorFlashSpeed;
        struct Color m_SelectionColor;
    };

    struct GUISettings {
        struct GUISettings__Class* klass;
        MonitorData* monitor;
        struct GUISettings__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_System_String_UnityEngine_GUIStyle___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_GUIStyle___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_String_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_GUIStyle_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_GUIStyle_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_String_UnityEngine_GUIStyle_ {
        struct Dictionary_2_System_String_UnityEngine_GUIStyle___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_String_UnityEngine_GUIStyle___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_GUIStyle_ {
        int32_t hashCode;
        int32_t next;
        struct String* key;
        struct GUIStyle* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_GUIStyle___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_GUIStyle___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_GUIStyle_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_GUIStyle___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_GUIStyle___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_GUIStyle_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_GUIStyle___Fields {
        struct Dictionary_2_System_String_UnityEngine_GUIStyle_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_GUIStyle_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_GUIStyle___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_GUIStyle___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_GUIStyle___Fields {
        struct Dictionary_2_System_String_UnityEngine_GUIStyle_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_GUIStyle_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_GUIStyle___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_GUIStyle___Fields fields;
    };

    struct IEnumerator_1_UnityEngine_GUIStyle_ {
        struct IEnumerator_1_UnityEngine_GUIStyle___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_UnityEngine_GUIStyle_ {
        struct ICollection_1_UnityEngine_GUIStyle___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_String_UnityEngine_GUIStyle_ {
        struct String* key;
        struct GUIStyle* value;
    };

    struct KeyValuePair_2_System_String_UnityEngine_GUIStyle___Boxed {
        struct KeyValuePair_2_System_String_UnityEngine_GUIStyle___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_String_UnityEngine_GUIStyle_ fields;
    };

    struct KeyValuePair_2_System_String_UnityEngine_GUIStyle___Array {
        struct KeyValuePair_2_System_String_UnityEngine_GUIStyle___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_String_UnityEngine_GUIStyle_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_UnityEngine_GUIStyle_ {
        struct IEnumerator_1_KeyValuePair_2_System_String_UnityEngine_GUIStyle___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_UnityEngine_GUIStyle_ {
        struct IEnumerable_1_UnityEngine_GUIStyle___Class* klass;
        MonitorData* monitor;
    };

    struct GUISkin_SkinChangedDelegate__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct GUISkin_SkinChangedDelegate {
        struct GUISkin_SkinChangedDelegate__Class* klass;
        MonitorData* monitor;
        struct GUISkin_SkinChangedDelegate__Fields fields;
    };

    struct GUIStyleState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GUIStyleState__StaticFields {
    };

    struct GUIStyleState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GUIStyleState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GUIStyleState__VTable vtable;
    };

    struct GUIStyle__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GUIStyle__StaticFields {
        bool showKeyboardFocus;
        struct GUIStyle* s_None;
    };

    struct GUIStyle__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GUIStyle__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GUIStyle__VTable vtable;
    };

    struct GUIStyle__Array__VTable {
    };

    struct GUIStyle__Array__StaticFields {
    };

    struct GUIStyle__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GUIStyle__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GUIStyle__Array__VTable vtable;
    };

    struct GUISettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GUISettings__StaticFields {
    };

    struct GUISettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GUISettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GUISettings__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_GUIStyle___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_GUIStyle___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_GUIStyle___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_GUIStyle___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_GUIStyle___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_GUIStyle___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_GUIStyle___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_GUIStyle___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_GUIStyle___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_GUIStyle___Array__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_GUIStyle___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
        VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData get_Count_2;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_GUIStyle___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_GUIStyle___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_GUIStyle___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_GUIStyle___VTable vtable;
    };

    struct IEnumerator_1_UnityEngine_GUIStyle___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_UnityEngine_GUIStyle___StaticFields {
    };

    struct IEnumerator_1_UnityEngine_GUIStyle___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_UnityEngine_GUIStyle___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_UnityEngine_GUIStyle___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_GUIStyle___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
        VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData get_Count_2;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_GUIStyle___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_GUIStyle___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_GUIStyle___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_GUIStyle___VTable vtable;
    };

    struct ICollection_1_UnityEngine_GUIStyle___VTable {
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
    };

    struct ICollection_1_UnityEngine_GUIStyle___StaticFields {
    };

    struct ICollection_1_UnityEngine_GUIStyle___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_UnityEngine_GUIStyle___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_UnityEngine_GUIStyle___VTable vtable;
    };

    struct GUIStyle___VTable {
    };

    struct GUIStyle___StaticFields {
    };

    struct GUIStyle___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GUIStyle___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GUIStyle___VTable vtable;
    };

    struct KeyValuePair_2_System_String_UnityEngine_GUIStyle___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_System_String_UnityEngine_GUIStyle___StaticFields {
    };

    struct KeyValuePair_2_System_String_UnityEngine_GUIStyle___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_String_UnityEngine_GUIStyle___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_String_UnityEngine_GUIStyle___VTable vtable;
    };

    struct KeyValuePair_2_System_String_UnityEngine_GUIStyle___Array__VTable {
    };

    struct KeyValuePair_2_System_String_UnityEngine_GUIStyle___Array__StaticFields {
    };

    struct KeyValuePair_2_System_String_UnityEngine_GUIStyle___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_String_UnityEngine_GUIStyle___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_String_UnityEngine_GUIStyle___Array__VTable vtable;
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_UnityEngine_GUIStyle___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_UnityEngine_GUIStyle___StaticFields {
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_UnityEngine_GUIStyle___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KeyValuePair_2_System_String_UnityEngine_GUIStyle___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KeyValuePair_2_System_String_UnityEngine_GUIStyle___VTable vtable;
    };

    struct IEnumerable_1_UnityEngine_GUIStyle___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_UnityEngine_GUIStyle___StaticFields {
    };

    struct IEnumerable_1_UnityEngine_GUIStyle___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_UnityEngine_GUIStyle___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_UnityEngine_GUIStyle___VTable vtable;
    };

    struct Dictionary_2_System_String_UnityEngine_GUIStyle___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
        VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
        VirtualInvokeData ContainsKey;
        VirtualInvokeData Add;
        VirtualInvokeData Remove;
        VirtualInvokeData TryGetValue;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
        VirtualInvokeData Clear;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
        VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_IDictionary_get_Item;
        VirtualInvokeData System_Collections_IDictionary_set_Item;
        VirtualInvokeData System_Collections_IDictionary_get_Keys;
        VirtualInvokeData System_Collections_IDictionary_get_Values;
        VirtualInvokeData System_Collections_IDictionary_Contains;
        VirtualInvokeData System_Collections_IDictionary_Add;
        VirtualInvokeData Clear_1;
        VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
        VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
        VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
        VirtualInvokeData System_Collections_IDictionary_Remove;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData ContainsKey_1;
        VirtualInvokeData TryGetValue_1;
        VirtualInvokeData get_Item_1;
        VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
        VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
        VirtualInvokeData get_Count_2;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData OnDeserialization;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData OnDeserialization_1;
    };

    struct Dictionary_2_System_String_UnityEngine_GUIStyle___StaticFields {
    };

    struct Dictionary_2_System_String_UnityEngine_GUIStyle___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_System_String_UnityEngine_GUIStyle___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_System_String_UnityEngine_GUIStyle___VTable vtable;
    };

    struct GUISkin_SkinChangedDelegate__VTable {
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

    struct GUISkin_SkinChangedDelegate__StaticFields {
    };

    struct GUISkin_SkinChangedDelegate__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GUISkin_SkinChangedDelegate__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GUISkin_SkinChangedDelegate__VTable vtable;
    };

    struct GUISkin__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GUISkin__StaticFields {
        struct GUIStyle* ms_Error;
        struct GUISkin_SkinChangedDelegate* m_SkinChanged;
        struct GUISkin* current;
    };

    struct GUISkin__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GUISkin__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GUISkin__VTable vtable;
    };

    struct __declspec(align(8)) GUIContent__Fields {
        struct String* m_Text;
        struct Texture* m_Image;
        struct String* m_Tooltip;
    };

    struct GUIContent {
        struct GUIContent__Class* klass;
        MonitorData* monitor;
        struct GUIContent__Fields fields;
    };

    struct GUIContent__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GUIContent__StaticFields {
        struct GUIContent* s_Text;
        struct GUIContent* s_Image;
        struct GUIContent* s_TextImage;
        struct GUIContent* none;
    };

    struct GUIContent__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GUIContent__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GUIContent__VTable vtable;
    };

    enum class ScaleMode__Enum : int32_t {
        StretchToFill = 0x00000000,
        ScaleAndCrop = 0x00000001,
        ScaleToFit = 0x00000002,
    };

    struct ScaleMode__Enum__Boxed {
        struct ScaleMode__Enum__Class* klass;
        MonitorData* monitor;
        ScaleMode__Enum value;
    };

    struct ScaleMode__Enum__VTable {
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

    struct ScaleMode__Enum__StaticFields {
    };

    struct ScaleMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScaleMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScaleMode__Enum__VTable vtable;
    };

    enum class FocusType__Enum : int32_t {
        Native = 0x00000000,
        Keyboard = 0x00000001,
        Passive = 0x00000002,
    };

    struct FocusType__Enum__Boxed {
        struct FocusType__Enum__Class* klass;
        MonitorData* monitor;
        FocusType__Enum value;
    };

    struct FocusType__Enum__VTable {
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

    struct FocusType__Enum__StaticFields {
    };

    struct FocusType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FocusType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FocusType__Enum__VTable vtable;
    };

    enum class TextEditor_DblClickSnapping__Enum : uint8_t {
        WORDS = 0x00,
        PARAGRAPHS = 0x01,
    };

    struct TextEditor_DblClickSnapping__Enum__Boxed {
        struct TextEditor_DblClickSnapping__Enum__Class* klass;
        MonitorData* monitor;
        TextEditor_DblClickSnapping__Enum value;
    };

    struct __declspec(align(8)) TextEditor__Fields {
        struct TouchScreenKeyboard* keyboardOnScreen;
        int32_t controlID;
        struct GUIStyle* style;
        bool multiline;
        bool hasHorizontalCursorPos;
        bool isPasswordField;
        bool m_HasFocus;
        struct Vector2 scrollOffset;
        struct GUIContent* m_Content;
        struct Rect m_Position;
        int32_t m_CursorIndex;
        int32_t m_SelectIndex;
        bool m_RevealCursor;
        struct Vector2 graphicalCursorPos;
        struct Vector2 graphicalSelectCursorPos;
        bool m_MouseDragSelectsWholeWords;
        int32_t m_DblClickInitPos;
        TextEditor_DblClickSnapping__Enum m_DblClickSnap;

        bool m_bJustSelected;
        int32_t m_iAltCursorPos;
        struct String* oldText;
        int32_t oldPos;
        int32_t oldSelectPos;
    };

    struct TextEditor {
        struct TextEditor__Class* klass;
        MonitorData* monitor;
        struct TextEditor__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_UnityEngine_Event_UnityEngine_TextEditor_TextEditOp___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Event_UnityEngine_TextEditor_TextEditOp___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_UnityEngine_Event_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Event_UnityEngine_TextEditor_TextEditOp_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Event_UnityEngine_TextEditor_TextEditOp_* values;
        struct Object* _syncRoot;
    };

} // namespace app
