#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OriHeadIkEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OriHeadIkEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriHeadIkEntity_DEFINED)
#include <Modloader/app/structs/OriHeadIkEntity__Fields.h>
#if defined(IL2CPP_STRUCT_OriHeadIkEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_OriHeadIkEntity_DEFINED
struct OriHeadIkEntity__Class;
struct OriHeadIkEntity {
    struct OriHeadIkEntity__Class* klass;
    MonitorData* monitor;
    struct OriHeadIkEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OriHeadIkEntity_FWDDECL)
#define IL2CPP_STRUCT_OriHeadIkEntity_FWDDECL
#include <Modloader/app/structs/OriHeadIkEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_OriHeadIkEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriHeadIkEntity_DEFINED) && !defined(IL2CPP_STRUCT_OriHeadIkEntity_FWDDECL)
#include <Modloader/app/structs/OriHeadIkEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OriHeadIkEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
