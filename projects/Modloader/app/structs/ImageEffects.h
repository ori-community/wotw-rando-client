#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ImageEffects_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ImageEffects_INITIALIZING
#if !defined(IL2CPP_STRUCT_ImageEffects_DEFINED)
#define IL2CPP_STRUCT_ImageEffects_DEFINED
struct ImageEffects__Class;
struct ImageEffects {
    struct ImageEffects__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ImageEffects_FWDDECL)
#define IL2CPP_STRUCT_ImageEffects_FWDDECL
#include <Modloader/app/structs/ImageEffects__Class.h>
#endif
#undef IL2CPP_STRUCT_ImageEffects_INITIALIZING
#if !defined(IL2CPP_STRUCT_ImageEffects_DEFINED) && !defined(IL2CPP_STRUCT_ImageEffects_FWDDECL)
#include <Modloader/app/structs/ImageEffects.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ImageEffects.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
