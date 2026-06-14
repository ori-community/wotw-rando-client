#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityWeightData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityWeightData_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityWeightData_DEFINED)
#include <Modloader/app/structs/EntityWeightData__Fields.h>
#if defined(IL2CPP_STRUCT_EntityWeightData__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityWeightData_DEFINED
struct EntityWeightData__Class;
struct EntityWeightData {
    struct EntityWeightData__Class* klass;
    MonitorData* monitor;
    struct EntityWeightData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityWeightData_FWDDECL)
#define IL2CPP_STRUCT_EntityWeightData_FWDDECL
#include <Modloader/app/structs/EntityWeightData__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityWeightData_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityWeightData_DEFINED) && !defined(IL2CPP_STRUCT_EntityWeightData_FWDDECL)
#include <Modloader/app/structs/EntityWeightData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityWeightData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
