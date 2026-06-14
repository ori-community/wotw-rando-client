#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InputBasedStringProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InputBasedStringProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputBasedStringProvider_DEFINED)
#include <Modloader/app/structs/InputBasedStringProvider__Fields.h>
#if defined(IL2CPP_STRUCT_InputBasedStringProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_InputBasedStringProvider_DEFINED
struct InputBasedStringProvider__Class;
struct InputBasedStringProvider {
    struct InputBasedStringProvider__Class* klass;
    MonitorData* monitor;
    struct InputBasedStringProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InputBasedStringProvider_FWDDECL)
#define IL2CPP_STRUCT_InputBasedStringProvider_FWDDECL
#include <Modloader/app/structs/InputBasedStringProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_InputBasedStringProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputBasedStringProvider_DEFINED) && !defined(IL2CPP_STRUCT_InputBasedStringProvider_FWDDECL)
#include <Modloader/app/structs/InputBasedStringProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InputBasedStringProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
