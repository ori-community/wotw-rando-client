#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HSteamPipe_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HSteamPipe_INITIALIZING
#if !defined(IL2CPP_STRUCT_HSteamPipe_DEFINED)
#define IL2CPP_STRUCT_HSteamPipe_DEFINED
struct HSteamPipe {
    int32_t m_HSteamPipe;
};
#endif
#if !defined(IL2CPP_STRUCT_HSteamPipe_FWDDECL)
#define IL2CPP_STRUCT_HSteamPipe_FWDDECL
#endif
#undef IL2CPP_STRUCT_HSteamPipe_INITIALIZING
#if !defined(IL2CPP_STRUCT_HSteamPipe_DEFINED) && !defined(IL2CPP_STRUCT_HSteamPipe_FWDDECL)
#include <Modloader/app/structs/HSteamPipe.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HSteamPipe.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
