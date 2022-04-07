namespace app {
struct Predicate_1_SaveSlotBackupInfo___StaticFields {
};
struct Predicate_1_SaveSlotBackupInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Predicate_1_SaveSlotBackupInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Predicate_1_SaveSlotBackupInfo___VTable vtable;
};
struct Comparison_1_SaveSlotBackupInfo___VTable {
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
struct Comparison_1_SaveSlotBackupInfo___StaticFields {
};
struct Comparison_1_SaveSlotBackupInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Comparison_1_SaveSlotBackupInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Comparison_1_SaveSlotBackupInfo___VTable vtable;
};
struct BackupSaveCleverMenuItemSelectionManager_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BackupSaveCleverMenuItemSelectionManager_c__StaticFields {
  struct BackupSaveCleverMenuItemSelectionManager_c * __9;
  struct Predicate_1_SaveSlotBackupInfo_ * __9__7_0;
  struct Comparison_1_SaveSlotBackupInfo_ * __9__7_1;
};
struct BackupSaveCleverMenuItemSelectionManager_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BackupSaveCleverMenuItemSelectionManager_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BackupSaveCleverMenuItemSelectionManager_c__VTable vtable;
};

struct BackupSaveSlotUI__Fields {
  struct MonoBehaviour__Fields _;
  struct MessageBox * AreaName;
  struct Vector2 Size;
  struct Vector2 Center;
  struct BaseAnimator * HighlightAnimator;
  bool m_highlighted;
  struct SaveSlotInfo * SaveSlot;
  int32_t Index;
};
struct BackupSaveSlotUI {
  struct BackupSaveSlotUI__Class *klass;
  struct MonitorData *monitor;
  struct BackupSaveSlotUI__Fields fields;
};
struct BackupSaveSlotUI__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BackupSaveSlotUI__StaticFields {
};
struct BackupSaveSlotUI__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BackupSaveSlotUI__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BackupSaveSlotUI__VTable vtable;
};

struct CancelDifficultyScreenAction__Fields {
  struct ActionMethod__Fields _;
};
struct CancelDifficultyScreenAction {
  struct CancelDifficultyScreenAction__Class *klass;
  struct MonitorData *monitor;
  struct CancelDifficultyScreenAction__Fields fields;
};
struct CancelDifficultyScreenAction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData Perform;
  VirtualInvokeData GetNiceName;
  VirtualInvokeData Perform_1;
};
struct CancelDifficultyScreenAction__StaticFields {
};
struct CancelDifficultyScreenAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CancelDifficultyScreenAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CancelDifficultyScreenAction__VTable vtable;
};

struct ConfirmOrCancel__Fields {
  struct MonoBehaviour__Fields _;
  struct Action * OnConfirm;
  struct Action * OnCancel;
  struct ActionMethod * OnConfirmAction;
  struct ActionMethod * OnCancelAction;
};
struct ConfirmOrCancel {
  struct ConfirmOrCancel__Class *klass;
  struct MonitorData *monitor;
  struct ConfirmOrCancel__Fields fields;
};
struct ConfirmOrCancel__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConfirmOrCancel__StaticFields {
};
struct ConfirmOrCancel__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConfirmOrCancel__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConfirmOrCancel__VTable vtable;
};

