#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GasballEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GasballEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_GasballEntity_DEFINED)
#include <Modloader/app/structs/GasballEntity__Fields.h>
#if defined(IL2CPP_STRUCT_GasballEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_GasballEntity_DEFINED
struct GasballEntity__Class;
struct GasballEntity {
    struct GasballEntity__Class* klass;
    MonitorData* monitor;
    struct GasballEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GasballEntity_FWDDECL)
#define IL2CPP_STRUCT_GasballEntity_FWDDECL
#include <Modloader/app/structs/GasballEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_GasballEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_GasballEntity_DEFINED) && !defined(IL2CPP_STRUCT_GasballEntity_FWDDECL)
#include <Modloader/app/structs/GasballEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GasballEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
