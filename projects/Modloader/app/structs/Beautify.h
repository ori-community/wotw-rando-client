#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Beautify_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Beautify_INITIALIZING
#if !defined(IL2CPP_STRUCT_Beautify_DEFINED)
#include <Modloader/app/structs/Beautify__Fields.h>
#if defined(IL2CPP_STRUCT_Beautify__Fields_DEFINED)
#define IL2CPP_STRUCT_Beautify_DEFINED
struct Beautify__Class;
struct Beautify {
    struct Beautify__Class* klass;
    MonitorData* monitor;
    struct Beautify__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Beautify_FWDDECL)
#define IL2CPP_STRUCT_Beautify_FWDDECL
#include <Modloader/app/structs/Beautify__Class.h>
#endif
#undef IL2CPP_STRUCT_Beautify_INITIALIZING
#if !defined(IL2CPP_STRUCT_Beautify_DEFINED) && !defined(IL2CPP_STRUCT_Beautify_FWDDECL)
#include <Modloader/app/structs/Beautify.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Beautify.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
