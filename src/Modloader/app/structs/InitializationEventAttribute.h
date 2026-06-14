#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InitializationEventAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InitializationEventAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_InitializationEventAttribute_DEFINED)
#include <Modloader/app/structs/InitializationEventAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_InitializationEventAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_InitializationEventAttribute_DEFINED
struct InitializationEventAttribute__Class;
struct InitializationEventAttribute {
    struct InitializationEventAttribute__Class* klass;
    MonitorData* monitor;
    struct InitializationEventAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InitializationEventAttribute_FWDDECL)
#define IL2CPP_STRUCT_InitializationEventAttribute_FWDDECL
#include <Modloader/app/structs/InitializationEventAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_InitializationEventAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_InitializationEventAttribute_DEFINED) && !defined(IL2CPP_STRUCT_InitializationEventAttribute_FWDDECL)
#include <Modloader/app/structs/InitializationEventAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InitializationEventAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
