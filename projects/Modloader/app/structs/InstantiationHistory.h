#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstantiationHistory_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstantiationHistory_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiationHistory_DEFINED)
#include <Modloader/app/structs/InstantiationHistory__Fields.h>
#if defined(IL2CPP_STRUCT_InstantiationHistory__Fields_DEFINED)
#define IL2CPP_STRUCT_InstantiationHistory_DEFINED
struct InstantiationHistory__Class;
struct InstantiationHistory {
    struct InstantiationHistory__Class* klass;
    MonitorData* monitor;
    struct InstantiationHistory__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InstantiationHistory_FWDDECL)
#define IL2CPP_STRUCT_InstantiationHistory_FWDDECL
#include <Modloader/app/structs/InstantiationHistory__Class.h>
#endif
#undef IL2CPP_STRUCT_InstantiationHistory_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiationHistory_DEFINED) && !defined(IL2CPP_STRUCT_InstantiationHistory_FWDDECL)
#include <Modloader/app/structs/InstantiationHistory.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstantiationHistory.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
