#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KeyMappings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KeyMappings_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyMappings_DEFINED)
#define IL2CPP_STRUCT_KeyMappings_DEFINED
struct KeyMappings__Class;
struct KeyMappings {
    struct KeyMappings__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_KeyMappings_FWDDECL)
#define IL2CPP_STRUCT_KeyMappings_FWDDECL
#include <Modloader/app/structs/KeyMappings__Class.h>
#endif
#undef IL2CPP_STRUCT_KeyMappings_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyMappings_DEFINED) && !defined(IL2CPP_STRUCT_KeyMappings_FWDDECL)
#include <Modloader/app/structs/KeyMappings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KeyMappings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
