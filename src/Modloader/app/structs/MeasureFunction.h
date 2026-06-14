#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeasureFunction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeasureFunction_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeasureFunction_DEFINED)
#include <Modloader/app/structs/MeasureFunction__Fields.h>
#if defined(IL2CPP_STRUCT_MeasureFunction__Fields_DEFINED)
#define IL2CPP_STRUCT_MeasureFunction_DEFINED
struct MeasureFunction__Class;
struct MeasureFunction {
    struct MeasureFunction__Class* klass;
    MonitorData* monitor;
    struct MeasureFunction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeasureFunction_FWDDECL)
#define IL2CPP_STRUCT_MeasureFunction_FWDDECL
#include <Modloader/app/structs/MeasureFunction__Class.h>
#endif
#undef IL2CPP_STRUCT_MeasureFunction_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeasureFunction_DEFINED) && !defined(IL2CPP_STRUCT_MeasureFunction_FWDDECL)
#include <Modloader/app/structs/MeasureFunction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeasureFunction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
