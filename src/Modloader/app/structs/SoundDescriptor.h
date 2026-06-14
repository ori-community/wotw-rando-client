#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundDescriptor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundDescriptor_DEFINED)
#include <Modloader/app/structs/SoundDescriptor__Fields.h>
#if defined(IL2CPP_STRUCT_SoundDescriptor__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundDescriptor_DEFINED
struct SoundDescriptor__Class;
struct SoundDescriptor {
    struct SoundDescriptor__Class* klass;
    MonitorData* monitor;
    struct SoundDescriptor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundDescriptor_FWDDECL)
#define IL2CPP_STRUCT_SoundDescriptor_FWDDECL
#include <Modloader/app/structs/SoundDescriptor__Class.h>
#endif
#undef IL2CPP_STRUCT_SoundDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundDescriptor_DEFINED) && !defined(IL2CPP_STRUCT_SoundDescriptor_FWDDECL)
#include <Modloader/app/structs/SoundDescriptor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundDescriptor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
