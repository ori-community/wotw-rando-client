#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITestInterface_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITestInterface_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITestInterface_DEFINED)
#define IL2CPP_STRUCT_ITestInterface_DEFINED
struct ITestInterface__Class;
struct ITestInterface {
    struct ITestInterface__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ITestInterface_FWDDECL)
#define IL2CPP_STRUCT_ITestInterface_FWDDECL
#include <Modloader/app/structs/ITestInterface__Class.h>
#endif
#undef IL2CPP_STRUCT_ITestInterface_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITestInterface_DEFINED) && !defined(IL2CPP_STRUCT_ITestInterface_FWDDECL)
#include <Modloader/app/structs/ITestInterface.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITestInterface.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
