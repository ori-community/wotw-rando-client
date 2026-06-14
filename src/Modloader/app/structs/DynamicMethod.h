#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicMethod_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicMethod_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicMethod_DEFINED)
#define IL2CPP_STRUCT_DynamicMethod_DEFINED
struct DynamicMethod__Class;
struct DynamicMethod {
    struct DynamicMethod__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DynamicMethod_FWDDECL)
#define IL2CPP_STRUCT_DynamicMethod_FWDDECL
#include <Modloader/app/structs/DynamicMethod__Class.h>
#endif
#undef IL2CPP_STRUCT_DynamicMethod_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicMethod_DEFINED) && !defined(IL2CPP_STRUCT_DynamicMethod_FWDDECL)
#include <Modloader/app/structs/DynamicMethod.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicMethod.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
