#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateController__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateController__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateController__StaticFields_DEFINED)
#define IL2CPP_STRUCT_UberStateController__StaticFields_DEFINED
struct List_1_Moon_IUberStateApplier_;
struct List_1_Moon_IUberStateApplierWithCallbacks_;
struct Dictionary_2_System_String_Moon_SceneUberStateGroup_;
struct Action_2_Moon_IGenericUberState_Single_;
struct Action;
struct UberStateController;
struct UberStateValueStore;
struct UberStateController__StaticFields {
    struct List_1_Moon_IUberStateApplier_* AllStateAppliers;
    struct List_1_Moon_IUberStateApplierWithCallbacks_* AllStateAppliersWithCallbacks;
    struct Dictionary_2_System_String_Moon_SceneUberStateGroup_* SceneGroups;
    struct Action_2_Moon_IGenericUberState_Single_* OnGenericStateValueChangedEditor;
    struct Action* OnCurrentValueStoreChanged;
    struct UberStateController* s_instance;
    float s_lastTimeCacheWasUpdated;
    struct List_1_Moon_IUberStateApplier_* s_appliersEditorCache;
    struct UberStateValueStore* m_currentStateValueStore;
};
#endif
#if !defined(IL2CPP_STRUCT_UberStateController__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_UberStateController__StaticFields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_2_Moon_IGenericUberState_Single_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_Moon_SceneUberStateGroup_.h>
#include <Modloader/app/structs/List_1_Moon_IUberStateApplierWithCallbacks_.h>
#include <Modloader/app/structs/List_1_Moon_IUberStateApplier_.h>
#include <Modloader/app/structs/UberStateController.h>
#include <Modloader/app/structs/UberStateValueStore.h>
#endif
#undef IL2CPP_STRUCT_UberStateController__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateController__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_UberStateController__StaticFields_FWDDECL)
#include <Modloader/app/structs/UberStateController__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateController__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
