#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicCubeReference_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicCubeReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicCubeReference_DEFINED)
#include <Modloader/app/structs/DynamicCubeReference__Fields.h>
#if defined(IL2CPP_STRUCT_DynamicCubeReference__Fields_DEFINED)
#define IL2CPP_STRUCT_DynamicCubeReference_DEFINED
struct DynamicCubeReference__Class;
struct DynamicCubeReference {
    struct DynamicCubeReference__Class* klass;
    MonitorData* monitor;
    struct DynamicCubeReference__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DynamicCubeReference_FWDDECL)
#define IL2CPP_STRUCT_DynamicCubeReference_FWDDECL
#include <Modloader/app/structs/DynamicCubeReference__Class.h>
#endif
#undef IL2CPP_STRUCT_DynamicCubeReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicCubeReference_DEFINED) && !defined(IL2CPP_STRUCT_DynamicCubeReference_FWDDECL)
#include <Modloader/app/structs/DynamicCubeReference.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicCubeReference.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
