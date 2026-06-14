#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDamageResolver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDamageResolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDamageResolver_DEFINED)
#define IL2CPP_STRUCT_IDamageResolver_DEFINED
struct IDamageResolver__Class;
struct IDamageResolver {
    struct IDamageResolver__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDamageResolver_FWDDECL)
#define IL2CPP_STRUCT_IDamageResolver_FWDDECL
#include <Modloader/app/structs/IDamageResolver__Class.h>
#endif
#undef IL2CPP_STRUCT_IDamageResolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDamageResolver_DEFINED) && !defined(IL2CPP_STRUCT_IDamageResolver_FWDDECL)
#include <Modloader/app/structs/IDamageResolver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDamageResolver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
