#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKMapping_BoneMap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKMapping_BoneMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKMapping_BoneMap_DEFINED)
#include <Modloader/app/structs/IKMapping_BoneMap__Fields.h>
#if defined(IL2CPP_STRUCT_IKMapping_BoneMap__Fields_DEFINED)
#define IL2CPP_STRUCT_IKMapping_BoneMap_DEFINED
struct IKMapping_BoneMap__Class;
struct IKMapping_BoneMap {
    struct IKMapping_BoneMap__Class* klass;
    MonitorData* monitor;
    struct IKMapping_BoneMap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKMapping_BoneMap_FWDDECL)
#define IL2CPP_STRUCT_IKMapping_BoneMap_FWDDECL
#include <Modloader/app/structs/IKMapping_BoneMap__Class.h>
#endif
#undef IL2CPP_STRUCT_IKMapping_BoneMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKMapping_BoneMap_DEFINED) && !defined(IL2CPP_STRUCT_IKMapping_BoneMap_FWDDECL)
#include <Modloader/app/structs/IKMapping_BoneMap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKMapping_BoneMap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
