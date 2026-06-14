#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageResult__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageResult__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageResult__Boxed_DEFINED)
#include <Modloader/app/structs/DamageResult.h>
#if defined(IL2CPP_STRUCT_DamageResult_DEFINED)
#define IL2CPP_STRUCT_DamageResult__Boxed_DEFINED
struct DamageResult__Class;
struct DamageResult__Boxed {
    struct DamageResult__Class* klass;
    MonitorData* monitor;
    struct DamageResult fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageResult__Boxed_FWDDECL)
#define IL2CPP_STRUCT_DamageResult__Boxed_FWDDECL
#include <Modloader/app/structs/DamageResult__Class.h>
#endif
#undef IL2CPP_STRUCT_DamageResult__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageResult__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_DamageResult__Boxed_FWDDECL)
#include <Modloader/app/structs/DamageResult__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageResult__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
