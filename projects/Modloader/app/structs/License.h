#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_License_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_License_INITIALIZING
#if !defined(IL2CPP_STRUCT_License_DEFINED)
#define IL2CPP_STRUCT_License_DEFINED
struct License__Class;
struct License {
    struct License__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_License_FWDDECL)
#define IL2CPP_STRUCT_License_FWDDECL
#include <Modloader/app/structs/License__Class.h>
#endif
#undef IL2CPP_STRUCT_License_INITIALIZING
#if !defined(IL2CPP_STRUCT_License_DEFINED) && !defined(IL2CPP_STRUCT_License_FWDDECL)
#include <Modloader/app/structs/License.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/License.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
