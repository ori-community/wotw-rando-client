#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnvironmentLight__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnvironmentLight__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnvironmentLight__StaticFields_DEFINED)
#define IL2CPP_STRUCT_EnvironmentLight__StaticFields_DEFINED
struct Int32__Array_1;
struct EnvironmentLight__StaticFields {
    struct Int32__Array_1* LightNames;
};
#endif
#if !defined(IL2CPP_STRUCT_EnvironmentLight__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_EnvironmentLight__StaticFields_FWDDECL
#include <Modloader/app/structs/Int32__Array_1.h>
#endif
#undef IL2CPP_STRUCT_EnvironmentLight__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnvironmentLight__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_EnvironmentLight__StaticFields_FWDDECL)
#include <Modloader/app/structs/EnvironmentLight__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnvironmentLight__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
