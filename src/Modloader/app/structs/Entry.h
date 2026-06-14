#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Entry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Entry_INITIALIZING
#if !defined(IL2CPP_STRUCT_Entry_DEFINED)
#include <Modloader/app/structs/Entry__Fields.h>
#if defined(IL2CPP_STRUCT_Entry__Fields_DEFINED)
#define IL2CPP_STRUCT_Entry_DEFINED
struct Entry__Class;
struct Entry {
    struct Entry__Class* klass;
    MonitorData* monitor;
    struct Entry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Entry_FWDDECL)
#define IL2CPP_STRUCT_Entry_FWDDECL
#include <Modloader/app/structs/Entry__Class.h>
#endif
#undef IL2CPP_STRUCT_Entry_INITIALIZING
#if !defined(IL2CPP_STRUCT_Entry_DEFINED) && !defined(IL2CPP_STRUCT_Entry_FWDDECL)
#include <Modloader/app/structs/Entry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Entry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
