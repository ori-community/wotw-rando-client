#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletBody_AngularContraint__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletBody_AngularContraint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletBody_AngularContraint__Fields_DEFINED)
#define IL2CPP_STRUCT_VerletBody_AngularContraint__Fields_DEFINED
struct VerletBody_Link;
struct __declspec(align(8)) VerletBody_AngularContraint__Fields {
    struct VerletBody_Link* m_link0;
    struct VerletBody_Link* m_link1;
    float m_maxAngle;
};
#endif
#if !defined(IL2CPP_STRUCT_VerletBody_AngularContraint__Fields_FWDDECL)
#define IL2CPP_STRUCT_VerletBody_AngularContraint__Fields_FWDDECL
#include <Modloader/app/structs/VerletBody_Link.h>
#endif
#undef IL2CPP_STRUCT_VerletBody_AngularContraint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletBody_AngularContraint__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VerletBody_AngularContraint__Fields_FWDDECL)
#include <Modloader/app/structs/VerletBody_AngularContraint__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletBody_AngularContraint__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
