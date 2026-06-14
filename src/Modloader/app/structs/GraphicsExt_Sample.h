#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GraphicsExt_Sample_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GraphicsExt_Sample_INITIALIZING
#if !defined(IL2CPP_STRUCT_GraphicsExt_Sample_DEFINED)
#define IL2CPP_STRUCT_GraphicsExt_Sample_DEFINED
struct String;
struct GraphicsExt_Sample {
    struct String* name;
};
#endif
#if !defined(IL2CPP_STRUCT_GraphicsExt_Sample_FWDDECL)
#define IL2CPP_STRUCT_GraphicsExt_Sample_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GraphicsExt_Sample_INITIALIZING
#if !defined(IL2CPP_STRUCT_GraphicsExt_Sample_DEFINED) && !defined(IL2CPP_STRUCT_GraphicsExt_Sample_FWDDECL)
#include <Modloader/app/structs/GraphicsExt_Sample.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GraphicsExt_Sample.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
