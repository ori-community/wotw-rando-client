#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Operator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Operator_INITIALIZING
#if !defined(IL2CPP_STRUCT_Operator_DEFINED)
#include <Modloader/app/structs/Operator__Fields.h>
#if defined(IL2CPP_STRUCT_Operator__Fields_DEFINED)
#define IL2CPP_STRUCT_Operator_DEFINED
struct Operator__Class;
struct Operator {
    struct Operator__Class* klass;
    MonitorData* monitor;
    struct Operator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Operator_FWDDECL)
#define IL2CPP_STRUCT_Operator_FWDDECL
#include <Modloader/app/structs/Operator__Class.h>
#endif
#undef IL2CPP_STRUCT_Operator_INITIALIZING
#if !defined(IL2CPP_STRUCT_Operator_DEFINED) && !defined(IL2CPP_STRUCT_Operator_FWDDECL)
#include <Modloader/app/structs/Operator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Operator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
