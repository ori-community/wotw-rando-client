#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartographerNPC_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartographerNPC_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartographerNPC_DEFINED)
#include <Modloader/app/structs/CartographerNPC__Fields.h>
#if defined(IL2CPP_STRUCT_CartographerNPC__Fields_DEFINED)
#define IL2CPP_STRUCT_CartographerNPC_DEFINED
struct CartographerNPC__Class;
struct CartographerNPC {
    struct CartographerNPC__Class* klass;
    MonitorData* monitor;
    struct CartographerNPC__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartographerNPC_FWDDECL)
#define IL2CPP_STRUCT_CartographerNPC_FWDDECL
#include <Modloader/app/structs/CartographerNPC__Class.h>
#endif
#undef IL2CPP_STRUCT_CartographerNPC_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartographerNPC_DEFINED) && !defined(IL2CPP_STRUCT_CartographerNPC_FWDDECL)
#include <Modloader/app/structs/CartographerNPC.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartographerNPC.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
