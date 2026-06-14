#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocationChanger__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocationChanger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocationChanger__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_LocationChanger__Fields_DEFINED
struct String;
struct Transform;
struct LocationChanger__Fields {
    struct MonoBehaviour__Fields _;
    struct String* Target;
    struct String* Scene;
    bool UseFade;
    bool UsePostionZ;
    bool MaintainOffsetOfPlayer;
    struct Transform* m_target;
    struct Vector3 Offset;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocationChanger__Fields_FWDDECL)
#define IL2CPP_STRUCT_LocationChanger__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_LocationChanger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocationChanger__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LocationChanger__Fields_FWDDECL)
#include <Modloader/app/structs/LocationChanger__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocationChanger__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
