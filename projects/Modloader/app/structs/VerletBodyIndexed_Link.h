#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletBodyIndexed_Link_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletBodyIndexed_Link_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletBodyIndexed_Link_DEFINED)
#define IL2CPP_STRUCT_VerletBodyIndexed_Link_DEFINED
struct VerletBodyIndexed_Link {
    int32_t IndexP0;
    int32_t IndexP1;
    float RestDistance;
    float Stiffness;
};
#endif
#if !defined(IL2CPP_STRUCT_VerletBodyIndexed_Link_FWDDECL)
#define IL2CPP_STRUCT_VerletBodyIndexed_Link_FWDDECL
#endif
#undef IL2CPP_STRUCT_VerletBodyIndexed_Link_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletBodyIndexed_Link_DEFINED) && !defined(IL2CPP_STRUCT_VerletBodyIndexed_Link_FWDDECL)
#include <Modloader/app/structs/VerletBodyIndexed_Link.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletBodyIndexed_Link.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
