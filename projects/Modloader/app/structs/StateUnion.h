#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateUnion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateUnion_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateUnion_DEFINED)
#define IL2CPP_STRUCT_StateUnion_DEFINED
struct StateUnion {
    int32_t State;
    int32_t AllElementsRequired;
    int32_t CurPosIndex;
    int32_t NumberOfRunningPos;
};
#endif
#if !defined(IL2CPP_STRUCT_StateUnion_FWDDECL)
#define IL2CPP_STRUCT_StateUnion_FWDDECL
#endif
#undef IL2CPP_STRUCT_StateUnion_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateUnion_DEFINED) && !defined(IL2CPP_STRUCT_StateUnion_FWDDECL)
#include <Modloader/app/structs/StateUnion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateUnion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
