#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinPoleEffects_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinPoleEffects_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPoleEffects_DEFINED)
#include <Modloader/app/structs/SeinPoleEffects__Fields.h>
#if defined(IL2CPP_STRUCT_SeinPoleEffects__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinPoleEffects_DEFINED
struct SeinPoleEffects__Class;
struct SeinPoleEffects {
    struct SeinPoleEffects__Class* klass;
    MonitorData* monitor;
    struct SeinPoleEffects__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinPoleEffects_FWDDECL)
#define IL2CPP_STRUCT_SeinPoleEffects_FWDDECL
#include <Modloader/app/structs/SeinPoleEffects__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinPoleEffects_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPoleEffects_DEFINED) && !defined(IL2CPP_STRUCT_SeinPoleEffects_FWDDECL)
#include <Modloader/app/structs/SeinPoleEffects.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinPoleEffects.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
