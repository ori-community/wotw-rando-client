#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeConstructorInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeConstructorInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeConstructorInfo_DEFINED)
#define IL2CPP_STRUCT_RuntimeConstructorInfo_DEFINED
struct RuntimeConstructorInfo__Class;
struct RuntimeConstructorInfo {
    struct RuntimeConstructorInfo__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_RuntimeConstructorInfo_FWDDECL)
#define IL2CPP_STRUCT_RuntimeConstructorInfo_FWDDECL
#include <Modloader/app/structs/RuntimeConstructorInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeConstructorInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeConstructorInfo_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeConstructorInfo_FWDDECL)
#include <Modloader/app/structs/RuntimeConstructorInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeConstructorInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
