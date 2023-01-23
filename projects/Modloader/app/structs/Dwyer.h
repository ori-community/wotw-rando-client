#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Dwyer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Dwyer_INITIALIZING
#if !defined(IL2CPP_STRUCT_Dwyer_DEFINED)
#include <Modloader/app/structs/Dwyer__Fields.h>
#if defined(IL2CPP_STRUCT_Dwyer__Fields_DEFINED)
#define IL2CPP_STRUCT_Dwyer_DEFINED
struct Dwyer__Class;
struct Dwyer {
    struct Dwyer__Class* klass;
    MonitorData* monitor;
    struct Dwyer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Dwyer_FWDDECL)
#define IL2CPP_STRUCT_Dwyer_FWDDECL
#include <Modloader/app/structs/Dwyer__Class.h>
#endif
#undef IL2CPP_STRUCT_Dwyer_INITIALIZING
#if !defined(IL2CPP_STRUCT_Dwyer_DEFINED) && !defined(IL2CPP_STRUCT_Dwyer_FWDDECL)
#include <Modloader/app/structs/Dwyer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Dwyer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
