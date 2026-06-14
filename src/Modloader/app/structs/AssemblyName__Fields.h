#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssemblyName__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssemblyName__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyName__Fields_DEFINED)
#include <Modloader/app/structs/AssemblyContentType__Enum.h>
#include <Modloader/app/structs/AssemblyHashAlgorithm__Enum.h>
#include <Modloader/app/structs/AssemblyNameFlags__Enum.h>
#include <Modloader/app/structs/AssemblyVersionCompatibility__Enum.h>
#include <Modloader/app/structs/ProcessorArchitecture__Enum.h>
#if defined(IL2CPP_STRUCT_AssemblyNameFlags__Enum_DEFINED) && defined(IL2CPP_STRUCT_AssemblyHashAlgorithm__Enum_DEFINED) && defined(IL2CPP_STRUCT_AssemblyVersionCompatibility__Enum_DEFINED) && defined(IL2CPP_STRUCT_ProcessorArchitecture__Enum_DEFINED) && defined(IL2CPP_STRUCT_AssemblyContentType__Enum_DEFINED)
#define IL2CPP_STRUCT_AssemblyName__Fields_DEFINED
struct String;
struct CultureInfo;
struct StrongNameKeyPair;
struct Byte__Array;
struct Version;
struct __declspec(align(8)) AssemblyName__Fields {
    struct String* name;
    struct String* codebase;
    int32_t major;
    int32_t minor;
    int32_t build;
    int32_t revision;
    struct CultureInfo* cultureinfo;
    AssemblyNameFlags__Enum flags;

    AssemblyHashAlgorithm__Enum hashalg;

    struct StrongNameKeyPair* keypair;
    struct Byte__Array* publicKey;
    struct Byte__Array* keyToken;
    AssemblyVersionCompatibility__Enum versioncompat;

    struct Version* version;
    ProcessorArchitecture__Enum processor_architecture;

    AssemblyContentType__Enum contentType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AssemblyName__Fields_FWDDECL)
#define IL2CPP_STRUCT_AssemblyName__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StrongNameKeyPair.h>
#include <Modloader/app/structs/Version.h>
#endif
#undef IL2CPP_STRUCT_AssemblyName__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyName__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AssemblyName__Fields_FWDDECL)
#include <Modloader/app/structs/AssemblyName__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssemblyName__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
