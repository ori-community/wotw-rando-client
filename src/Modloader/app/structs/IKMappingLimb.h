#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKMappingLimb_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKMappingLimb_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKMappingLimb_DEFINED)
#include <Modloader/app/structs/IKMappingLimb__Fields.h>
#if defined(IL2CPP_STRUCT_IKMappingLimb__Fields_DEFINED)
#define IL2CPP_STRUCT_IKMappingLimb_DEFINED
struct IKMappingLimb__Class;
struct IKMappingLimb {
    struct IKMappingLimb__Class* klass;
    MonitorData* monitor;
    struct IKMappingLimb__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKMappingLimb_FWDDECL)
#define IL2CPP_STRUCT_IKMappingLimb_FWDDECL
#include <Modloader/app/structs/IKMappingLimb__Class.h>
#endif
#undef IL2CPP_STRUCT_IKMappingLimb_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKMappingLimb_DEFINED) && !defined(IL2CPP_STRUCT_IKMappingLimb_FWDDECL)
#include <Modloader/app/structs/IKMappingLimb.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKMappingLimb.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
