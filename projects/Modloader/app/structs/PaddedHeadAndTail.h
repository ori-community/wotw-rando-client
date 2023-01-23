#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PaddedHeadAndTail_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PaddedHeadAndTail_INITIALIZING
#if !defined(IL2CPP_STRUCT_PaddedHeadAndTail_DEFINED)
#define IL2CPP_STRUCT_PaddedHeadAndTail_DEFINED
struct PaddedHeadAndTail {
    int32_t Head;
    int32_t Tail;
};
#endif
#if !defined(IL2CPP_STRUCT_PaddedHeadAndTail_FWDDECL)
#define IL2CPP_STRUCT_PaddedHeadAndTail_FWDDECL
#endif
#undef IL2CPP_STRUCT_PaddedHeadAndTail_INITIALIZING
#if !defined(IL2CPP_STRUCT_PaddedHeadAndTail_DEFINED) && !defined(IL2CPP_STRUCT_PaddedHeadAndTail_FWDDECL)
#include <Modloader/app/structs/PaddedHeadAndTail.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PaddedHeadAndTail.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
