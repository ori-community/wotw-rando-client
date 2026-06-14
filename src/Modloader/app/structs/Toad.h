#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Toad_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Toad_INITIALIZING
#if !defined(IL2CPP_STRUCT_Toad_DEFINED)
#include <Modloader/app/structs/Toad__Fields.h>
#if defined(IL2CPP_STRUCT_Toad__Fields_DEFINED)
#define IL2CPP_STRUCT_Toad_DEFINED
struct Toad__Class;
struct Toad {
    struct Toad__Class* klass;
    MonitorData* monitor;
    struct Toad__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Toad_FWDDECL)
#define IL2CPP_STRUCT_Toad_FWDDECL
#include <Modloader/app/structs/Toad__Class.h>
#endif
#undef IL2CPP_STRUCT_Toad_INITIALIZING
#if !defined(IL2CPP_STRUCT_Toad_DEFINED) && !defined(IL2CPP_STRUCT_Toad_FWDDECL)
#include <Modloader/app/structs/Toad.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Toad.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
