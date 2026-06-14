#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Reaction__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Reaction__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Reaction__Boxed_DEFINED)
#include <Modloader/app/structs/Reaction.h>
#if defined(IL2CPP_STRUCT_Reaction_DEFINED)
#define IL2CPP_STRUCT_Reaction__Boxed_DEFINED
struct Reaction__Class;
struct Reaction__Boxed {
    struct Reaction__Class* klass;
    MonitorData* monitor;
    struct Reaction fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Reaction__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Reaction__Boxed_FWDDECL
#include <Modloader/app/structs/Reaction__Class.h>
#endif
#undef IL2CPP_STRUCT_Reaction__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Reaction__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Reaction__Boxed_FWDDECL)
#include <Modloader/app/structs/Reaction__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Reaction__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
