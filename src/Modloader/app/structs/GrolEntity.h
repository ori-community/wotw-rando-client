#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GrolEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GrolEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrolEntity_DEFINED)
#include <Modloader/app/structs/GrolEntity__Fields.h>
#if defined(IL2CPP_STRUCT_GrolEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_GrolEntity_DEFINED
struct GrolEntity__Class;
struct GrolEntity {
    struct GrolEntity__Class* klass;
    MonitorData* monitor;
    struct GrolEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GrolEntity_FWDDECL)
#define IL2CPP_STRUCT_GrolEntity_FWDDECL
#include <Modloader/app/structs/GrolEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_GrolEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrolEntity_DEFINED) && !defined(IL2CPP_STRUCT_GrolEntity_FWDDECL)
#include <Modloader/app/structs/GrolEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GrolEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
