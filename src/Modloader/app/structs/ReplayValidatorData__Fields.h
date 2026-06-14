#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReplayValidatorData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReplayValidatorData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayValidatorData__Fields_DEFINED)
#include <Modloader/app/structs/RaceContentType__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_RaceContentType__Enum_DEFINED)
#define IL2CPP_STRUCT_ReplayValidatorData__Fields_DEFINED
struct String;
struct Rect__Array;
struct __declspec(align(8)) ReplayValidatorData__Fields {
    struct String* RaceName;
    struct Rect__Array* Waypoints;
    struct Vector3 StartLinePosition;
    struct Vector3 EndPosition;
    RaceContentType__Enum Type;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReplayValidatorData__Fields_FWDDECL)
#define IL2CPP_STRUCT_ReplayValidatorData__Fields_FWDDECL
#include <Modloader/app/structs/Rect__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ReplayValidatorData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayValidatorData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ReplayValidatorData__Fields_FWDDECL)
#include <Modloader/app/structs/ReplayValidatorData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReplayValidatorData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
