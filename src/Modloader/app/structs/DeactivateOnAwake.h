#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeactivateOnAwake_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeactivateOnAwake_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeactivateOnAwake_DEFINED)
#include <Modloader/app/structs/DeactivateOnAwake__Fields.h>
#if defined(IL2CPP_STRUCT_DeactivateOnAwake__Fields_DEFINED)
#define IL2CPP_STRUCT_DeactivateOnAwake_DEFINED
struct DeactivateOnAwake__Class;
struct DeactivateOnAwake {
    struct DeactivateOnAwake__Class* klass;
    MonitorData* monitor;
    struct DeactivateOnAwake__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeactivateOnAwake_FWDDECL)
#define IL2CPP_STRUCT_DeactivateOnAwake_FWDDECL
#include <Modloader/app/structs/DeactivateOnAwake__Class.h>
#endif
#undef IL2CPP_STRUCT_DeactivateOnAwake_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeactivateOnAwake_DEFINED) && !defined(IL2CPP_STRUCT_DeactivateOnAwake_FWDDECL)
#include <Modloader/app/structs/DeactivateOnAwake.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeactivateOnAwake.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
