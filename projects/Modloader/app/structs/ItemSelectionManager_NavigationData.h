#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ItemSelectionManager_NavigationData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ItemSelectionManager_NavigationData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ItemSelectionManager_NavigationData_DEFINED)
#include <Modloader/app/structs/ItemSelectionManager_NavigationData__Fields.h>
#if defined(IL2CPP_STRUCT_ItemSelectionManager_NavigationData__Fields_DEFINED)
#define IL2CPP_STRUCT_ItemSelectionManager_NavigationData_DEFINED
struct ItemSelectionManager_NavigationData__Class;
struct ItemSelectionManager_NavigationData {
    struct ItemSelectionManager_NavigationData__Class* klass;
    MonitorData* monitor;
    struct ItemSelectionManager_NavigationData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ItemSelectionManager_NavigationData_FWDDECL)
#define IL2CPP_STRUCT_ItemSelectionManager_NavigationData_FWDDECL
#include <Modloader/app/structs/ItemSelectionManager_NavigationData__Class.h>
#endif
#undef IL2CPP_STRUCT_ItemSelectionManager_NavigationData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ItemSelectionManager_NavigationData_DEFINED) && !defined(IL2CPP_STRUCT_ItemSelectionManager_NavigationData_FWDDECL)
#include <Modloader/app/structs/ItemSelectionManager_NavigationData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ItemSelectionManager_NavigationData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
