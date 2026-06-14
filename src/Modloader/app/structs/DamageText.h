#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageText_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageText_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageText_DEFINED)
#include <Modloader/app/structs/DamageText__Fields.h>
#if defined(IL2CPP_STRUCT_DamageText__Fields_DEFINED)
#define IL2CPP_STRUCT_DamageText_DEFINED
struct DamageText__Class;
struct DamageText {
    struct DamageText__Class* klass;
    MonitorData* monitor;
    struct DamageText__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageText_FWDDECL)
#define IL2CPP_STRUCT_DamageText_FWDDECL
#include <Modloader/app/structs/DamageText__Class.h>
#endif
#undef IL2CPP_STRUCT_DamageText_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageText_DEFINED) && !defined(IL2CPP_STRUCT_DamageText_FWDDECL)
#include <Modloader/app/structs/DamageText.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageText.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
