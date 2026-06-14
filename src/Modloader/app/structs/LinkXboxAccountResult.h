#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LinkXboxAccountResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LinkXboxAccountResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinkXboxAccountResult_DEFINED)
#include <Modloader/app/structs/LinkXboxAccountResult__Fields.h>
#if defined(IL2CPP_STRUCT_LinkXboxAccountResult__Fields_DEFINED)
#define IL2CPP_STRUCT_LinkXboxAccountResult_DEFINED
struct LinkXboxAccountResult__Class;
struct LinkXboxAccountResult {
    struct LinkXboxAccountResult__Class* klass;
    MonitorData* monitor;
    struct LinkXboxAccountResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LinkXboxAccountResult_FWDDECL)
#define IL2CPP_STRUCT_LinkXboxAccountResult_FWDDECL
#include <Modloader/app/structs/LinkXboxAccountResult__Class.h>
#endif
#undef IL2CPP_STRUCT_LinkXboxAccountResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinkXboxAccountResult_DEFINED) && !defined(IL2CPP_STRUCT_LinkXboxAccountResult_FWDDECL)
#include <Modloader/app/structs/LinkXboxAccountResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LinkXboxAccountResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
