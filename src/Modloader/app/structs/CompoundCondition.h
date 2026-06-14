#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CompoundCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CompoundCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompoundCondition_DEFINED)
#include <Modloader/app/structs/CompoundCondition__Fields.h>
#if defined(IL2CPP_STRUCT_CompoundCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_CompoundCondition_DEFINED
struct CompoundCondition__Class;
struct CompoundCondition {
    struct CompoundCondition__Class* klass;
    MonitorData* monitor;
    struct CompoundCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CompoundCondition_FWDDECL)
#define IL2CPP_STRUCT_CompoundCondition_FWDDECL
#include <Modloader/app/structs/CompoundCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_CompoundCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompoundCondition_DEFINED) && !defined(IL2CPP_STRUCT_CompoundCondition_FWDDECL)
#include <Modloader/app/structs/CompoundCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CompoundCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
