#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeLabel_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeLabel_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeLabel_DEFINED)
#define IL2CPP_STRUCT_RuntimeLabel_DEFINED
struct RuntimeLabel {
    int32_t Index;
    int32_t StackDepth;
    int32_t ContinuationStackDepth;
};
#endif
#if !defined(IL2CPP_STRUCT_RuntimeLabel_FWDDECL)
#define IL2CPP_STRUCT_RuntimeLabel_FWDDECL
#endif
#undef IL2CPP_STRUCT_RuntimeLabel_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeLabel_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeLabel_FWDDECL)
#include <Modloader/app/structs/RuntimeLabel.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeLabel.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
