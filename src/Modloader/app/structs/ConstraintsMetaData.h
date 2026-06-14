#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConstraintsMetaData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConstraintsMetaData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintsMetaData_DEFINED)
#include <Modloader/app/structs/ConstraintsMetaData__Fields.h>
#if defined(IL2CPP_STRUCT_ConstraintsMetaData__Fields_DEFINED)
#define IL2CPP_STRUCT_ConstraintsMetaData_DEFINED
struct ConstraintsMetaData__Class;
struct ConstraintsMetaData {
    struct ConstraintsMetaData__Class* klass;
    MonitorData* monitor;
    struct ConstraintsMetaData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConstraintsMetaData_FWDDECL)
#define IL2CPP_STRUCT_ConstraintsMetaData_FWDDECL
#include <Modloader/app/structs/ConstraintsMetaData__Class.h>
#endif
#undef IL2CPP_STRUCT_ConstraintsMetaData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintsMetaData_DEFINED) && !defined(IL2CPP_STRUCT_ConstraintsMetaData_FWDDECL)
#include <Modloader/app/structs/ConstraintsMetaData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConstraintsMetaData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
