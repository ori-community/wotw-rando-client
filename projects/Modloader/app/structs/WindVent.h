#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WindVent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WindVent_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindVent_DEFINED)
#include <Modloader/app/structs/WindVent__Fields.h>
#if defined(IL2CPP_STRUCT_WindVent__Fields_DEFINED)
#define IL2CPP_STRUCT_WindVent_DEFINED
struct WindVent__Class;
struct WindVent {
    struct WindVent__Class* klass;
    MonitorData* monitor;
    struct WindVent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WindVent_FWDDECL)
#define IL2CPP_STRUCT_WindVent_FWDDECL
#include <Modloader/app/structs/WindVent__Class.h>
#endif
#undef IL2CPP_STRUCT_WindVent_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindVent_DEFINED) && !defined(IL2CPP_STRUCT_WindVent_FWDDECL)
#include <Modloader/app/structs/WindVent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WindVent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
