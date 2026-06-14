#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AllConditions_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AllConditions_INITIALIZING
#if !defined(IL2CPP_STRUCT_AllConditions_DEFINED)
#include <Modloader/app/structs/AllConditions__Fields.h>
#if defined(IL2CPP_STRUCT_AllConditions__Fields_DEFINED)
#define IL2CPP_STRUCT_AllConditions_DEFINED
struct AllConditions__Class;
struct AllConditions {
    struct AllConditions__Class* klass;
    MonitorData* monitor;
    struct AllConditions__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AllConditions_FWDDECL)
#define IL2CPP_STRUCT_AllConditions_FWDDECL
#include <Modloader/app/structs/AllConditions__Class.h>
#endif
#undef IL2CPP_STRUCT_AllConditions_INITIALIZING
#if !defined(IL2CPP_STRUCT_AllConditions_DEFINED) && !defined(IL2CPP_STRUCT_AllConditions_FWDDECL)
#include <Modloader/app/structs/AllConditions.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AllConditions.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
