#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DifficultyCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DifficultyCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_DifficultyCondition_DEFINED)
#include <Modloader/app/structs/DifficultyCondition__Fields.h>
#if defined(IL2CPP_STRUCT_DifficultyCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_DifficultyCondition_DEFINED
struct DifficultyCondition__Class;
struct DifficultyCondition {
    struct DifficultyCondition__Class* klass;
    MonitorData* monitor;
    struct DifficultyCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DifficultyCondition_FWDDECL)
#define IL2CPP_STRUCT_DifficultyCondition_FWDDECL
#include <Modloader/app/structs/DifficultyCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_DifficultyCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_DifficultyCondition_DEFINED) && !defined(IL2CPP_STRUCT_DifficultyCondition_FWDDECL)
#include <Modloader/app/structs/DifficultyCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DifficultyCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
