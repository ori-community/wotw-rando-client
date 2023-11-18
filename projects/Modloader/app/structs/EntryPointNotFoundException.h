#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntryPointNotFoundException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntryPointNotFoundException_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntryPointNotFoundException_DEFINED)
#include <Modloader/app/structs/EntryPointNotFoundException__Fields.h>
#if defined(IL2CPP_STRUCT_EntryPointNotFoundException__Fields_DEFINED)
#define IL2CPP_STRUCT_EntryPointNotFoundException_DEFINED
struct EntryPointNotFoundException__Class;
struct EntryPointNotFoundException {
    struct EntryPointNotFoundException__Class* klass;
    MonitorData* monitor;
    struct EntryPointNotFoundException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntryPointNotFoundException_FWDDECL)
#define IL2CPP_STRUCT_EntryPointNotFoundException_FWDDECL
#include <Modloader/app/structs/EntryPointNotFoundException__Class.h>
#endif
#undef IL2CPP_STRUCT_EntryPointNotFoundException_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntryPointNotFoundException_DEFINED) && !defined(IL2CPP_STRUCT_EntryPointNotFoundException_FWDDECL)
#include <Modloader/app/structs/EntryPointNotFoundException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntryPointNotFoundException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
