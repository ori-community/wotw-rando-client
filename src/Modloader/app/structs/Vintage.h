#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Vintage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Vintage_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vintage_DEFINED)
#include <Modloader/app/structs/Vintage__Fields.h>
#if defined(IL2CPP_STRUCT_Vintage__Fields_DEFINED)
#define IL2CPP_STRUCT_Vintage_DEFINED
struct Vintage__Class;
struct Vintage {
    struct Vintage__Class* klass;
    MonitorData* monitor;
    struct Vintage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Vintage_FWDDECL)
#define IL2CPP_STRUCT_Vintage_FWDDECL
#include <Modloader/app/structs/Vintage__Class.h>
#endif
#undef IL2CPP_STRUCT_Vintage_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vintage_DEFINED) && !defined(IL2CPP_STRUCT_Vintage_FWDDECL)
#include <Modloader/app/structs/Vintage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Vintage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
