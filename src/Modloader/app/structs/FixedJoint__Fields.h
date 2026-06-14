#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FixedJoint__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FixedJoint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedJoint__Fields_DEFINED)
#include <Modloader/app/structs/Joint__Fields.h>
#if defined(IL2CPP_STRUCT_Joint__Fields_DEFINED)
#define IL2CPP_STRUCT_FixedJoint__Fields_DEFINED
struct FixedJoint__Fields {
    struct Joint__Fields _;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FixedJoint__Fields_FWDDECL)
#define IL2CPP_STRUCT_FixedJoint__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_FixedJoint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedJoint__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FixedJoint__Fields_FWDDECL)
#include <Modloader/app/structs/FixedJoint__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FixedJoint__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