struct PauseScreenSaveSlot__Fields {
  struct MonoBehaviour__Fields _;
  struct SaveSlotUI * SaveSlotUI;
};
struct PauseScreenSaveSlot {
  struct PauseScreenSaveSlot__Class *klass;
  struct MonitorData *monitor;
  struct PauseScreenSaveSlot__Fields fields;
};
struct SaveSlotUI__Fields {
  struct MonoBehaviour__Fields _;
  struct MessageBox * AreaName;
  struct MessageBox * Health;
  struct MessageBox * Energy;
  struct MessageBox * Time;
  struct MessageBox * EmptySlot;
  struct MessageBox * Difficulty;
  struct TranslatedMessageProvider * EmptySlotTextMessageProvider;
  struct MessageProvider * EasyTextMessageProvider;
  struct MessageProvider * NormalTextMessageProvider;
  struct MessageProvider * HardTextMessageProvider;
  struct MessageProvider * OneLifeTestMessageProvider;
  struct MessageProvider * DifficultyTextMessageProvider;
  int32_t SaveSlotIndex;
  bool m_highlighted;
  struct Transform * PromptPosition;
  struct Renderer * Screenshot;
  struct Renderer * ScreenshotB;
  struct GameObject * SaveGroup;
  struct GameObject * EmptyGroup;
  struct GameObject * FullyCompletedGroup;
  struct GameObject * DeathGroup;
  struct GameObject * ErrorGroup;
  struct GameObject * BusyNotification;
  struct GameObject * DifficultyEasy;
  struct GameObject * DifficultyNormal;
  struct GameObject * DifficultyHard;
  struct GameObject * DifficultyOneLife;
  struct Texture * EmptyTexture;
  struct GameObject * BackupSaveSlotPrefab;
  bool m_hasPlayedBackupsOpenSound;
  struct SoundProvider * BackupsOpenSound;
  struct SoundProvider * BackupsSelectSound;
  struct Vector2 Size;
  struct Vector2 Center;
  struct BaseAnimator * HighlightAnimator;
  struct BaseAnimator * CopyingAnimator;
  struct BaseAnimator * DeletingAnimator;
  struct BaseAnimator * BusyAnimator;
  struct BaseAnimator * HighlightAnimatorB;
  struct BaseAnimator * BackupsAnimator;
  struct GameObject * DifficultyScreen;
  struct Vector3 InitPosition;
  bool DisableInteraction;
  struct Rect m_bounds;
  int32_t m_backupIndex;
  struct List_1_BackupSaveSlotUI_ * m_backupSaveSlots;
  bool m_backupsNeedUpdating;
  bool m_isDeleting;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct SaveSlotUI {
  struct SaveSlotUI__Class *klass;
  struct MonitorData *monitor;
  struct SaveSlotUI__Fields fields;
};
struct __declspec(align(8)) List_1_BackupSaveSlotUI___Fields {
  struct BackupSaveSlotUI__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_BackupSaveSlotUI_ {
  struct List_1_BackupSaveSlotUI___Class *klass;
  struct MonitorData *monitor;
  struct List_1_BackupSaveSlotUI___Fields fields;
};
struct BackupSaveSlotUI__Array {
  struct BackupSaveSlotUI__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct BackupSaveSlotUI * vector[32];
};
struct IEnumerator_1_BackupSaveSlotUI_ {
  struct IEnumerator_1_BackupSaveSlotUI___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_BackupSaveSlotUI___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_BackupSaveSlotUI___StaticFields {
};
struct IEnumerator_1_BackupSaveSlotUI___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_BackupSaveSlotUI___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_BackupSaveSlotUI___VTable vtable;
};
struct List_1_BackupSaveSlotUI___VTable {
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
struct List_1_BackupSaveSlotUI___StaticFields {
  struct BackupSaveSlotUI__Array * _emptyArray;
};
struct List_1_BackupSaveSlotUI___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_BackupSaveSlotUI___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_BackupSaveSlotUI___VTable vtable;
};
struct SaveSlotUI__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct SaveSlotUI__StaticFields {
};
struct SaveSlotUI__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SaveSlotUI__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SaveSlotUI__VTable vtable;
};
struct PauseScreenSaveSlot__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PauseScreenSaveSlot__StaticFields {
};
struct PauseScreenSaveSlot__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PauseScreenSaveSlot__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PauseScreenSaveSlot__VTable vtable;
};

