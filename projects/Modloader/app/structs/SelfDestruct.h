#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SelfDestruct_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SelfDestruct_INITIALIZING
#if !defined(IL2CPP_STRUCT_SelfDestruct_DEFINED)
#include <Modloader/app/structs/SelfDestruct__Fields.h>
#if defined(IL2CPP_STRUCT_SelfDestruct__Fields_DEFINED)
#define IL2CPP_STRUCT_SelfDestruct_DEFINED
struct SelfDestruct__Class;
struct SelfDestruct {
    struct SelfDestruct__Class* klass;
    MonitorData* monitor;
    struct SelfDestruct__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SelfDestruct_FWDDECL)
#define IL2CPP_STRUCT_SelfDestruct_FWDDECL
#include <Modloader/app/structs/SelfDestruct__Class.h>
#endif
#undef IL2CPP_STRUCT_SelfDestruct_INITIALIZING
#if !defined(IL2CPP_STRUCT_SelfDestruct_DEFINED) && !defined(IL2CPP_STRUCT_SelfDestruct_FWDDECL)
#include <Modloader/app/structs/SelfDestruct.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SelfDestruct.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
