#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CageTextureMaker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CageTextureMaker_INITIALIZING
#if !defined(IL2CPP_STRUCT_CageTextureMaker_DEFINED)
#define IL2CPP_STRUCT_CageTextureMaker_DEFINED
struct CageTextureMaker__Class;
struct CageTextureMaker {
    struct CageTextureMaker__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CageTextureMaker_FWDDECL)
#define IL2CPP_STRUCT_CageTextureMaker_FWDDECL
#include <Modloader/app/structs/CageTextureMaker__Class.h>
#endif
#undef IL2CPP_STRUCT_CageTextureMaker_INITIALIZING
#if !defined(IL2CPP_STRUCT_CageTextureMaker_DEFINED) && !defined(IL2CPP_STRUCT_CageTextureMaker_FWDDECL)
#include <Modloader/app/structs/CageTextureMaker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CageTextureMaker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
