#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISafeSerializationData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISafeSerializationData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISafeSerializationData_DEFINED)
#define IL2CPP_STRUCT_ISafeSerializationData_DEFINED
struct ISafeSerializationData__Class;
struct ISafeSerializationData {
    struct ISafeSerializationData__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISafeSerializationData_FWDDECL)
#define IL2CPP_STRUCT_ISafeSerializationData_FWDDECL
#include <Modloader/app/structs/ISafeSerializationData__Class.h>
#endif
#undef IL2CPP_STRUCT_ISafeSerializationData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISafeSerializationData_DEFINED) && !defined(IL2CPP_STRUCT_ISafeSerializationData_FWDDECL)
#include <Modloader/app/structs/ISafeSerializationData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISafeSerializationData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
