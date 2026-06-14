#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ResourceManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ResourceManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourceManager__Fields_DEFINED)
#include <Modloader/app/structs/UltimateResourceFallbackLocation__Enum.h>
#if defined(IL2CPP_STRUCT_UltimateResourceFallbackLocation__Enum_DEFINED)
#define IL2CPP_STRUCT_ResourceManager__Fields_DEFINED
struct String;
struct Hashtable;
struct Dictionary_2_System_String_System_Resources_ResourceSet_;
struct Assembly;
struct Type;
struct CultureInfo;
struct ResourceManager_CultureNameResourceSetPair;
struct Version;
struct RuntimeAssembly;
struct IResourceGroveler;
struct __declspec(align(8)) ResourceManager__Fields {
    struct String* BaseNameField;
    struct Hashtable* ResourceSets;
    struct Dictionary_2_System_String_System_Resources_ResourceSet_* _resourceSets;
    struct String* moduleDir;
    struct Assembly* MainAssembly;
    struct Type* _locationInfo;
    struct Type* _userResourceSet;
    struct CultureInfo* _neutralResourcesCulture;
    struct ResourceManager_CultureNameResourceSetPair* _lastUsedResourceCache;
    bool _ignoreCase;
    bool UseManifest;
    bool UseSatelliteAssem;
    UltimateResourceFallbackLocation__Enum _fallbackLoc;

    struct Version* _satelliteContractVersion;
    bool _lookedForSatelliteContractVersion;
    struct Assembly* _callingAssembly;
    struct RuntimeAssembly* m_callingAssembly;
    struct IResourceGroveler* resourceGroveler;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ResourceManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_ResourceManager__Fields_FWDDECL
#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Resources_ResourceSet_.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/IResourceGroveler.h>
#include <Modloader/app/structs/ResourceManager_CultureNameResourceSetPair.h>
#include <Modloader/app/structs/RuntimeAssembly.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Version.h>
#endif
#undef IL2CPP_STRUCT_ResourceManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourceManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ResourceManager__Fields_FWDDECL)
#include <Modloader/app/structs/ResourceManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ResourceManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
