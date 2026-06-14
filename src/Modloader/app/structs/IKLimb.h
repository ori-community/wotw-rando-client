#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKLimb_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKLimb_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKLimb_DEFINED)
#include <Modloader/app/structs/IKLimb__Fields.h>
#if defined(IL2CPP_STRUCT_IKLimb__Fields_DEFINED)
#define IL2CPP_STRUCT_IKLimb_DEFINED
struct IKLimb__Class;
struct IKLimb {
    struct IKLimb__Class* klass;
    MonitorData* monitor;
    struct IKLimb__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKLimb_FWDDECL)
#define IL2CPP_STRUCT_IKLimb_FWDDECL
#include <Modloader/app/structs/IKLimb__Class.h>
#endif
#undef IL2CPP_STRUCT_IKLimb_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKLimb_DEFINED) && !defined(IL2CPP_STRUCT_IKLimb_FWDDECL)
#include <Modloader/app/structs/IKLimb.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKLimb.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
