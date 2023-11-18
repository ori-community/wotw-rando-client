#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonApplication__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonApplication__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonApplication__StaticFields_DEFINED)
#include <Modloader/app/structs/ApplicationState__Enum.h>
#if defined(IL2CPP_STRUCT_ApplicationState__Enum_DEFINED)
#define IL2CPP_STRUCT_MoonApplication__StaticFields_DEFINED
struct MoonApplication__StaticFields {
    ApplicationState__Enum State;

    bool EditorControlled;
    bool m_simulatingBuildingPlayer;
    bool IsPlaying;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonApplication__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MoonApplication__StaticFields_FWDDECL
#endif
#undef IL2CPP_STRUCT_MoonApplication__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonApplication__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MoonApplication__StaticFields_FWDDECL)
#include <Modloader/app/structs/MoonApplication__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonApplication__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
