#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NotCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NotCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_NotCondition_DEFINED)
#include <Modloader/app/structs/NotCondition__Fields.h>
#if defined(IL2CPP_STRUCT_NotCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_NotCondition_DEFINED
struct NotCondition__Class;
struct NotCondition {
    struct NotCondition__Class* klass;
    MonitorData* monitor;
    struct NotCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NotCondition_FWDDECL)
#define IL2CPP_STRUCT_NotCondition_FWDDECL
#include <Modloader/app/structs/NotCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_NotCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_NotCondition_DEFINED) && !defined(IL2CPP_STRUCT_NotCondition_FWDDECL)
#include <Modloader/app/structs/NotCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NotCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
