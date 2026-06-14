#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Ambience_Processing_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Ambience_Processing_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ambience_Processing_DEFINED)
#define IL2CPP_STRUCT_Ambience_Processing_DEFINED
struct Ambience_Processing__Class;
struct Ambience_Processing {
    struct Ambience_Processing__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Ambience_Processing_FWDDECL)
#define IL2CPP_STRUCT_Ambience_Processing_FWDDECL
#include <Modloader/app/structs/Ambience_Processing__Class.h>
#endif
#undef IL2CPP_STRUCT_Ambience_Processing_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ambience_Processing_DEFINED) && !defined(IL2CPP_STRUCT_Ambience_Processing_FWDDECL)
#include <Modloader/app/structs/Ambience_Processing.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Ambience_Processing.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
