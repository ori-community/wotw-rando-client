#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Avatar_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Avatar_INITIALIZING
#if !defined(IL2CPP_STRUCT_Avatar_DEFINED)
#include <Modloader/app/structs/Avatar__Fields.h>
#if defined(IL2CPP_STRUCT_Avatar__Fields_DEFINED)
#define IL2CPP_STRUCT_Avatar_DEFINED
struct Avatar__Class;
struct Avatar {
    struct Avatar__Class* klass;
    MonitorData* monitor;
    struct Avatar__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Avatar_FWDDECL)
#define IL2CPP_STRUCT_Avatar_FWDDECL
#include <Modloader/app/structs/Avatar__Class.h>
#endif
#undef IL2CPP_STRUCT_Avatar_INITIALIZING
#if !defined(IL2CPP_STRUCT_Avatar_DEFINED) && !defined(IL2CPP_STRUCT_Avatar_FWDDECL)
#include <Modloader/app/structs/Avatar.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Avatar.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
