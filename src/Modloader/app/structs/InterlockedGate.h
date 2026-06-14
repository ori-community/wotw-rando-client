#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InterlockedGate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InterlockedGate_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterlockedGate_DEFINED)
#define IL2CPP_STRUCT_InterlockedGate_DEFINED
struct InterlockedGate {
    int32_t m_State;
};
#endif
#if !defined(IL2CPP_STRUCT_InterlockedGate_FWDDECL)
#define IL2CPP_STRUCT_InterlockedGate_FWDDECL
#endif
#undef IL2CPP_STRUCT_InterlockedGate_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterlockedGate_DEFINED) && !defined(IL2CPP_STRUCT_InterlockedGate_FWDDECL)
#include <Modloader/app/structs/InterlockedGate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InterlockedGate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
