#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SessionMask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SessionMask_INITIALIZING
#if !defined(IL2CPP_STRUCT_SessionMask_DEFINED)
#define IL2CPP_STRUCT_SessionMask_DEFINED
struct SessionMask {
    uint32_t m_mask;
};
#endif
#if !defined(IL2CPP_STRUCT_SessionMask_FWDDECL)
#define IL2CPP_STRUCT_SessionMask_FWDDECL
#endif
#undef IL2CPP_STRUCT_SessionMask_INITIALIZING
#if !defined(IL2CPP_STRUCT_SessionMask_DEFINED) && !defined(IL2CPP_STRUCT_SessionMask_FWDDECL)
#include <Modloader/app/structs/SessionMask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SessionMask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
