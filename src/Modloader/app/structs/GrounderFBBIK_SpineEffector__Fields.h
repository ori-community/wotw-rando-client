#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GrounderFBBIK_SpineEffector__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GrounderFBBIK_SpineEffector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrounderFBBIK_SpineEffector__Fields_DEFINED)
#include <Modloader/app/structs/FullBodyBipedEffector__Enum.h>
#if defined(IL2CPP_STRUCT_FullBodyBipedEffector__Enum_DEFINED)
#define IL2CPP_STRUCT_GrounderFBBIK_SpineEffector__Fields_DEFINED
struct __declspec(align(8)) GrounderFBBIK_SpineEffector__Fields {
    FullBodyBipedEffector__Enum effectorType;

    float horizontalWeight;
    float verticalWeight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GrounderFBBIK_SpineEffector__Fields_FWDDECL)
#define IL2CPP_STRUCT_GrounderFBBIK_SpineEffector__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_GrounderFBBIK_SpineEffector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrounderFBBIK_SpineEffector__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GrounderFBBIK_SpineEffector__Fields_FWDDECL)
#include <Modloader/app/structs/GrounderFBBIK_SpineEffector__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GrounderFBBIK_SpineEffector__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
