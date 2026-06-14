#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpinWait_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpinWait_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpinWait_DEFINED)
#define IL2CPP_STRUCT_SpinWait_DEFINED
struct SpinWait {
    int32_t m_count;
};
#endif
#if !defined(IL2CPP_STRUCT_SpinWait_FWDDECL)
#define IL2CPP_STRUCT_SpinWait_FWDDECL
#endif
#undef IL2CPP_STRUCT_SpinWait_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpinWait_DEFINED) && !defined(IL2CPP_STRUCT_SpinWait_FWDDECL)
#include <Modloader/app/structs/SpinWait.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpinWait.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
