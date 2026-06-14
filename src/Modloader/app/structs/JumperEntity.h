#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JumperEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JumperEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumperEntity_DEFINED)
#include <Modloader/app/structs/JumperEntity__Fields.h>
#if defined(IL2CPP_STRUCT_JumperEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_JumperEntity_DEFINED
struct JumperEntity__Class;
struct JumperEntity {
    struct JumperEntity__Class* klass;
    MonitorData* monitor;
    struct JumperEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JumperEntity_FWDDECL)
#define IL2CPP_STRUCT_JumperEntity_FWDDECL
#include <Modloader/app/structs/JumperEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_JumperEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumperEntity_DEFINED) && !defined(IL2CPP_STRUCT_JumperEntity_FWDDECL)
#include <Modloader/app/structs/JumperEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JumperEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
