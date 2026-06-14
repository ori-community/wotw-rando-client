#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ImageEffectOpaque_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ImageEffectOpaque_INITIALIZING
#if !defined(IL2CPP_STRUCT_ImageEffectOpaque_DEFINED)
#define IL2CPP_STRUCT_ImageEffectOpaque_DEFINED
struct ImageEffectOpaque__Class;
struct ImageEffectOpaque {
    struct ImageEffectOpaque__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ImageEffectOpaque_FWDDECL)
#define IL2CPP_STRUCT_ImageEffectOpaque_FWDDECL
#include <Modloader/app/structs/ImageEffectOpaque__Class.h>
#endif
#undef IL2CPP_STRUCT_ImageEffectOpaque_INITIALIZING
#if !defined(IL2CPP_STRUCT_ImageEffectOpaque_DEFINED) && !defined(IL2CPP_STRUCT_ImageEffectOpaque_FWDDECL)
#include <Modloader/app/structs/ImageEffectOpaque.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ImageEffectOpaque.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
