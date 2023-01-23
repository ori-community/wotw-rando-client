#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegisterPlayFabUserResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegisterPlayFabUserResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegisterPlayFabUserResult_DEFINED)
#include <Modloader/app/structs/RegisterPlayFabUserResult__Fields.h>
#if defined(IL2CPP_STRUCT_RegisterPlayFabUserResult__Fields_DEFINED)
#define IL2CPP_STRUCT_RegisterPlayFabUserResult_DEFINED
struct RegisterPlayFabUserResult__Class;
struct RegisterPlayFabUserResult {
    struct RegisterPlayFabUserResult__Class* klass;
    MonitorData* monitor;
    struct RegisterPlayFabUserResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegisterPlayFabUserResult_FWDDECL)
#define IL2CPP_STRUCT_RegisterPlayFabUserResult_FWDDECL
#include <Modloader/app/structs/RegisterPlayFabUserResult__Class.h>
#endif
#undef IL2CPP_STRUCT_RegisterPlayFabUserResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegisterPlayFabUserResult_DEFINED) && !defined(IL2CPP_STRUCT_RegisterPlayFabUserResult_FWDDECL)
#include <Modloader/app/structs/RegisterPlayFabUserResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegisterPlayFabUserResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
