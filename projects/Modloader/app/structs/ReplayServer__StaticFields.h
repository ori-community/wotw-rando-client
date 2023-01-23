#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReplayServer__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReplayServer__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayServer__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ReplayServer__StaticFields_DEFINED
struct Queue_1_System_String_;
struct ReplayServer__StaticFields {
    bool IsOnServerBuild;
    int32_t Port;
    int32_t s_logMaxSize;
    struct Queue_1_System_String_* m_serverLog;
};
#endif
#if !defined(IL2CPP_STRUCT_ReplayServer__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ReplayServer__StaticFields_FWDDECL
#include <Modloader/app/structs/Queue_1_System_String_.h>
#endif
#undef IL2CPP_STRUCT_ReplayServer__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayServer__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ReplayServer__StaticFields_FWDDECL)
#include <Modloader/app/structs/ReplayServer__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReplayServer__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
