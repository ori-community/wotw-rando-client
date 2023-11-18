#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AddComponentMenu_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AddComponentMenu_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddComponentMenu_DEFINED)
#include <Modloader/app/structs/AddComponentMenu__Fields.h>
#if defined(IL2CPP_STRUCT_AddComponentMenu__Fields_DEFINED)
#define IL2CPP_STRUCT_AddComponentMenu_DEFINED
struct AddComponentMenu__Class;
struct AddComponentMenu {
    struct AddComponentMenu__Class* klass;
    MonitorData* monitor;
    struct AddComponentMenu__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AddComponentMenu_FWDDECL)
#define IL2CPP_STRUCT_AddComponentMenu_FWDDECL
#include <Modloader/app/structs/AddComponentMenu__Class.h>
#endif
#undef IL2CPP_STRUCT_AddComponentMenu_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddComponentMenu_DEFINED) && !defined(IL2CPP_STRUCT_AddComponentMenu_FWDDECL)
#include <Modloader/app/structs/AddComponentMenu.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AddComponentMenu.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
