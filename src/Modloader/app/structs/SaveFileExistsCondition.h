#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SaveFileExistsCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SaveFileExistsCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveFileExistsCondition_DEFINED)
#include <Modloader/app/structs/SaveFileExistsCondition__Fields.h>
#if defined(IL2CPP_STRUCT_SaveFileExistsCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_SaveFileExistsCondition_DEFINED
struct SaveFileExistsCondition__Class;
struct SaveFileExistsCondition {
    struct SaveFileExistsCondition__Class* klass;
    MonitorData* monitor;
    struct SaveFileExistsCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SaveFileExistsCondition_FWDDECL)
#define IL2CPP_STRUCT_SaveFileExistsCondition_FWDDECL
#include <Modloader/app/structs/SaveFileExistsCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_SaveFileExistsCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveFileExistsCondition_DEFINED) && !defined(IL2CPP_STRUCT_SaveFileExistsCondition_FWDDECL)
#include <Modloader/app/structs/SaveFileExistsCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SaveFileExistsCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
