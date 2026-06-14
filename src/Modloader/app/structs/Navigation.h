#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Navigation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Navigation_INITIALIZING
#if !defined(IL2CPP_STRUCT_Navigation_DEFINED)
#include <Modloader/app/structs/Navigation_Mode__Enum.h>
#if defined(IL2CPP_STRUCT_Navigation_Mode__Enum_DEFINED)
#define IL2CPP_STRUCT_Navigation_DEFINED
struct Selectable;
struct Navigation {
    Navigation_Mode__Enum m_Mode;

    struct Selectable* m_SelectOnUp;
    struct Selectable* m_SelectOnDown;
    struct Selectable* m_SelectOnLeft;
    struct Selectable* m_SelectOnRight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Navigation_FWDDECL)
#define IL2CPP_STRUCT_Navigation_FWDDECL
#include <Modloader/app/structs/Selectable.h>
#endif
#undef IL2CPP_STRUCT_Navigation_INITIALIZING
#if !defined(IL2CPP_STRUCT_Navigation_DEFINED) && !defined(IL2CPP_STRUCT_Navigation_FWDDECL)
#include <Modloader/app/structs/Navigation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Navigation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
