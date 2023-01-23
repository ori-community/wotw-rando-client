#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicInstantiationScanner_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicInstantiationScanner_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicInstantiationScanner_DEFINED)
#include <Modloader/app/structs/DynamicInstantiationScanner__Fields.h>
#if defined(IL2CPP_STRUCT_DynamicInstantiationScanner__Fields_DEFINED)
#define IL2CPP_STRUCT_DynamicInstantiationScanner_DEFINED
struct DynamicInstantiationScanner__Class;
struct DynamicInstantiationScanner {
    struct DynamicInstantiationScanner__Class* klass;
    MonitorData* monitor;
    struct DynamicInstantiationScanner__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DynamicInstantiationScanner_FWDDECL)
#define IL2CPP_STRUCT_DynamicInstantiationScanner_FWDDECL
#include <Modloader/app/structs/DynamicInstantiationScanner__Class.h>
#endif
#undef IL2CPP_STRUCT_DynamicInstantiationScanner_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicInstantiationScanner_DEFINED) && !defined(IL2CPP_STRUCT_DynamicInstantiationScanner_FWDDECL)
#include <Modloader/app/structs/DynamicInstantiationScanner.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicInstantiationScanner.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
