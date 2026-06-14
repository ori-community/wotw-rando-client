#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DifficultyController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DifficultyController_INITIALIZING
#if !defined(IL2CPP_STRUCT_DifficultyController_DEFINED)
#include <Modloader/app/structs/DifficultyController__Fields.h>
#if defined(IL2CPP_STRUCT_DifficultyController__Fields_DEFINED)
#define IL2CPP_STRUCT_DifficultyController_DEFINED
struct DifficultyController__Class;
struct DifficultyController {
    struct DifficultyController__Class* klass;
    MonitorData* monitor;
    struct DifficultyController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DifficultyController_FWDDECL)
#define IL2CPP_STRUCT_DifficultyController_FWDDECL
#include <Modloader/app/structs/DifficultyController__Class.h>
#endif
#undef IL2CPP_STRUCT_DifficultyController_INITIALIZING
#if !defined(IL2CPP_STRUCT_DifficultyController_DEFINED) && !defined(IL2CPP_STRUCT_DifficultyController_FWDDECL)
#include <Modloader/app/structs/DifficultyController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DifficultyController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
