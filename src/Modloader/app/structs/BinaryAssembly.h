#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinaryAssembly_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinaryAssembly_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryAssembly_DEFINED)
#include <Modloader/app/structs/BinaryAssembly__Fields.h>
#if defined(IL2CPP_STRUCT_BinaryAssembly__Fields_DEFINED)
#define IL2CPP_STRUCT_BinaryAssembly_DEFINED
struct BinaryAssembly__Class;
struct BinaryAssembly {
    struct BinaryAssembly__Class* klass;
    MonitorData* monitor;
    struct BinaryAssembly__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BinaryAssembly_FWDDECL)
#define IL2CPP_STRUCT_BinaryAssembly_FWDDECL
#include <Modloader/app/structs/BinaryAssembly__Class.h>
#endif
#undef IL2CPP_STRUCT_BinaryAssembly_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryAssembly_DEFINED) && !defined(IL2CPP_STRUCT_BinaryAssembly_FWDDECL)
#include <Modloader/app/structs/BinaryAssembly.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinaryAssembly.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
