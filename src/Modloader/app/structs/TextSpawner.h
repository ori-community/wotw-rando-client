#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextSpawner_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextSpawner_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextSpawner_DEFINED)
#include <Modloader/app/structs/TextSpawner__Fields.h>
#if defined(IL2CPP_STRUCT_TextSpawner__Fields_DEFINED)
#define IL2CPP_STRUCT_TextSpawner_DEFINED
struct TextSpawner__Class;
struct TextSpawner {
    struct TextSpawner__Class* klass;
    MonitorData* monitor;
    struct TextSpawner__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextSpawner_FWDDECL)
#define IL2CPP_STRUCT_TextSpawner_FWDDECL
#include <Modloader/app/structs/TextSpawner__Class.h>
#endif
#undef IL2CPP_STRUCT_TextSpawner_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextSpawner_DEFINED) && !defined(IL2CPP_STRUCT_TextSpawner_FWDDECL)
#include <Modloader/app/structs/TextSpawner.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextSpawner.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
