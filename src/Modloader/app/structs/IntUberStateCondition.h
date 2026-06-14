#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IntUberStateCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IntUberStateCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntUberStateCondition_DEFINED)
#include <Modloader/app/structs/IntUberStateCondition__Fields.h>
#if defined(IL2CPP_STRUCT_IntUberStateCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_IntUberStateCondition_DEFINED
struct IntUberStateCondition__Class;
struct IntUberStateCondition {
    struct IntUberStateCondition__Class* klass;
    MonitorData* monitor;
    struct IntUberStateCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IntUberStateCondition_FWDDECL)
#define IL2CPP_STRUCT_IntUberStateCondition_FWDDECL
#include <Modloader/app/structs/IntUberStateCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_IntUberStateCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntUberStateCondition_DEFINED) && !defined(IL2CPP_STRUCT_IntUberStateCondition_FWDDECL)
#include <Modloader/app/structs/IntUberStateCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IntUberStateCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
