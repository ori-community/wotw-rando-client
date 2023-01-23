#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpawnTextBoxes_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpawnTextBoxes_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpawnTextBoxes_DEFINED)
#include <Modloader/app/structs/SpawnTextBoxes__Fields.h>
#if defined(IL2CPP_STRUCT_SpawnTextBoxes__Fields_DEFINED)
#define IL2CPP_STRUCT_SpawnTextBoxes_DEFINED
struct SpawnTextBoxes__Class;
struct SpawnTextBoxes {
    struct SpawnTextBoxes__Class* klass;
    MonitorData* monitor;
    struct SpawnTextBoxes__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpawnTextBoxes_FWDDECL)
#define IL2CPP_STRUCT_SpawnTextBoxes_FWDDECL
#include <Modloader/app/structs/SpawnTextBoxes__Class.h>
#endif
#undef IL2CPP_STRUCT_SpawnTextBoxes_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpawnTextBoxes_DEFINED) && !defined(IL2CPP_STRUCT_SpawnTextBoxes_FWDDECL)
#include <Modloader/app/structs/SpawnTextBoxes.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpawnTextBoxes.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
