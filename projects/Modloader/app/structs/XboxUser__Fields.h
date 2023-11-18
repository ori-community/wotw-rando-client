#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxUser__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxUser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxUser__Fields_DEFINED)
#define IL2CPP_STRUCT_XboxUser__Fields_DEFINED
struct Texture2D;
struct String;
struct __declspec(align(8)) XboxUser__Fields {
    struct Texture2D* _Image_k__BackingField;
    struct String* _GamerTag_k__BackingField;
    struct String* _Uid_k__BackingField;
    int32_t _Id_k__BackingField;
    bool _IsProfileComplete_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_XboxUser__Fields_FWDDECL)
#define IL2CPP_STRUCT_XboxUser__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_XboxUser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxUser__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XboxUser__Fields_FWDDECL)
#include <Modloader/app/structs/XboxUser__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxUser__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
