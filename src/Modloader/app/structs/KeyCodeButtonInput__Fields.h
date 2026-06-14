#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KeyCodeButtonInput__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KeyCodeButtonInput__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyCodeButtonInput__Fields_DEFINED)
#include <Modloader/app/structs/CachedButtonInput__Fields.h>
#include <Modloader/app/structs/KeyCode__Enum.h>
#if defined(IL2CPP_STRUCT_CachedButtonInput__Fields_DEFINED) && defined(IL2CPP_STRUCT_KeyCode__Enum_DEFINED)
#define IL2CPP_STRUCT_KeyCodeButtonInput__Fields_DEFINED
struct KeyCodeButtonInput__Fields {
    struct CachedButtonInput__Fields _;
    KeyCode__Enum m_keyCode;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KeyCodeButtonInput__Fields_FWDDECL)
#define IL2CPP_STRUCT_KeyCodeButtonInput__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_KeyCodeButtonInput__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyCodeButtonInput__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KeyCodeButtonInput__Fields_FWDDECL)
#include <Modloader/app/structs/KeyCodeButtonInput__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KeyCodeButtonInput__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
