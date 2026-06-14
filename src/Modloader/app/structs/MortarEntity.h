#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MortarEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MortarEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarEntity_DEFINED)
#include <Modloader/app/structs/MortarEntity__Fields.h>
#if defined(IL2CPP_STRUCT_MortarEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_MortarEntity_DEFINED
struct MortarEntity__Class;
struct MortarEntity {
    struct MortarEntity__Class* klass;
    MonitorData* monitor;
    struct MortarEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MortarEntity_FWDDECL)
#define IL2CPP_STRUCT_MortarEntity_FWDDECL
#include <Modloader/app/structs/MortarEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_MortarEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarEntity_DEFINED) && !defined(IL2CPP_STRUCT_MortarEntity_FWDDECL)
#include <Modloader/app/structs/MortarEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MortarEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
