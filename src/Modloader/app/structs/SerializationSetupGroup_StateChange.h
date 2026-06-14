#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerializationSetupGroup_StateChange_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerializationSetupGroup_StateChange_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationSetupGroup_StateChange_DEFINED)
#include <Modloader/app/structs/SerializationSetupGroup_StateChange__Fields.h>
#if defined(IL2CPP_STRUCT_SerializationSetupGroup_StateChange__Fields_DEFINED)
#define IL2CPP_STRUCT_SerializationSetupGroup_StateChange_DEFINED
struct SerializationSetupGroup_StateChange__Class;
struct SerializationSetupGroup_StateChange {
    struct SerializationSetupGroup_StateChange__Class* klass;
    MonitorData* monitor;
    struct SerializationSetupGroup_StateChange__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SerializationSetupGroup_StateChange_FWDDECL)
#define IL2CPP_STRUCT_SerializationSetupGroup_StateChange_FWDDECL
#include <Modloader/app/structs/SerializationSetupGroup_StateChange__Class.h>
#endif
#undef IL2CPP_STRUCT_SerializationSetupGroup_StateChange_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationSetupGroup_StateChange_DEFINED) && !defined(IL2CPP_STRUCT_SerializationSetupGroup_StateChange_FWDDECL)
#include <Modloader/app/structs/SerializationSetupGroup_StateChange.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerializationSetupGroup_StateChange.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
