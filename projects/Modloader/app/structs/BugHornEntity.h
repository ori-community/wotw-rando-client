#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BugHornEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BugHornEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_BugHornEntity_DEFINED)
#include <Modloader/app/structs/BugHornEntity__Fields.h>
#if defined(IL2CPP_STRUCT_BugHornEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_BugHornEntity_DEFINED
struct BugHornEntity__Class;
struct BugHornEntity {
    struct BugHornEntity__Class* klass;
    MonitorData* monitor;
    struct BugHornEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BugHornEntity_FWDDECL)
#define IL2CPP_STRUCT_BugHornEntity_FWDDECL
#include <Modloader/app/structs/BugHornEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_BugHornEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_BugHornEntity_DEFINED) && !defined(IL2CPP_STRUCT_BugHornEntity_FWDDECL)
#include <Modloader/app/structs/BugHornEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BugHornEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
