#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BooleanUberState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BooleanUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_BooleanUberState_DEFINED)
#include <Modloader/app/structs/BooleanUberState__Fields.h>
#if defined(IL2CPP_STRUCT_BooleanUberState__Fields_DEFINED)
#define IL2CPP_STRUCT_BooleanUberState_DEFINED
struct BooleanUberState__Class;
struct BooleanUberState {
    struct BooleanUberState__Class* klass;
    MonitorData* monitor;
    struct BooleanUberState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BooleanUberState_FWDDECL)
#define IL2CPP_STRUCT_BooleanUberState_FWDDECL
#include <Modloader/app/structs/BooleanUberState__Class.h>
#endif
#undef IL2CPP_STRUCT_BooleanUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_BooleanUberState_DEFINED) && !defined(IL2CPP_STRUCT_BooleanUberState_FWDDECL)
#include <Modloader/app/structs/BooleanUberState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BooleanUberState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
