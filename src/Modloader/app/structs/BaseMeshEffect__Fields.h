#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseMeshEffect__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseMeshEffect__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseMeshEffect__Fields_DEFINED)
#include <Modloader/app/structs/UIBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_UIBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_BaseMeshEffect__Fields_DEFINED
struct Graphic;
struct BaseMeshEffect__Fields {
    struct UIBehaviour__Fields _;
    struct Graphic* m_Graphic;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaseMeshEffect__Fields_FWDDECL)
#define IL2CPP_STRUCT_BaseMeshEffect__Fields_FWDDECL
#include <Modloader/app/structs/Graphic.h>
#endif
#undef IL2CPP_STRUCT_BaseMeshEffect__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseMeshEffect__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BaseMeshEffect__Fields_FWDDECL)
#include <Modloader/app/structs/BaseMeshEffect__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseMeshEffect__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
