#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IntUberState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IntUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntUberState_DEFINED)
#include <Modloader/app/structs/IntUberState__Fields.h>
#if defined(IL2CPP_STRUCT_IntUberState__Fields_DEFINED)
#define IL2CPP_STRUCT_IntUberState_DEFINED
struct IntUberState__Class;
struct IntUberState {
    struct IntUberState__Class* klass;
    MonitorData* monitor;
    struct IntUberState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IntUberState_FWDDECL)
#define IL2CPP_STRUCT_IntUberState_FWDDECL
#include <Modloader/app/structs/IntUberState__Class.h>
#endif
#undef IL2CPP_STRUCT_IntUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntUberState_DEFINED) && !defined(IL2CPP_STRUCT_IntUberState_FWDDECL)
#include <Modloader/app/structs/IntUberState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IntUberState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
