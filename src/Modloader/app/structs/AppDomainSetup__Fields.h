#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AppDomainSetup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AppDomainSetup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AppDomainSetup__Fields_DEFINED)
#define IL2CPP_STRUCT_AppDomainSetup__Fields_DEFINED
struct String;
struct Object;
struct String__Array;
struct Byte__Array;
struct __declspec(align(8)) AppDomainSetup__Fields {
    struct String* application_base;
    struct String* application_name;
    struct String* cache_path;
    struct String* configuration_file;
    struct String* dynamic_base;
    struct String* license_file;
    struct String* private_bin_path;
    struct String* private_bin_path_probe;
    struct String* shadow_copy_directories;
    struct String* shadow_copy_files;
    bool publisher_policy;
    bool path_changed;
    int32_t loader_optimization;
    bool disallow_binding_redirects;
    bool disallow_code_downloads;
    struct Object* _activationArguments;
    struct Object* domain_initializer;
    struct Object* application_trust;
    struct String__Array* domain_initializer_args;
    bool disallow_appbase_probe;
    struct Byte__Array* configuration_bytes;
    struct Byte__Array* serialized_non_primitives;
    struct String* _TargetFrameworkName_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_AppDomainSetup__Fields_FWDDECL)
#define IL2CPP_STRUCT_AppDomainSetup__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_AppDomainSetup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AppDomainSetup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AppDomainSetup__Fields_FWDDECL)
#include <Modloader/app/structs/AppDomainSetup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AppDomainSetup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
