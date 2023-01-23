#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseEffect_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseEffect_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseEffect_DEFINED)
#include <Modloader/app/structs/BaseEffect__Fields.h>
#if defined(IL2CPP_STRUCT_BaseEffect__Fields_DEFINED)
#define IL2CPP_STRUCT_BaseEffect_DEFINED
struct BaseEffect__Class;
struct BaseEffect {
    struct BaseEffect__Class* klass;
    MonitorData* monitor;
    struct BaseEffect__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaseEffect_FWDDECL)
#define IL2CPP_STRUCT_BaseEffect_FWDDECL
#include <Modloader/app/structs/BaseEffect__Class.h>
#endif
#undef IL2CPP_STRUCT_BaseEffect_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseEffect_DEFINED) && !defined(IL2CPP_STRUCT_BaseEffect_FWDDECL)
#include <Modloader/app/structs/BaseEffect.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseEffect.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
