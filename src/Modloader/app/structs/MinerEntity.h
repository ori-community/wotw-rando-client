#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MinerEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MinerEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerEntity_DEFINED)
#include <Modloader/app/structs/MinerEntity__Fields.h>
#if defined(IL2CPP_STRUCT_MinerEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_MinerEntity_DEFINED
struct MinerEntity__Class;
struct MinerEntity {
    struct MinerEntity__Class* klass;
    MonitorData* monitor;
    struct MinerEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MinerEntity_FWDDECL)
#define IL2CPP_STRUCT_MinerEntity_FWDDECL
#include <Modloader/app/structs/MinerEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_MinerEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerEntity_DEFINED) && !defined(IL2CPP_STRUCT_MinerEntity_FWDDECL)
#include <Modloader/app/structs/MinerEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MinerEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
