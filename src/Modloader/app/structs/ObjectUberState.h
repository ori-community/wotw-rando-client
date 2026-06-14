#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectUberState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectUberState_DEFINED)
#include <Modloader/app/structs/ObjectUberState__Fields.h>
#if defined(IL2CPP_STRUCT_ObjectUberState__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectUberState_DEFINED
struct ObjectUberState__Class;
struct ObjectUberState {
    struct ObjectUberState__Class* klass;
    MonitorData* monitor;
    struct ObjectUberState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectUberState_FWDDECL)
#define IL2CPP_STRUCT_ObjectUberState_FWDDECL
#include <Modloader/app/structs/ObjectUberState__Class.h>
#endif
#undef IL2CPP_STRUCT_ObjectUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectUberState_DEFINED) && !defined(IL2CPP_STRUCT_ObjectUberState_FWDDECL)
#include <Modloader/app/structs/ObjectUberState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectUberState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
