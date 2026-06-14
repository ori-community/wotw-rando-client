#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PositionTurbulence__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PositionTurbulence__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionTurbulence__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PositionTurbulence__Fields_DEFINED
struct PositionTurbulence_GenericTurbulence;
struct Transform;
struct PositionTurbulence__Fields {
    struct MonoBehaviour__Fields _;
    struct PositionTurbulence_GenericTurbulence* XTurbulence;
    struct PositionTurbulence_GenericTurbulence* YTurbulence;
    struct PositionTurbulence_GenericTurbulence* ZTurbulence;
    bool EditorPreview;
    struct Transform* m_tranform;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PositionTurbulence__Fields_FWDDECL)
#define IL2CPP_STRUCT_PositionTurbulence__Fields_FWDDECL
#include <Modloader/app/structs/PositionTurbulence_GenericTurbulence.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_PositionTurbulence__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionTurbulence__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PositionTurbulence__Fields_FWDDECL)
#include <Modloader/app/structs/PositionTurbulence__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PositionTurbulence__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
