#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HmdRect2_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HmdRect2_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_HmdRect2_t_DEFINED)
#include <Modloader/app/structs/HmdVector2_t.h>
#if defined(IL2CPP_STRUCT_HmdVector2_t_DEFINED)
#define IL2CPP_STRUCT_HmdRect2_t_DEFINED
struct HmdRect2_t {
    struct HmdVector2_t vTopLeft;
    struct HmdVector2_t vBottomRight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HmdRect2_t_FWDDECL)
#define IL2CPP_STRUCT_HmdRect2_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_HmdRect2_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_HmdRect2_t_DEFINED) && !defined(IL2CPP_STRUCT_HmdRect2_t_FWDDECL)
#include <Modloader/app/structs/HmdRect2_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HmdRect2_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
