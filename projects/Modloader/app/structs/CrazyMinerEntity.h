#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrazyMinerEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrazyMinerEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrazyMinerEntity_DEFINED)
#include <Modloader/app/structs/CrazyMinerEntity__Fields.h>
#if defined(IL2CPP_STRUCT_CrazyMinerEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_CrazyMinerEntity_DEFINED
struct CrazyMinerEntity__Class;
struct CrazyMinerEntity {
    struct CrazyMinerEntity__Class* klass;
    MonitorData* monitor;
    struct CrazyMinerEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrazyMinerEntity_FWDDECL)
#define IL2CPP_STRUCT_CrazyMinerEntity_FWDDECL
#include <Modloader/app/structs/CrazyMinerEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_CrazyMinerEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrazyMinerEntity_DEFINED) && !defined(IL2CPP_STRUCT_CrazyMinerEntity_FWDDECL)
#include <Modloader/app/structs/CrazyMinerEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrazyMinerEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