struct PressAnyButtonPrompt__Fields {
  struct MonoBehaviour__Fields _;
  struct Action * OnButtonPressed;
  struct ActionMethod * OnButtonPressedAction;
};
struct PressAnyButtonPrompt {
  struct PressAnyButtonPrompt__Class *klass;
  struct MonitorData *monitor;
  struct PressAnyButtonPrompt__Fields fields;
};
struct PressAnyButtonPrompt__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PressAnyButtonPrompt__StaticFields {
};
struct PressAnyButtonPrompt__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PressAnyButtonPrompt__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PressAnyButtonPrompt__VTable vtable;
};

struct __declspec(align(8)) SaveSlotBackup__Fields {
  int32_t Index;
  int32_t Count;
  bool IsLoaded;
  bool IsLoading;
  struct SaveSlotBackupInfo__Array * SaveSlotInfos;
};
struct SaveSlotBackup {
  struct SaveSlotBackup__Class *klass;
  struct MonitorData *monitor;
  struct SaveSlotBackup__Fields fields;
};
struct SaveSlotBackup__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SaveSlotBackup__StaticFields {
};
struct SaveSlotBackup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SaveSlotBackup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SaveSlotBackup__VTable vtable;
};

struct SaveSlotBackupsManager__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_SaveSlotBackupsManager_BackupParseQueue_ * m_backupParseQueue;
  struct Byte__Array * m_backupBytes;
  struct String * m_backupName;
  struct Stack_1_System_Int32__1 * m_buffersToDelete;
  bool m_createBackupPending;
  int32_t m_currentReadingSlot;
  int32_t m_currentReadingBackup;
  float m_lastSaveTime;
  float m_gameJustLoadedDelay;
  struct List_1_SaveSlotBackup_ * m_saveSlotBackups;
  int32_t m_busyGrace;
};
struct SaveSlotBackupsManager {
  struct SaveSlotBackupsManager__Class *klass;
  struct MonitorData *monitor;
  struct SaveSlotBackupsManager__Fields fields;
};
struct __declspec(align(8)) List_1_SaveSlotBackupsManager_BackupParseQueue___Fields {
  struct SaveSlotBackupsManager_BackupParseQueue__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SaveSlotBackupsManager_BackupParseQueue_ {
  struct List_1_SaveSlotBackupsManager_BackupParseQueue___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SaveSlotBackupsManager_BackupParseQueue___Fields fields;
};
struct SaveSlotBackupsManager_BackupParseQueue {
  int32_t slotIndex;
  int32_t backupIndex;
  struct Byte__Array * rawData;
};
struct SaveSlotBackupsManager_BackupParseQueue__Boxed {
  struct SaveSlotBackupsManager_BackupParseQueue__Class *klass;
  struct MonitorData *monitor;
  struct SaveSlotBackupsManager_BackupParseQueue fields;
};
struct SaveSlotBackupsManager_BackupParseQueue__Array {
  struct SaveSlotBackupsManager_BackupParseQueue__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SaveSlotBackupsManager_BackupParseQueue vector[32];
};
struct IEnumerator_1_SaveSlotBackupsManager_BackupParseQueue_ {
  struct IEnumerator_1_SaveSlotBackupsManager_BackupParseQueue___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Stack_1_System_Int32__1__Fields {
  struct Int32__Array__Array * _array;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Stack_1_System_Int32__1 {
  struct Stack_1_System_Int32__1__Class *klass;
  struct MonitorData *monitor;
  struct Stack_1_System_Int32__1__Fields fields;
};
struct IEnumerator_1_System_Int32__1 {
  struct IEnumerator_1_System_Int32__1__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_SaveSlotBackup___Fields {
  struct SaveSlotBackup__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SaveSlotBackup_ {
  struct List_1_SaveSlotBackup___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SaveSlotBackup___Fields fields;
};
struct SaveSlotBackup__Array {
  struct SaveSlotBackup__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SaveSlotBackup * vector[32];
};
struct IEnumerator_1_SaveSlotBackup_ {
  struct IEnumerator_1_SaveSlotBackup___Class *klass;
  struct MonitorData *monitor;
};
struct SaveSlotBackupsManager_BackupParseQueue__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SaveSlotBackupsManager_BackupParseQueue__StaticFields {
};
struct SaveSlotBackupsManager_BackupParseQueue__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SaveSlotBackupsManager_BackupParseQueue__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SaveSlotBackupsManager_BackupParseQueue__VTable vtable;
};
struct IEnumerator_1_SaveSlotBackupsManager_BackupParseQueue___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_SaveSlotBackupsManager_BackupParseQueue___StaticFields {
};
struct IEnumerator_1_SaveSlotBackupsManager_BackupParseQueue___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_SaveSlotBackupsManager_BackupParseQueue___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_SaveSlotBackupsManager_BackupParseQueue___VTable vtable;
};
struct List_1_SaveSlotBackupsManager_BackupParseQueue___VTable {
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
struct List_1_SaveSlotBackupsManager_BackupParseQueue___StaticFields {
  struct SaveSlotBackupsManager_BackupParseQueue__Array * _emptyArray;
};
struct List_1_SaveSlotBackupsManager_BackupParseQueue___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_SaveSlotBackupsManager_BackupParseQueue___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_SaveSlotBackupsManager_BackupParseQueue___VTable vtable;
};
struct IEnumerator_1_System_Int32__1__VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Int32__1__StaticFields {
};
struct IEnumerator_1_System_Int32__1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Int32__1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_Int32__1__VTable vtable;
};
struct Stack_1_System_Int32__1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_1;
};
struct Stack_1_System_Int32__1__StaticFields {
};
struct Stack_1_System_Int32__1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Stack_1_System_Int32__1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Stack_1_System_Int32__1__VTable vtable;
};
struct IEnumerator_1_SaveSlotBackup___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_SaveSlotBackup___StaticFields {
};
struct IEnumerator_1_SaveSlotBackup___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_SaveSlotBackup___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_SaveSlotBackup___VTable vtable;
};
struct List_1_SaveSlotBackup___VTable {
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
struct List_1_SaveSlotBackup___StaticFields {
  struct SaveSlotBackup__Array * _emptyArray;
};
struct List_1_SaveSlotBackup___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_SaveSlotBackup___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_SaveSlotBackup___VTable vtable;
};
struct SaveSlotBackupsManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SaveSlotBackupsManager__StaticFields {
  bool BulkLoadBackupsOnXbox;
  bool ParseBackupsOnMainthread;
  float TIME_BETWEEN_SAVES;
  struct SaveSlotBackupsManager * m_instance;
  struct Action_1_Int32_ * OnFinishedReadingBackups;
  int32_t LastBackupType;
  bool DisableJustLoadedDelay;
};
struct SaveSlotBackupsManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SaveSlotBackupsManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SaveSlotBackupsManager__VTable vtable;
};

