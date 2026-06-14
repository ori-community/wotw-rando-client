#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitForSeconds_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitForSeconds_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForSeconds_DEFINED)
#include <Modloader/app/structs/WaitForSeconds__Fields.h>
#if defined(IL2CPP_STRUCT_WaitForSeconds__Fields_DEFINED)
#define IL2CPP_STRUCT_WaitForSeconds_DEFINED
struct WaitForSeconds__Class;
struct WaitForSeconds {
    struct WaitForSeconds__Class* klass;
    MonitorData* monitor;
    struct WaitForSeconds__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaitForSeconds_FWDDECL)
#define IL2CPP_STRUCT_WaitForSeconds_FWDDECL
#include <Modloader/app/structs/WaitForSeconds__Class.h>
#endif
#undef IL2CPP_STRUCT_WaitForSeconds_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForSeconds_DEFINED) && !defined(IL2CPP_STRUCT_WaitForSeconds_FWDDECL)
#include <Modloader/app/structs/WaitForSeconds.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitForSeconds.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
