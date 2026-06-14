#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BuilderNPC_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BuilderNPC_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuilderNPC_DEFINED)
#include <Modloader/app/structs/BuilderNPC__Fields.h>
#if defined(IL2CPP_STRUCT_BuilderNPC__Fields_DEFINED)
#define IL2CPP_STRUCT_BuilderNPC_DEFINED
struct BuilderNPC__Class;
struct BuilderNPC {
    struct BuilderNPC__Class* klass;
    MonitorData* monitor;
    struct BuilderNPC__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BuilderNPC_FWDDECL)
#define IL2CPP_STRUCT_BuilderNPC_FWDDECL
#include <Modloader/app/structs/BuilderNPC__Class.h>
#endif
#undef IL2CPP_STRUCT_BuilderNPC_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuilderNPC_DEFINED) && !defined(IL2CPP_STRUCT_BuilderNPC_FWDDECL)
#include <Modloader/app/structs/BuilderNPC.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BuilderNPC.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
