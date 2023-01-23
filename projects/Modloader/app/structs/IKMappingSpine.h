#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKMappingSpine_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKMappingSpine_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKMappingSpine_DEFINED)
#include <Modloader/app/structs/IKMappingSpine__Fields.h>
#if defined(IL2CPP_STRUCT_IKMappingSpine__Fields_DEFINED)
#define IL2CPP_STRUCT_IKMappingSpine_DEFINED
struct IKMappingSpine__Class;
struct IKMappingSpine {
    struct IKMappingSpine__Class* klass;
    MonitorData* monitor;
    struct IKMappingSpine__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKMappingSpine_FWDDECL)
#define IL2CPP_STRUCT_IKMappingSpine_FWDDECL
#include <Modloader/app/structs/IKMappingSpine__Class.h>
#endif
#undef IL2CPP_STRUCT_IKMappingSpine_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKMappingSpine_DEFINED) && !defined(IL2CPP_STRUCT_IKMappingSpine_FWDDECL)
#include <Modloader/app/structs/IKMappingSpine.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKMappingSpine.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
