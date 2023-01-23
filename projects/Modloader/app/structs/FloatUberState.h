#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FloatUberState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FloatUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatUberState_DEFINED)
#include <Modloader/app/structs/FloatUberState__Fields.h>
#if defined(IL2CPP_STRUCT_FloatUberState__Fields_DEFINED)
#define IL2CPP_STRUCT_FloatUberState_DEFINED
struct FloatUberState__Class;
struct FloatUberState {
    struct FloatUberState__Class* klass;
    MonitorData* monitor;
    struct FloatUberState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FloatUberState_FWDDECL)
#define IL2CPP_STRUCT_FloatUberState_FWDDECL
#include <Modloader/app/structs/FloatUberState__Class.h>
#endif
#undef IL2CPP_STRUCT_FloatUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatUberState_DEFINED) && !defined(IL2CPP_STRUCT_FloatUberState_FWDDECL)
#include <Modloader/app/structs/FloatUberState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FloatUberState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
