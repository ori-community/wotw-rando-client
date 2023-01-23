#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConstraintStruct_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConstraintStruct_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintStruct_DEFINED)
#include <Modloader/app/structs/ConstraintStruct__Fields.h>
#if defined(IL2CPP_STRUCT_ConstraintStruct__Fields_DEFINED)
#define IL2CPP_STRUCT_ConstraintStruct_DEFINED
struct ConstraintStruct__Class;
struct ConstraintStruct {
    struct ConstraintStruct__Class* klass;
    MonitorData* monitor;
    struct ConstraintStruct__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConstraintStruct_FWDDECL)
#define IL2CPP_STRUCT_ConstraintStruct_FWDDECL
#include <Modloader/app/structs/ConstraintStruct__Class.h>
#endif
#undef IL2CPP_STRUCT_ConstraintStruct_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintStruct_DEFINED) && !defined(IL2CPP_STRUCT_ConstraintStruct_FWDDECL)
#include <Modloader/app/structs/ConstraintStruct.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConstraintStruct.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
