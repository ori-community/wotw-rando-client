#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinNestedPrefab_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinNestedPrefab_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinNestedPrefab_DEFINED)
#include <Modloader/app/structs/SeinNestedPrefab__Fields.h>
#if defined(IL2CPP_STRUCT_SeinNestedPrefab__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinNestedPrefab_DEFINED
struct SeinNestedPrefab__Class;
struct SeinNestedPrefab {
    struct SeinNestedPrefab__Class* klass;
    MonitorData* monitor;
    struct SeinNestedPrefab__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinNestedPrefab_FWDDECL)
#define IL2CPP_STRUCT_SeinNestedPrefab_FWDDECL
#include <Modloader/app/structs/SeinNestedPrefab__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinNestedPrefab_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinNestedPrefab_DEFINED) && !defined(IL2CPP_STRUCT_SeinNestedPrefab_FWDDECL)
#include <Modloader/app/structs/SeinNestedPrefab.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinNestedPrefab.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
