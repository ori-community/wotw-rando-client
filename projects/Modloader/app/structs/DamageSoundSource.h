#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageSoundSource_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageSoundSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageSoundSource_DEFINED)
#include <Modloader/app/structs/DamageSoundSource__Fields.h>
#if defined(IL2CPP_STRUCT_DamageSoundSource__Fields_DEFINED)
#define IL2CPP_STRUCT_DamageSoundSource_DEFINED
struct DamageSoundSource__Class;
struct DamageSoundSource {
    struct DamageSoundSource__Class* klass;
    MonitorData* monitor;
    struct DamageSoundSource__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageSoundSource_FWDDECL)
#define IL2CPP_STRUCT_DamageSoundSource_FWDDECL
#include <Modloader/app/structs/DamageSoundSource__Class.h>
#endif
#undef IL2CPP_STRUCT_DamageSoundSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageSoundSource_DEFINED) && !defined(IL2CPP_STRUCT_DamageSoundSource_FWDDECL)
#include <Modloader/app/structs/DamageSoundSource.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageSoundSource.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
