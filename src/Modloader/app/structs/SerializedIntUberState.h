#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerializedIntUberState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerializedIntUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializedIntUberState_DEFINED)
#include <Modloader/app/structs/SerializedIntUberState__Fields.h>
#if defined(IL2CPP_STRUCT_SerializedIntUberState__Fields_DEFINED)
#define IL2CPP_STRUCT_SerializedIntUberState_DEFINED
struct SerializedIntUberState__Class;
struct SerializedIntUberState {
    struct SerializedIntUberState__Class* klass;
    MonitorData* monitor;
    struct SerializedIntUberState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SerializedIntUberState_FWDDECL)
#define IL2CPP_STRUCT_SerializedIntUberState_FWDDECL
#include <Modloader/app/structs/SerializedIntUberState__Class.h>
#endif
#undef IL2CPP_STRUCT_SerializedIntUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializedIntUberState_DEFINED) && !defined(IL2CPP_STRUCT_SerializedIntUberState_FWDDECL)
#include <Modloader/app/structs/SerializedIntUberState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerializedIntUberState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
