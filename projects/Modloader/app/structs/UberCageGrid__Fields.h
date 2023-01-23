#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberCageGrid__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberCageGrid__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberCageGrid__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_UberCageGrid__Fields_DEFINED
struct UberCageGrid__Fields {
    struct MonoBehaviour__Fields _;
    int32_t XDivisions;
    int32_t YDivisions;
    struct Vector2 Size;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberCageGrid__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberCageGrid__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_UberCageGrid__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberCageGrid__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberCageGrid__Fields_FWDDECL)
#include <Modloader/app/structs/UberCageGrid__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberCageGrid__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
