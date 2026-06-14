#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LianaEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LianaEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_LianaEntity_DEFINED)
#include <Modloader/app/structs/LianaEntity__Fields.h>
#if defined(IL2CPP_STRUCT_LianaEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_LianaEntity_DEFINED
struct LianaEntity__Class;
struct LianaEntity {
    struct LianaEntity__Class* klass;
    MonitorData* monitor;
    struct LianaEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LianaEntity_FWDDECL)
#define IL2CPP_STRUCT_LianaEntity_FWDDECL
#include <Modloader/app/structs/LianaEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_LianaEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_LianaEntity_DEFINED) && !defined(IL2CPP_STRUCT_LianaEntity_FWDDECL)
#include <Modloader/app/structs/LianaEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LianaEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
