#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DefaultSerializationBinder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DefaultSerializationBinder_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultSerializationBinder_DEFINED)
#include <Modloader/app/structs/DefaultSerializationBinder__Fields.h>
#if defined(IL2CPP_STRUCT_DefaultSerializationBinder__Fields_DEFINED)
#define IL2CPP_STRUCT_DefaultSerializationBinder_DEFINED
struct DefaultSerializationBinder__Class;
struct DefaultSerializationBinder {
    struct DefaultSerializationBinder__Class* klass;
    MonitorData* monitor;
    struct DefaultSerializationBinder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DefaultSerializationBinder_FWDDECL)
#define IL2CPP_STRUCT_DefaultSerializationBinder_FWDDECL
#include <Modloader/app/structs/DefaultSerializationBinder__Class.h>
#endif
#undef IL2CPP_STRUCT_DefaultSerializationBinder_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultSerializationBinder_DEFINED) && !defined(IL2CPP_STRUCT_DefaultSerializationBinder_FWDDECL)
#include <Modloader/app/structs/DefaultSerializationBinder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DefaultSerializationBinder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
