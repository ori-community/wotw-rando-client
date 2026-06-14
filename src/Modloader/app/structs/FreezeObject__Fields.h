#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FreezeObject__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FreezeObject__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FreezeObject__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Space__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Space__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_FreezeObject__Fields_DEFINED
struct FreezeObject__Fields {
    struct MonoBehaviour__Fields _;
    Space__Enum Space;

    bool FreezePosition;
    bool FreezeRotation;
    Space__Enum m_oldSpace;

    bool m_oldFreezePosition;
    bool m_oldFreezeRotation;
    struct Vector3 m_position;
    struct Quaternion m_rotation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FreezeObject__Fields_FWDDECL)
#define IL2CPP_STRUCT_FreezeObject__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_FreezeObject__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FreezeObject__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FreezeObject__Fields_FWDDECL)
#include <Modloader/app/structs/FreezeObject__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FreezeObject__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
