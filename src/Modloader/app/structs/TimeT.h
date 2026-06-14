#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeT_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeT_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeT_DEFINED)
#define IL2CPP_STRUCT_TimeT_DEFINED
struct TimeT {
    int64_t SecondsSinceUnixEpoch;
};
#endif
#if !defined(IL2CPP_STRUCT_TimeT_FWDDECL)
#define IL2CPP_STRUCT_TimeT_FWDDECL
#endif
#undef IL2CPP_STRUCT_TimeT_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeT_DEFINED) && !defined(IL2CPP_STRUCT_TimeT_FWDDECL)
#include <Modloader/app/structs/TimeT.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeT.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
