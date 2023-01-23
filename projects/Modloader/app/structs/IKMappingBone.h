#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKMappingBone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKMappingBone_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKMappingBone_DEFINED)
#include <Modloader/app/structs/IKMappingBone__Fields.h>
#if defined(IL2CPP_STRUCT_IKMappingBone__Fields_DEFINED)
#define IL2CPP_STRUCT_IKMappingBone_DEFINED
struct IKMappingBone__Class;
struct IKMappingBone {
    struct IKMappingBone__Class* klass;
    MonitorData* monitor;
    struct IKMappingBone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKMappingBone_FWDDECL)
#define IL2CPP_STRUCT_IKMappingBone_FWDDECL
#include <Modloader/app/structs/IKMappingBone__Class.h>
#endif
#undef IL2CPP_STRUCT_IKMappingBone_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKMappingBone_DEFINED) && !defined(IL2CPP_STRUCT_IKMappingBone_FWDDECL)
#include <Modloader/app/structs/IKMappingBone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKMappingBone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
