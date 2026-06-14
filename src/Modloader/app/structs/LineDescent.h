#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LineDescent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LineDescent_INITIALIZING
#if !defined(IL2CPP_STRUCT_LineDescent_DEFINED)
#define IL2CPP_STRUCT_LineDescent_DEFINED
struct LineDescent {
    float baseline;
    float baselineToBottom;
};
#endif
#if !defined(IL2CPP_STRUCT_LineDescent_FWDDECL)
#define IL2CPP_STRUCT_LineDescent_FWDDECL
#endif
#undef IL2CPP_STRUCT_LineDescent_INITIALIZING
#if !defined(IL2CPP_STRUCT_LineDescent_DEFINED) && !defined(IL2CPP_STRUCT_LineDescent_FWDDECL)
#include <Modloader/app/structs/LineDescent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LineDescent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
