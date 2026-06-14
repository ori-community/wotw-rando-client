#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GlobalComboDefinition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GlobalComboDefinition_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalComboDefinition_DEFINED)
#include <Modloader/app/structs/GlobalComboDefinition__Fields.h>
#if defined(IL2CPP_STRUCT_GlobalComboDefinition__Fields_DEFINED)
#define IL2CPP_STRUCT_GlobalComboDefinition_DEFINED
struct GlobalComboDefinition__Class;
struct GlobalComboDefinition {
    struct GlobalComboDefinition__Class* klass;
    MonitorData* monitor;
    struct GlobalComboDefinition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GlobalComboDefinition_FWDDECL)
#define IL2CPP_STRUCT_GlobalComboDefinition_FWDDECL
#include <Modloader/app/structs/GlobalComboDefinition__Class.h>
#endif
#undef IL2CPP_STRUCT_GlobalComboDefinition_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalComboDefinition_DEFINED) && !defined(IL2CPP_STRUCT_GlobalComboDefinition_FWDDECL)
#include <Modloader/app/structs/GlobalComboDefinition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GlobalComboDefinition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
