#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BatSwarmerSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BatSwarmerSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BatSwarmerSettings__Fields_DEFINED)
#include <Modloader/app/structs/UberSwarmerSettings__Fields.h>
#if defined(IL2CPP_STRUCT_UberSwarmerSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_BatSwarmerSettings__Fields_DEFINED
struct BatSwarmerSettings__Fields {
    struct UberSwarmerSettings__Fields _;
    float MainPOIWeight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BatSwarmerSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_BatSwarmerSettings__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_BatSwarmerSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BatSwarmerSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BatSwarmerSettings__Fields_FWDDECL)
#include <Modloader/app/structs/BatSwarmerSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BatSwarmerSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
