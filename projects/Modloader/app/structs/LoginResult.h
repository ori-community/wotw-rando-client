#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoginResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoginResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoginResult_DEFINED)
#include <Modloader/app/structs/LoginResult__Fields.h>
#if defined(IL2CPP_STRUCT_LoginResult__Fields_DEFINED)
#define IL2CPP_STRUCT_LoginResult_DEFINED
struct LoginResult__Class;
struct LoginResult {
    struct LoginResult__Class* klass;
    MonitorData* monitor;
    struct LoginResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoginResult_FWDDECL)
#define IL2CPP_STRUCT_LoginResult_FWDDECL
#include <Modloader/app/structs/LoginResult__Class.h>
#endif
#undef IL2CPP_STRUCT_LoginResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoginResult_DEFINED) && !defined(IL2CPP_STRUCT_LoginResult_FWDDECL)
#include <Modloader/app/structs/LoginResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoginResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
