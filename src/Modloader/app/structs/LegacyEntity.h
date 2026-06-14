#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyEntity_DEFINED)
#include <Modloader/app/structs/LegacyEntity__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyEntity_DEFINED
struct LegacyEntity__Class;
struct LegacyEntity {
    struct LegacyEntity__Class* klass;
    MonitorData* monitor;
    struct LegacyEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyEntity_FWDDECL)
#define IL2CPP_STRUCT_LegacyEntity_FWDDECL
#include <Modloader/app/structs/LegacyEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_LegacyEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyEntity_DEFINED) && !defined(IL2CPP_STRUCT_LegacyEntity_FWDDECL)
#include <Modloader/app/structs/LegacyEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
