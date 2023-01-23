#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundProvider_CallbackFunction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundProvider_CallbackFunction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundProvider_CallbackFunction_DEFINED)
#include <Modloader/app/structs/SoundProvider_CallbackFunction__Fields.h>
#if defined(IL2CPP_STRUCT_SoundProvider_CallbackFunction__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundProvider_CallbackFunction_DEFINED
struct SoundProvider_CallbackFunction__Class;
struct SoundProvider_CallbackFunction {
    struct SoundProvider_CallbackFunction__Class* klass;
    MonitorData* monitor;
    struct SoundProvider_CallbackFunction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundProvider_CallbackFunction_FWDDECL)
#define IL2CPP_STRUCT_SoundProvider_CallbackFunction_FWDDECL
#include <Modloader/app/structs/SoundProvider_CallbackFunction__Class.h>
#endif
#undef IL2CPP_STRUCT_SoundProvider_CallbackFunction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundProvider_CallbackFunction_DEFINED) && !defined(IL2CPP_STRUCT_SoundProvider_CallbackFunction_FWDDECL)
#include <Modloader/app/structs/SoundProvider_CallbackFunction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundProvider_CallbackFunction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
