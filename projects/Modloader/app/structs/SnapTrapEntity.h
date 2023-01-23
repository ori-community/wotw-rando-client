#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SnapTrapEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SnapTrapEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnapTrapEntity_DEFINED)
#include <Modloader/app/structs/SnapTrapEntity__Fields.h>
#if defined(IL2CPP_STRUCT_SnapTrapEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_SnapTrapEntity_DEFINED
struct SnapTrapEntity__Class;
struct SnapTrapEntity {
    struct SnapTrapEntity__Class* klass;
    MonitorData* monitor;
    struct SnapTrapEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SnapTrapEntity_FWDDECL)
#define IL2CPP_STRUCT_SnapTrapEntity_FWDDECL
#include <Modloader/app/structs/SnapTrapEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_SnapTrapEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnapTrapEntity_DEFINED) && !defined(IL2CPP_STRUCT_SnapTrapEntity_FWDDECL)
#include <Modloader/app/structs/SnapTrapEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SnapTrapEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
