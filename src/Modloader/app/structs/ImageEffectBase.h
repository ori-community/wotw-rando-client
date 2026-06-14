#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ImageEffectBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ImageEffectBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_ImageEffectBase_DEFINED)
#include <Modloader/app/structs/ImageEffectBase__Fields.h>
#if defined(IL2CPP_STRUCT_ImageEffectBase__Fields_DEFINED)
#define IL2CPP_STRUCT_ImageEffectBase_DEFINED
struct ImageEffectBase__Class;
struct ImageEffectBase {
    struct ImageEffectBase__Class* klass;
    MonitorData* monitor;
    struct ImageEffectBase__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ImageEffectBase_FWDDECL)
#define IL2CPP_STRUCT_ImageEffectBase_FWDDECL
#include <Modloader/app/structs/ImageEffectBase__Class.h>
#endif
#undef IL2CPP_STRUCT_ImageEffectBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_ImageEffectBase_DEFINED) && !defined(IL2CPP_STRUCT_ImageEffectBase_FWDDECL)
#include <Modloader/app/structs/ImageEffectBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ImageEffectBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
