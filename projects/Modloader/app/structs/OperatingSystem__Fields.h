#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OperatingSystem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OperatingSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OperatingSystem__Fields_DEFINED)
#include <Modloader/app/structs/PlatformID__Enum.h>
#if defined(IL2CPP_STRUCT_PlatformID__Enum_DEFINED)
#define IL2CPP_STRUCT_OperatingSystem__Fields_DEFINED
struct Version;
struct String;
struct __declspec(align(8)) OperatingSystem__Fields {
    PlatformID__Enum _platform;

    struct Version* _version;
    struct String* _servicePack;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OperatingSystem__Fields_FWDDECL)
#define IL2CPP_STRUCT_OperatingSystem__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Version.h>
#endif
#undef IL2CPP_STRUCT_OperatingSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OperatingSystem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OperatingSystem__Fields_FWDDECL)
#include <Modloader/app/structs/OperatingSystem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OperatingSystem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
