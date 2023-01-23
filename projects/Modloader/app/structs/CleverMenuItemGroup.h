#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CleverMenuItemGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CleverMenuItemGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_CleverMenuItemGroup_DEFINED)
#include <Modloader/app/structs/CleverMenuItemGroup__Fields.h>
#if defined(IL2CPP_STRUCT_CleverMenuItemGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_CleverMenuItemGroup_DEFINED
struct CleverMenuItemGroup__Class;
struct CleverMenuItemGroup {
    struct CleverMenuItemGroup__Class* klass;
    MonitorData* monitor;
    struct CleverMenuItemGroup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CleverMenuItemGroup_FWDDECL)
#define IL2CPP_STRUCT_CleverMenuItemGroup_FWDDECL
#include <Modloader/app/structs/CleverMenuItemGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_CleverMenuItemGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_CleverMenuItemGroup_DEFINED) && !defined(IL2CPP_STRUCT_CleverMenuItemGroup_FWDDECL)
#include <Modloader/app/structs/CleverMenuItemGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CleverMenuItemGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
