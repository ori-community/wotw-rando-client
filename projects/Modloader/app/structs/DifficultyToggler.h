#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DifficultyToggler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DifficultyToggler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DifficultyToggler_DEFINED)
#include <Modloader/app/structs/DifficultyToggler__Fields.h>
#if defined(IL2CPP_STRUCT_DifficultyToggler__Fields_DEFINED)
#define IL2CPP_STRUCT_DifficultyToggler_DEFINED
struct DifficultyToggler__Class;
struct DifficultyToggler {
    struct DifficultyToggler__Class* klass;
    MonitorData* monitor;
    struct DifficultyToggler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DifficultyToggler_FWDDECL)
#define IL2CPP_STRUCT_DifficultyToggler_FWDDECL
#include <Modloader/app/structs/DifficultyToggler__Class.h>
#endif
#undef IL2CPP_STRUCT_DifficultyToggler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DifficultyToggler_DEFINED) && !defined(IL2CPP_STRUCT_DifficultyToggler_FWDDECL)
#include <Modloader/app/structs/DifficultyToggler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DifficultyToggler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
