#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ItemSelectionManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ItemSelectionManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_ItemSelectionManager_DEFINED)
#include <Modloader/app/structs/ItemSelectionManager__Fields.h>
#if defined(IL2CPP_STRUCT_ItemSelectionManager__Fields_DEFINED)
#define IL2CPP_STRUCT_ItemSelectionManager_DEFINED
struct ItemSelectionManager__Class;
struct ItemSelectionManager {
    struct ItemSelectionManager__Class* klass;
    MonitorData* monitor;
    struct ItemSelectionManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ItemSelectionManager_FWDDECL)
#define IL2CPP_STRUCT_ItemSelectionManager_FWDDECL
#include <Modloader/app/structs/ItemSelectionManager__Class.h>
#endif
#undef IL2CPP_STRUCT_ItemSelectionManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_ItemSelectionManager_DEFINED) && !defined(IL2CPP_STRUCT_ItemSelectionManager_FWDDECL)
#include <Modloader/app/structs/ItemSelectionManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ItemSelectionManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
