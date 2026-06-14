#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConfigurationSectionGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConfigurationSectionGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfigurationSectionGroup_DEFINED)
#define IL2CPP_STRUCT_ConfigurationSectionGroup_DEFINED
struct ConfigurationSectionGroup__Class;
struct ConfigurationSectionGroup {
    struct ConfigurationSectionGroup__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ConfigurationSectionGroup_FWDDECL)
#define IL2CPP_STRUCT_ConfigurationSectionGroup_FWDDECL
#include <Modloader/app/structs/ConfigurationSectionGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_ConfigurationSectionGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfigurationSectionGroup_DEFINED) && !defined(IL2CPP_STRUCT_ConfigurationSectionGroup_FWDDECL)
#include <Modloader/app/structs/ConfigurationSectionGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConfigurationSectionGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
