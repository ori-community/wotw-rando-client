#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoListItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoListItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoListItem_DEFINED)
#include <Modloader/app/structs/MonoListItem__Fields.h>
#if defined(IL2CPP_STRUCT_MonoListItem__Fields_DEFINED)
#define IL2CPP_STRUCT_MonoListItem_DEFINED
struct MonoListItem__Class;
struct MonoListItem {
    struct MonoListItem__Class* klass;
    MonitorData* monitor;
    struct MonoListItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoListItem_FWDDECL)
#define IL2CPP_STRUCT_MonoListItem_FWDDECL
#include <Modloader/app/structs/MonoListItem__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoListItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoListItem_DEFINED) && !defined(IL2CPP_STRUCT_MonoListItem_FWDDECL)
#include <Modloader/app/structs/MonoListItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoListItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
