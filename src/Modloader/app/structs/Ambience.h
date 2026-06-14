#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Ambience_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Ambience_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ambience_DEFINED)
#define IL2CPP_STRUCT_Ambience_DEFINED
struct Ambience__Class;
struct Ambience {
    struct Ambience__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Ambience_FWDDECL)
#define IL2CPP_STRUCT_Ambience_FWDDECL
#include <Modloader/app/structs/Ambience__Class.h>
#endif
#undef IL2CPP_STRUCT_Ambience_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ambience_DEFINED) && !defined(IL2CPP_STRUCT_Ambience_FWDDECL)
#include <Modloader/app/structs/Ambience.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Ambience.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
