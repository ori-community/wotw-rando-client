#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IConstrainedEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IConstrainedEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_IConstrainedEntity_DEFINED)
#define IL2CPP_STRUCT_IConstrainedEntity_DEFINED
struct IConstrainedEntity__Class;
struct IConstrainedEntity {
    struct IConstrainedEntity__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IConstrainedEntity_FWDDECL)
#define IL2CPP_STRUCT_IConstrainedEntity_FWDDECL
#include <Modloader/app/structs/IConstrainedEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_IConstrainedEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_IConstrainedEntity_DEFINED) && !defined(IL2CPP_STRUCT_IConstrainedEntity_FWDDECL)
#include <Modloader/app/structs/IConstrainedEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IConstrainedEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
