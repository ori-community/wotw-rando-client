#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpaceMongerWidget_SpaceMongerLayout_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpaceMongerWidget_SpaceMongerLayout_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpaceMongerWidget_SpaceMongerLayout_DEFINED)
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_SpaceMongerWidget_SpaceMongerLayout_DEFINED
struct SpaceMongerWidget_SpaceMongerLayout {
    bool IsEnoughSpace;
    struct Rect ViewRect;
    struct Rect RelativeViewRect;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpaceMongerWidget_SpaceMongerLayout_FWDDECL)
#define IL2CPP_STRUCT_SpaceMongerWidget_SpaceMongerLayout_FWDDECL
#endif
#undef IL2CPP_STRUCT_SpaceMongerWidget_SpaceMongerLayout_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpaceMongerWidget_SpaceMongerLayout_DEFINED) && !defined(IL2CPP_STRUCT_SpaceMongerWidget_SpaceMongerLayout_FWDDECL)
#include <Modloader/app/structs/SpaceMongerWidget_SpaceMongerLayout.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpaceMongerWidget_SpaceMongerLayout.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
