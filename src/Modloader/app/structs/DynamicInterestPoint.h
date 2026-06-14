#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicInterestPoint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicInterestPoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicInterestPoint_DEFINED)
#include <Modloader/app/structs/DynamicInterestPoint__Fields.h>
#if defined(IL2CPP_STRUCT_DynamicInterestPoint__Fields_DEFINED)
#define IL2CPP_STRUCT_DynamicInterestPoint_DEFINED
struct DynamicInterestPoint__Class;
struct DynamicInterestPoint {
    struct DynamicInterestPoint__Class* klass;
    MonitorData* monitor;
    struct DynamicInterestPoint__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DynamicInterestPoint_FWDDECL)
#define IL2CPP_STRUCT_DynamicInterestPoint_FWDDECL
#include <Modloader/app/structs/DynamicInterestPoint__Class.h>
#endif
#undef IL2CPP_STRUCT_DynamicInterestPoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicInterestPoint_DEFINED) && !defined(IL2CPP_STRUCT_DynamicInterestPoint_FWDDECL)
#include <Modloader/app/structs/DynamicInterestPoint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicInterestPoint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
