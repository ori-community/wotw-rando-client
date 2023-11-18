#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightCanvas_SaveMetaData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightCanvas_SaveMetaData_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCanvas_SaveMetaData_DEFINED)
#define IL2CPP_STRUCT_LightCanvas_SaveMetaData_DEFINED
struct String;
struct Texture2D;
struct LightCanvas_SaveMetaData {
    struct String* AssetPath;
    struct Texture2D* TextureToSave;
    int32_t StateGuid;
};
#endif
#if !defined(IL2CPP_STRUCT_LightCanvas_SaveMetaData_FWDDECL)
#define IL2CPP_STRUCT_LightCanvas_SaveMetaData_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_LightCanvas_SaveMetaData_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCanvas_SaveMetaData_DEFINED) && !defined(IL2CPP_STRUCT_LightCanvas_SaveMetaData_FWDDECL)
#include <Modloader/app/structs/LightCanvas_SaveMetaData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightCanvas_SaveMetaData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
