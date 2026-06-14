#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrabEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrabEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrabEntity_DEFINED)
#include <Modloader/app/structs/CrabEntity__Fields.h>
#if defined(IL2CPP_STRUCT_CrabEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_CrabEntity_DEFINED
struct CrabEntity__Class;
struct CrabEntity {
    struct CrabEntity__Class* klass;
    MonitorData* monitor;
    struct CrabEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrabEntity_FWDDECL)
#define IL2CPP_STRUCT_CrabEntity_FWDDECL
#include <Modloader/app/structs/CrabEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_CrabEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrabEntity_DEFINED) && !defined(IL2CPP_STRUCT_CrabEntity_FWDDECL)
#include <Modloader/app/structs/CrabEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrabEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
