#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Behaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Behaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_Behaviour_DEFINED)
#include <Modloader/app/structs/Behaviour__Fields.h>
#if defined(IL2CPP_STRUCT_Behaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_Behaviour_DEFINED
struct Behaviour__Class;
struct Behaviour {
    struct Behaviour__Class* klass;
    MonitorData* monitor;
    struct Behaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Behaviour_FWDDECL)
#define IL2CPP_STRUCT_Behaviour_FWDDECL
#include <Modloader/app/structs/Behaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_Behaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_Behaviour_DEFINED) && !defined(IL2CPP_STRUCT_Behaviour_FWDDECL)
#include <Modloader/app/structs/Behaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Behaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
