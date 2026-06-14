#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FBBIKHeadEffector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FBBIKHeadEffector_INITIALIZING
#if !defined(IL2CPP_STRUCT_FBBIKHeadEffector_DEFINED)
#include <Modloader/app/structs/FBBIKHeadEffector__Fields.h>
#if defined(IL2CPP_STRUCT_FBBIKHeadEffector__Fields_DEFINED)
#define IL2CPP_STRUCT_FBBIKHeadEffector_DEFINED
struct FBBIKHeadEffector__Class;
struct FBBIKHeadEffector {
    struct FBBIKHeadEffector__Class* klass;
    MonitorData* monitor;
    struct FBBIKHeadEffector__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FBBIKHeadEffector_FWDDECL)
#define IL2CPP_STRUCT_FBBIKHeadEffector_FWDDECL
#include <Modloader/app/structs/FBBIKHeadEffector__Class.h>
#endif
#undef IL2CPP_STRUCT_FBBIKHeadEffector_INITIALIZING
#if !defined(IL2CPP_STRUCT_FBBIKHeadEffector_DEFINED) && !defined(IL2CPP_STRUCT_FBBIKHeadEffector_FWDDECL)
#include <Modloader/app/structs/FBBIKHeadEffector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FBBIKHeadEffector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
