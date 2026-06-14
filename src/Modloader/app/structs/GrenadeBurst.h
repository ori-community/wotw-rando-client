#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GrenadeBurst_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GrenadeBurst_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrenadeBurst_DEFINED)
#include <Modloader/app/structs/GrenadeBurst__Fields.h>
#if defined(IL2CPP_STRUCT_GrenadeBurst__Fields_DEFINED)
#define IL2CPP_STRUCT_GrenadeBurst_DEFINED
struct GrenadeBurst__Class;
struct GrenadeBurst {
    struct GrenadeBurst__Class* klass;
    MonitorData* monitor;
    struct GrenadeBurst__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GrenadeBurst_FWDDECL)
#define IL2CPP_STRUCT_GrenadeBurst_FWDDECL
#include <Modloader/app/structs/GrenadeBurst__Class.h>
#endif
#undef IL2CPP_STRUCT_GrenadeBurst_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrenadeBurst_DEFINED) && !defined(IL2CPP_STRUCT_GrenadeBurst_FWDDECL)
#include <Modloader/app/structs/GrenadeBurst.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GrenadeBurst.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
