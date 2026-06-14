#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseNPC_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseNPC_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseNPC_DEFINED)
#include <Modloader/app/structs/BaseNPC__Fields.h>
#if defined(IL2CPP_STRUCT_BaseNPC__Fields_DEFINED)
#define IL2CPP_STRUCT_BaseNPC_DEFINED
struct BaseNPC__Class;
struct BaseNPC {
    struct BaseNPC__Class* klass;
    MonitorData* monitor;
    struct BaseNPC__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaseNPC_FWDDECL)
#define IL2CPP_STRUCT_BaseNPC_FWDDECL
#include <Modloader/app/structs/BaseNPC__Class.h>
#endif
#undef IL2CPP_STRUCT_BaseNPC_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseNPC_DEFINED) && !defined(IL2CPP_STRUCT_BaseNPC_FWDDECL)
#include <Modloader/app/structs/BaseNPC.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseNPC.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
