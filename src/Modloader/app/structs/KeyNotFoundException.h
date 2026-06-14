#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KeyNotFoundException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KeyNotFoundException_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyNotFoundException_DEFINED)
#include <Modloader/app/structs/KeyNotFoundException__Fields.h>
#if defined(IL2CPP_STRUCT_KeyNotFoundException__Fields_DEFINED)
#define IL2CPP_STRUCT_KeyNotFoundException_DEFINED
struct KeyNotFoundException__Class;
struct KeyNotFoundException {
    struct KeyNotFoundException__Class* klass;
    MonitorData* monitor;
    struct KeyNotFoundException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KeyNotFoundException_FWDDECL)
#define IL2CPP_STRUCT_KeyNotFoundException_FWDDECL
#include <Modloader/app/structs/KeyNotFoundException__Class.h>
#endif
#undef IL2CPP_STRUCT_KeyNotFoundException_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyNotFoundException_DEFINED) && !defined(IL2CPP_STRUCT_KeyNotFoundException_FWDDECL)
#include <Modloader/app/structs/KeyNotFoundException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KeyNotFoundException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
