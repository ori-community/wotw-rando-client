#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GridObject__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GridObject__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GridObject__Fields_DEFINED)
#include <Modloader/app/structs/GridObject_Mode__Enum.h>
#if defined(IL2CPP_STRUCT_GridObject_Mode__Enum_DEFINED)
#define IL2CPP_STRUCT_GridObject__Fields_DEFINED
struct String;
struct GameObject;
struct Texture2D;
struct __declspec(align(8)) GridObject__Fields {
    struct String* Name;
    struct GameObject* GameObject;
    struct Texture2D* Icon;
    struct String* GroupPath;
    bool Select;
    GridObject_Mode__Enum SizeMode;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GridObject__Fields_FWDDECL)
#define IL2CPP_STRUCT_GridObject__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_GridObject__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GridObject__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GridObject__Fields_FWDDECL)
#include <Modloader/app/structs/GridObject__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GridObject__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
