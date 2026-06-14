#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceGetReadyState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceGetReadyState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceGetReadyState_DEFINED)
#include <Modloader/app/structs/RaceGetReadyState__Fields.h>
#if defined(IL2CPP_STRUCT_RaceGetReadyState__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceGetReadyState_DEFINED
struct RaceGetReadyState__Class;
struct RaceGetReadyState {
    struct RaceGetReadyState__Class* klass;
    MonitorData* monitor;
    struct RaceGetReadyState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceGetReadyState_FWDDECL)
#define IL2CPP_STRUCT_RaceGetReadyState_FWDDECL
#include <Modloader/app/structs/RaceGetReadyState__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceGetReadyState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceGetReadyState_DEFINED) && !defined(IL2CPP_STRUCT_RaceGetReadyState_FWDDECL)
#include <Modloader/app/structs/RaceGetReadyState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceGetReadyState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
