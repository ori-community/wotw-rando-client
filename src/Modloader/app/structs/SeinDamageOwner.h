#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinDamageOwner_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinDamageOwner_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDamageOwner_DEFINED)
#include <Modloader/app/structs/SeinDamageOwner__Fields.h>
#if defined(IL2CPP_STRUCT_SeinDamageOwner__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinDamageOwner_DEFINED
struct SeinDamageOwner__Class;
struct SeinDamageOwner {
    struct SeinDamageOwner__Class* klass;
    MonitorData* monitor;
    struct SeinDamageOwner__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinDamageOwner_FWDDECL)
#define IL2CPP_STRUCT_SeinDamageOwner_FWDDECL
#include <Modloader/app/structs/SeinDamageOwner__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinDamageOwner_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDamageOwner_DEFINED) && !defined(IL2CPP_STRUCT_SeinDamageOwner_FWDDECL)
#include <Modloader/app/structs/SeinDamageOwner.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinDamageOwner.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
