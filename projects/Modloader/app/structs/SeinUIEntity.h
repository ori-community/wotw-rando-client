#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinUIEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinUIEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinUIEntity_DEFINED)
#include <Modloader/app/structs/SeinUIEntity__Fields.h>
#if defined(IL2CPP_STRUCT_SeinUIEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinUIEntity_DEFINED
struct SeinUIEntity__Class;
struct SeinUIEntity {
    struct SeinUIEntity__Class* klass;
    MonitorData* monitor;
    struct SeinUIEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinUIEntity_FWDDECL)
#define IL2CPP_STRUCT_SeinUIEntity_FWDDECL
#include <Modloader/app/structs/SeinUIEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinUIEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinUIEntity_DEFINED) && !defined(IL2CPP_STRUCT_SeinUIEntity_FWDDECL)
#include <Modloader/app/structs/SeinUIEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinUIEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
