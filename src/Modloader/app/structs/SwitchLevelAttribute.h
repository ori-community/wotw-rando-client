#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwitchLevelAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwitchLevelAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchLevelAttribute_DEFINED)
#include <Modloader/app/structs/SwitchLevelAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_SwitchLevelAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_SwitchLevelAttribute_DEFINED
struct SwitchLevelAttribute__Class;
struct SwitchLevelAttribute {
    struct SwitchLevelAttribute__Class* klass;
    MonitorData* monitor;
    struct SwitchLevelAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwitchLevelAttribute_FWDDECL)
#define IL2CPP_STRUCT_SwitchLevelAttribute_FWDDECL
#include <Modloader/app/structs/SwitchLevelAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_SwitchLevelAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchLevelAttribute_DEFINED) && !defined(IL2CPP_STRUCT_SwitchLevelAttribute_FWDDECL)
#include <Modloader/app/structs/SwitchLevelAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwitchLevelAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
