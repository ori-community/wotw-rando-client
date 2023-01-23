#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Cheat_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Cheat_INITIALIZING
#if !defined(IL2CPP_STRUCT_Cheat_DEFINED)
#include <Modloader/app/structs/Cheat__Fields.h>
#if defined(IL2CPP_STRUCT_Cheat__Fields_DEFINED)
#define IL2CPP_STRUCT_Cheat_DEFINED
struct Cheat__Class;
struct Cheat {
    struct Cheat__Class* klass;
    MonitorData* monitor;
    struct Cheat__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Cheat_FWDDECL)
#define IL2CPP_STRUCT_Cheat_FWDDECL
#include <Modloader/app/structs/Cheat__Class.h>
#endif
#undef IL2CPP_STRUCT_Cheat_INITIALIZING
#if !defined(IL2CPP_STRUCT_Cheat_DEFINED) && !defined(IL2CPP_STRUCT_Cheat_FWDDECL)
#include <Modloader/app/structs/Cheat.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Cheat.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