struct SaveSlotBackupsManager_c {
  struct SaveSlotBackupsManager_c__Class *klass;
  struct MonitorData *monitor;
};
struct SaveSlotBackupsManager_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SaveSlotBackupsManager_c__StaticFields {
  struct SaveSlotBackupsManager_c * __9;
  struct Action_1_Int32_ * __9__37_0;
};
struct SaveSlotBackupsManager_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SaveSlotBackupsManager_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SaveSlotBackupsManager_c__VTable vtable;
};

struct SaveSlotBackupUI__Fields {
  struct MonoBehaviour__Fields _;
};
struct SaveSlotBackupUI {
  struct SaveSlotBackupUI__Class *klass;
  struct MonitorData *monitor;
  struct SaveSlotBackupUI__Fields fields;
};
struct SaveSlotBackupUI__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SaveSlotBackupUI__StaticFields {
};
struct SaveSlotBackupUI__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SaveSlotBackupUI__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SaveSlotBackupUI__VTable vtable;
};

struct SaveSlotsItemsUI__Fields {
  struct MonoBehaviour__Fields _;
  struct SaveSlotUI * SaveSlotUI;
  struct SaveSlotUI * SaveSlotCompletedUI;
  struct Transform * Scroll;
  float Spacing;
  struct List_1_SaveSlotUI_ * Items;
  float m_scroll;
  float m_targetScroll;
};
struct SaveSlotsItemsUI {
  struct SaveSlotsItemsUI__Class *klass;
  struct MonitorData *monitor;
  struct SaveSlotsItemsUI__Fields fields;
};
struct __declspec(align(8)) List_1_SaveSlotUI___Fields {
  struct SaveSlotUI__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SaveSlotUI_ {
  struct List_1_SaveSlotUI___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SaveSlotUI___Fields fields;
};
struct SaveSlotUI__Array {
  struct SaveSlotUI__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SaveSlotUI * vector[32];
};
struct IEnumerator_1_SaveSlotUI_ {
  struct IEnumerator_1_SaveSlotUI___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_SaveSlotUI___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_SaveSlotUI___StaticFields {
};
struct IEnumerator_1_SaveSlotUI___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_SaveSlotUI___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_SaveSlotUI___VTable vtable;
};
struct List_1_SaveSlotUI___VTable {
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
struct List_1_SaveSlotUI___StaticFields {
  struct SaveSlotUI__Array * _emptyArray;
};
struct List_1_SaveSlotUI___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_SaveSlotUI___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_SaveSlotUI___VTable vtable;
};
struct SaveSlotsItemsUI__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SaveSlotsItemsUI__StaticFields {
};
struct SaveSlotsItemsUI__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SaveSlotsItemsUI__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SaveSlotsItemsUI__VTable vtable;
};

