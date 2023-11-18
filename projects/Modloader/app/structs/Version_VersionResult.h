#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Version_VersionResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Version_VersionResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_Version_VersionResult_DEFINED)
#include <Modloader/app/structs/Version_ParseFailureKind__Enum.h>
#if defined(IL2CPP_STRUCT_Version_ParseFailureKind__Enum_DEFINED)
#define IL2CPP_STRUCT_Version_VersionResult_DEFINED
struct Version;
struct String;
struct Version_VersionResult {
    struct Version* m_parsedVersion;
    Version_ParseFailureKind__Enum m_failure;

    struct String* m_exceptionArgument;
    struct String* m_argumentName;
    bool m_canThrow;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Version_VersionResult_FWDDECL)
#define IL2CPP_STRUCT_Version_VersionResult_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Version.h>
#endif
#undef IL2CPP_STRUCT_Version_VersionResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_Version_VersionResult_DEFINED) && !defined(IL2CPP_STRUCT_Version_VersionResult_FWDDECL)
#include <Modloader/app/structs/Version_VersionResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Version_VersionResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
