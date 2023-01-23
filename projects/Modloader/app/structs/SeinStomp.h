#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinStomp_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinStomp_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinStomp_DEFINED)
#include <Modloader/app/structs/SeinStomp__Fields.h>
#if defined(IL2CPP_STRUCT_SeinStomp__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinStomp_DEFINED
struct SeinStomp__Class;
struct SeinStomp {
    struct SeinStomp__Class* klass;
    MonitorData* monitor;
    struct SeinStomp__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinStomp_FWDDECL)
#define IL2CPP_STRUCT_SeinStomp_FWDDECL
#include <Modloader/app/structs/SeinStomp__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinStomp_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinStomp_DEFINED) && !defined(IL2CPP_STRUCT_SeinStomp_FWDDECL)
#include <Modloader/app/structs/SeinStomp.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinStomp.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
