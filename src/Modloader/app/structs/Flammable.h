#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Flammable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Flammable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Flammable_DEFINED)
#include <Modloader/app/structs/Flammable__Fields.h>
#if defined(IL2CPP_STRUCT_Flammable__Fields_DEFINED)
#define IL2CPP_STRUCT_Flammable_DEFINED
struct Flammable__Class;
struct Flammable {
    struct Flammable__Class* klass;
    MonitorData* monitor;
    struct Flammable__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Flammable_FWDDECL)
#define IL2CPP_STRUCT_Flammable_FWDDECL
#include <Modloader/app/structs/Flammable__Class.h>
#endif
#undef IL2CPP_STRUCT_Flammable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Flammable_DEFINED) && !defined(IL2CPP_STRUCT_Flammable_FWDDECL)
#include <Modloader/app/structs/Flammable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Flammable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
