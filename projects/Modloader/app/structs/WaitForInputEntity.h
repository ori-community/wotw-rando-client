#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitForInputEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitForInputEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForInputEntity_DEFINED)
#include <Modloader/app/structs/WaitForInputEntity__Fields.h>
#if defined(IL2CPP_STRUCT_WaitForInputEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_WaitForInputEntity_DEFINED
struct WaitForInputEntity__Class;
struct WaitForInputEntity {
    struct WaitForInputEntity__Class* klass;
    MonitorData* monitor;
    struct WaitForInputEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaitForInputEntity_FWDDECL)
#define IL2CPP_STRUCT_WaitForInputEntity_FWDDECL
#include <Modloader/app/structs/WaitForInputEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_WaitForInputEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForInputEntity_DEFINED) && !defined(IL2CPP_STRUCT_WaitForInputEntity_FWDDECL)
#include <Modloader/app/structs/WaitForInputEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitForInputEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
