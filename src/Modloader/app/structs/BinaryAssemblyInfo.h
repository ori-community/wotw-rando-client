#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinaryAssemblyInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinaryAssemblyInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryAssemblyInfo_DEFINED)
#include <Modloader/app/structs/BinaryAssemblyInfo__Fields.h>
#if defined(IL2CPP_STRUCT_BinaryAssemblyInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_BinaryAssemblyInfo_DEFINED
struct BinaryAssemblyInfo__Class;
struct BinaryAssemblyInfo {
    struct BinaryAssemblyInfo__Class* klass;
    MonitorData* monitor;
    struct BinaryAssemblyInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BinaryAssemblyInfo_FWDDECL)
#define IL2CPP_STRUCT_BinaryAssemblyInfo_FWDDECL
#include <Modloader/app/structs/BinaryAssemblyInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_BinaryAssemblyInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryAssemblyInfo_DEFINED) && !defined(IL2CPP_STRUCT_BinaryAssemblyInfo_FWDDECL)
#include <Modloader/app/structs/BinaryAssemblyInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinaryAssemblyInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
