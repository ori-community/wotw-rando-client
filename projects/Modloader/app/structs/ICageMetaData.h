#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ICageMetaData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ICageMetaData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICageMetaData_DEFINED)
#define IL2CPP_STRUCT_ICageMetaData_DEFINED
struct ICageMetaData__Class;
struct ICageMetaData {
    struct ICageMetaData__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ICageMetaData_FWDDECL)
#define IL2CPP_STRUCT_ICageMetaData_FWDDECL
#include <Modloader/app/structs/ICageMetaData__Class.h>
#endif
#undef IL2CPP_STRUCT_ICageMetaData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICageMetaData_DEFINED) && !defined(IL2CPP_STRUCT_ICageMetaData_FWDDECL)
#include <Modloader/app/structs/ICageMetaData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ICageMetaData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
