#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MenuTabEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MenuTabEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_MenuTabEntry_DEFINED)
#include <Modloader/app/structs/MenuTabEntry__Fields.h>
#if defined(IL2CPP_STRUCT_MenuTabEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_MenuTabEntry_DEFINED
struct MenuTabEntry__Class;
struct MenuTabEntry {
    struct MenuTabEntry__Class* klass;
    MonitorData* monitor;
    struct MenuTabEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MenuTabEntry_FWDDECL)
#define IL2CPP_STRUCT_MenuTabEntry_FWDDECL
#include <Modloader/app/structs/MenuTabEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_MenuTabEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_MenuTabEntry_DEFINED) && !defined(IL2CPP_STRUCT_MenuTabEntry_FWDDECL)
#include <Modloader/app/structs/MenuTabEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MenuTabEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
