#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaselineFunction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaselineFunction_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaselineFunction_DEFINED)
#include <Modloader/app/structs/BaselineFunction__Fields.h>
#if defined(IL2CPP_STRUCT_BaselineFunction__Fields_DEFINED)
#define IL2CPP_STRUCT_BaselineFunction_DEFINED
struct BaselineFunction__Class;
struct BaselineFunction {
    struct BaselineFunction__Class* klass;
    MonitorData* monitor;
    struct BaselineFunction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaselineFunction_FWDDECL)
#define IL2CPP_STRUCT_BaselineFunction_FWDDECL
#include <Modloader/app/structs/BaselineFunction__Class.h>
#endif
#undef IL2CPP_STRUCT_BaselineFunction_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaselineFunction_DEFINED) && !defined(IL2CPP_STRUCT_BaselineFunction_FWDDECL)
#include <Modloader/app/structs/BaselineFunction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaselineFunction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
