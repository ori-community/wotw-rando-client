#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkeetoStateSelector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkeetoStateSelector_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoStateSelector_DEFINED)
#include <Modloader/app/structs/SkeetoStateSelector__Fields.h>
#if defined(IL2CPP_STRUCT_SkeetoStateSelector__Fields_DEFINED)
#define IL2CPP_STRUCT_SkeetoStateSelector_DEFINED
struct SkeetoStateSelector__Class;
struct SkeetoStateSelector {
    struct SkeetoStateSelector__Class* klass;
    MonitorData* monitor;
    struct SkeetoStateSelector__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkeetoStateSelector_FWDDECL)
#define IL2CPP_STRUCT_SkeetoStateSelector_FWDDECL
#include <Modloader/app/structs/SkeetoStateSelector__Class.h>
#endif
#undef IL2CPP_STRUCT_SkeetoStateSelector_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoStateSelector_DEFINED) && !defined(IL2CPP_STRUCT_SkeetoStateSelector_FWDDECL)
#include <Modloader/app/structs/SkeetoStateSelector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkeetoStateSelector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
