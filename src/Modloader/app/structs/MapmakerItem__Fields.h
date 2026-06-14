#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MapmakerItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MapmakerItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MapmakerItem__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_MapmakerItem__Fields_DEFINED
struct MessageProvider;
struct Texture2D;
struct SerializedByteUberState;
struct MapmakerItem__Fields {
    struct ScriptableObject__Fields _;
    struct MessageProvider* Name;
    struct MessageProvider* Description;
    struct Texture2D* Icon;
    struct SerializedByteUberState* UberState;
    int32_t Cost;
    int32_t MaxLevel;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MapmakerItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_MapmakerItem__Fields_FWDDECL
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/SerializedByteUberState.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_MapmakerItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MapmakerItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MapmakerItem__Fields_FWDDECL)
#include <Modloader/app/structs/MapmakerItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MapmakerItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
