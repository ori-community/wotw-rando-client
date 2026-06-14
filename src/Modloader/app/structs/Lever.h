#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Lever_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Lever_INITIALIZING
#if !defined(IL2CPP_STRUCT_Lever_DEFINED)
#include <Modloader/app/structs/Lever__Fields.h>
#if defined(IL2CPP_STRUCT_Lever__Fields_DEFINED)
#define IL2CPP_STRUCT_Lever_DEFINED
struct Lever__Class;
struct Lever {
    struct Lever__Class* klass;
    MonitorData* monitor;
    struct Lever__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Lever_FWDDECL)
#define IL2CPP_STRUCT_Lever_FWDDECL
#include <Modloader/app/structs/Lever__Class.h>
#endif
#undef IL2CPP_STRUCT_Lever_INITIALIZING
#if !defined(IL2CPP_STRUCT_Lever_DEFINED) && !defined(IL2CPP_STRUCT_Lever_FWDDECL)
#include <Modloader/app/structs/Lever.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Lever.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
