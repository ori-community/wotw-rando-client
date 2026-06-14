#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Condition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Condition_INITIALIZING
#if !defined(IL2CPP_STRUCT_Condition_DEFINED)
#include <Modloader/app/structs/Condition__Fields.h>
#if defined(IL2CPP_STRUCT_Condition__Fields_DEFINED)
#define IL2CPP_STRUCT_Condition_DEFINED
struct Condition__Class;
struct Condition {
    struct Condition__Class* klass;
    MonitorData* monitor;
    struct Condition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Condition_FWDDECL)
#define IL2CPP_STRUCT_Condition_FWDDECL
#include <Modloader/app/structs/Condition__Class.h>
#endif
#undef IL2CPP_STRUCT_Condition_INITIALIZING
#if !defined(IL2CPP_STRUCT_Condition_DEFINED) && !defined(IL2CPP_STRUCT_Condition_FWDDECL)
#include <Modloader/app/structs/Condition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Condition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
