#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritLeashEffect_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritLeashEffect_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritLeashEffect_DEFINED)
#include <Modloader/app/structs/SpiritLeashEffect__Fields.h>
#if defined(IL2CPP_STRUCT_SpiritLeashEffect__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiritLeashEffect_DEFINED
struct SpiritLeashEffect__Class;
struct SpiritLeashEffect {
    struct SpiritLeashEffect__Class* klass;
    MonitorData* monitor;
    struct SpiritLeashEffect__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritLeashEffect_FWDDECL)
#define IL2CPP_STRUCT_SpiritLeashEffect_FWDDECL
#include <Modloader/app/structs/SpiritLeashEffect__Class.h>
#endif
#undef IL2CPP_STRUCT_SpiritLeashEffect_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritLeashEffect_DEFINED) && !defined(IL2CPP_STRUCT_SpiritLeashEffect_FWDDECL)
#include <Modloader/app/structs/SpiritLeashEffect.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritLeashEffect.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
