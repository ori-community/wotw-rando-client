#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FixedRotation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FixedRotation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedRotation__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_FixedRotation__Fields_DEFINED
struct FixedRotation__Fields {
    struct MonoBehaviour__Fields _;
    struct Quaternion m_originalRotation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FixedRotation__Fields_FWDDECL)
#define IL2CPP_STRUCT_FixedRotation__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_FixedRotation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedRotation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FixedRotation__Fields_FWDDECL)
#include <Modloader/app/structs/FixedRotation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FixedRotation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
