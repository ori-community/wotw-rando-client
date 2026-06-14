#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PiranhaEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PiranhaEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_PiranhaEntity_DEFINED)
#include <Modloader/app/structs/PiranhaEntity__Fields.h>
#if defined(IL2CPP_STRUCT_PiranhaEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_PiranhaEntity_DEFINED
struct PiranhaEntity__Class;
struct PiranhaEntity {
    struct PiranhaEntity__Class* klass;
    MonitorData* monitor;
    struct PiranhaEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PiranhaEntity_FWDDECL)
#define IL2CPP_STRUCT_PiranhaEntity_FWDDECL
#include <Modloader/app/structs/PiranhaEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_PiranhaEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_PiranhaEntity_DEFINED) && !defined(IL2CPP_STRUCT_PiranhaEntity_FWDDECL)
#include <Modloader/app/structs/PiranhaEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PiranhaEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
