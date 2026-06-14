#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinWorldStateCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinWorldStateCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinWorldStateCondition_DEFINED)
#include <Modloader/app/structs/SeinWorldStateCondition__Fields.h>
#if defined(IL2CPP_STRUCT_SeinWorldStateCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinWorldStateCondition_DEFINED
struct SeinWorldStateCondition__Class;
struct SeinWorldStateCondition {
    struct SeinWorldStateCondition__Class* klass;
    MonitorData* monitor;
    struct SeinWorldStateCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinWorldStateCondition_FWDDECL)
#define IL2CPP_STRUCT_SeinWorldStateCondition_FWDDECL
#include <Modloader/app/structs/SeinWorldStateCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinWorldStateCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinWorldStateCondition_DEFINED) && !defined(IL2CPP_STRUCT_SeinWorldStateCondition_FWDDECL)
#include <Modloader/app/structs/SeinWorldStateCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinWorldStateCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
