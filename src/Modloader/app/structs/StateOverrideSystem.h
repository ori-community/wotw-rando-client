#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateOverrideSystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateOverrideSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateOverrideSystem_DEFINED)
#include <Modloader/app/structs/StateOverrideSystem__Fields.h>
#if defined(IL2CPP_STRUCT_StateOverrideSystem__Fields_DEFINED)
#define IL2CPP_STRUCT_StateOverrideSystem_DEFINED
struct StateOverrideSystem__Class;
struct StateOverrideSystem {
    struct StateOverrideSystem__Class* klass;
    MonitorData* monitor;
    struct StateOverrideSystem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StateOverrideSystem_FWDDECL)
#define IL2CPP_STRUCT_StateOverrideSystem_FWDDECL
#include <Modloader/app/structs/StateOverrideSystem__Class.h>
#endif
#undef IL2CPP_STRUCT_StateOverrideSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateOverrideSystem_DEFINED) && !defined(IL2CPP_STRUCT_StateOverrideSystem_FWDDECL)
#include <Modloader/app/structs/StateOverrideSystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateOverrideSystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
