#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WWW__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WWW__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WWW__Fields_DEFINED)
#define IL2CPP_STRUCT_WWW__Fields_DEFINED
struct UnityWebRequest;
struct AssetBundle;
struct __declspec(align(8)) WWW__Fields {
    struct UnityWebRequest* _uwr;
    struct AssetBundle* _assetBundle;
};
#endif
#if !defined(IL2CPP_STRUCT_WWW__Fields_FWDDECL)
#define IL2CPP_STRUCT_WWW__Fields_FWDDECL
#include <Modloader/app/structs/AssetBundle.h>
#include <Modloader/app/structs/UnityWebRequest.h>
#endif
#undef IL2CPP_STRUCT_WWW__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WWW__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WWW__Fields_FWDDECL)
#include <Modloader/app/structs/WWW__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WWW__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
