#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FallOverride_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FallOverride_INITIALIZING
#if !defined(IL2CPP_STRUCT_FallOverride_DEFINED)
#include <Modloader/app/structs/FallOverride__Fields.h>
#if defined(IL2CPP_STRUCT_FallOverride__Fields_DEFINED)
#define IL2CPP_STRUCT_FallOverride_DEFINED
struct FallOverride__Class;
struct FallOverride {
    struct FallOverride__Class* klass;
    MonitorData* monitor;
    struct FallOverride__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FallOverride_FWDDECL)
#define IL2CPP_STRUCT_FallOverride_FWDDECL
#include <Modloader/app/structs/FallOverride__Class.h>
#endif
#undef IL2CPP_STRUCT_FallOverride_INITIALIZING
#if !defined(IL2CPP_STRUCT_FallOverride_DEFINED) && !defined(IL2CPP_STRUCT_FallOverride_FWDDECL)
#include <Modloader/app/structs/FallOverride.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FallOverride.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