struct SaveSlotsManager__Fields {
  struct MonoBehaviour__Fields _;
  int32_t m_currentSlotIndex;
  int32_t m_backupIndex;
  struct UberStateValueStore * m_uberStateValueStore;
  struct List_1_SaveSlotInfo_ * SaveSlots;
  int32_t m_slotsRefreshForVersion;
  struct PlayerUberStateDescriptor * PlayerDescriptor;
};
struct SaveSlotsManager {
  struct SaveSlotsManager__Class *klass;
  struct MonitorData *monitor;
  struct SaveSlotsManager__Fields fields;
};
struct __declspec(align(8)) List_1_SaveSlotInfo___Fields {
  struct SaveSlotInfo__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SaveSlotInfo_ {
  struct List_1_SaveSlotInfo___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SaveSlotInfo___Fields fields;
};
struct SaveSlotInfo__Array {
  struct SaveSlotInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SaveSlotInfo * vector[32];
};
struct IEnumerator_1_SaveSlotInfo_ {
  struct IEnumerator_1_SaveSlotInfo___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_SaveSlotInfo___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_SaveSlotInfo___StaticFields {
};
struct IEnumerator_1_SaveSlotInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_SaveSlotInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_SaveSlotInfo___VTable vtable;
};
struct List_1_SaveSlotInfo___VTable {
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
struct List_1_SaveSlotInfo___StaticFields {
  struct SaveSlotInfo__Array * _emptyArray;
};
struct List_1_SaveSlotInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_SaveSlotInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_SaveSlotInfo___VTable vtable;
};
struct SaveSlotsManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SaveSlotsManager__StaticFields {
  struct SaveSlotsManager * Instance;
  struct Action * SlotsPrepared;
};
struct SaveSlotsManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SaveSlotsManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SaveSlotsManager__VTable vtable;
};

struct SaveSlotsManager_c {
  struct SaveSlotsManager_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_SaveSlotInfo_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_SaveSlotInfo_Boolean_ {
  struct Func_2_SaveSlotInfo_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_SaveSlotInfo_Boolean___Fields fields;
};
struct Func_2_SaveSlotInfo_Boolean___VTable {
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
struct Func_2_SaveSlotInfo_Boolean___StaticFields {
};
struct Func_2_SaveSlotInfo_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_SaveSlotInfo_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_SaveSlotInfo_Boolean___VTable vtable;
};
struct SaveSlotsManager_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};}