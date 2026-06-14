#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ComboSystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ComboSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComboSystem_DEFINED)
#include <Modloader/app/structs/ComboSystem__Fields.h>
#if defined(IL2CPP_STRUCT_ComboSystem__Fields_DEFINED)
#define IL2CPP_STRUCT_ComboSystem_DEFINED
struct ComboSystem__Class;
struct ComboSystem {
    struct ComboSystem__Class* klass;
    MonitorData* monitor;
    struct ComboSystem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ComboSystem_FWDDECL)
#define IL2CPP_STRUCT_ComboSystem_FWDDECL
#include <Modloader/app/structs/ComboSystem__Class.h>
#endif
#undef IL2CPP_STRUCT_ComboSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComboSystem_DEFINED) && !defined(IL2CPP_STRUCT_ComboSystem_FWDDECL)
#include <Modloader/app/structs/ComboSystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ComboSystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
