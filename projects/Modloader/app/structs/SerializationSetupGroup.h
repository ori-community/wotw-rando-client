#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerializationSetupGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerializationSetupGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationSetupGroup_DEFINED)
#include <Modloader/app/structs/SerializationSetupGroup__Fields.h>
#if defined(IL2CPP_STRUCT_SerializationSetupGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_SerializationSetupGroup_DEFINED
struct SerializationSetupGroup__Class;
struct SerializationSetupGroup {
    struct SerializationSetupGroup__Class* klass;
    MonitorData* monitor;
    struct SerializationSetupGroup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SerializationSetupGroup_FWDDECL)
#define IL2CPP_STRUCT_SerializationSetupGroup_FWDDECL
#include <Modloader/app/structs/SerializationSetupGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_SerializationSetupGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationSetupGroup_DEFINED) && !defined(IL2CPP_STRUCT_SerializationSetupGroup_FWDDECL)
#include <Modloader/app/structs/SerializationSetupGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerializationSetupGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
