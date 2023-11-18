#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Door_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Door_INITIALIZING
#if !defined(IL2CPP_STRUCT_Door_DEFINED)
#include <Modloader/app/structs/Door__Fields.h>
#if defined(IL2CPP_STRUCT_Door__Fields_DEFINED)
#define IL2CPP_STRUCT_Door_DEFINED
struct Door__Class;
struct Door {
    struct Door__Class* klass;
    MonitorData* monitor;
    struct Door__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Door_FWDDECL)
#define IL2CPP_STRUCT_Door_FWDDECL
#include <Modloader/app/structs/Door__Class.h>
#endif
#undef IL2CPP_STRUCT_Door_INITIALIZING
#if !defined(IL2CPP_STRUCT_Door_DEFINED) && !defined(IL2CPP_STRUCT_Door_FWDDECL)
#include <Modloader/app/structs/Door.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Door.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
