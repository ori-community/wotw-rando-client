#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Cloud__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Cloud__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Cloud__Fields_DEFINED)
#define IL2CPP_STRUCT_Cloud__Fields_DEFINED
struct String;
struct __declspec(align(8)) Cloud__Fields {
    struct String* _fullEnvName_k__BackingField;
    struct String* _location_k__BackingField;
    struct String* _environment_k__BackingField;
    struct String* _deploymentUnit_k__BackingField;
    struct String* _name_k__BackingField;
    struct String* _roleInstance_k__BackingField;
    struct String* _role_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_Cloud__Fields_FWDDECL)
#define IL2CPP_STRUCT_Cloud__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Cloud__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Cloud__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Cloud__Fields_FWDDECL)
#include <Modloader/app/structs/Cloud__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Cloud__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
