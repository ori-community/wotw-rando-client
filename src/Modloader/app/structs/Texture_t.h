#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Texture_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Texture_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_Texture_t_DEFINED)
#include <Modloader/app/structs/EColorSpace__Enum.h>
#include <Modloader/app/structs/ETextureType__Enum.h>
#if defined(IL2CPP_STRUCT_ETextureType__Enum_DEFINED) && defined(IL2CPP_STRUCT_EColorSpace__Enum_DEFINED)
#define IL2CPP_STRUCT_Texture_t_DEFINED
struct Texture_t {
    void* handle;
    ETextureType__Enum eType;

    EColorSpace__Enum eColorSpace;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Texture_t_FWDDECL)
#define IL2CPP_STRUCT_Texture_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_Texture_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_Texture_t_DEFINED) && !defined(IL2CPP_STRUCT_Texture_t_FWDDECL)
#include <Modloader/app/structs/Texture_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Texture_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
