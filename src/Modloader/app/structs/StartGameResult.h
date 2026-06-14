#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StartGameResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StartGameResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_StartGameResult_DEFINED)
#include <Modloader/app/structs/StartGameResult__Fields.h>
#if defined(IL2CPP_STRUCT_StartGameResult__Fields_DEFINED)
#define IL2CPP_STRUCT_StartGameResult_DEFINED
struct StartGameResult__Class;
struct StartGameResult {
    struct StartGameResult__Class* klass;
    MonitorData* monitor;
    struct StartGameResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StartGameResult_FWDDECL)
#define IL2CPP_STRUCT_StartGameResult_FWDDECL
#include <Modloader/app/structs/StartGameResult__Class.h>
#endif
#undef IL2CPP_STRUCT_StartGameResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_StartGameResult_DEFINED) && !defined(IL2CPP_STRUCT_StartGameResult_FWDDECL)
#include <Modloader/app/structs/StartGameResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StartGameResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
