#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerializationObjectManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerializationObjectManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationObjectManager_DEFINED)
#include <Modloader/app/structs/SerializationObjectManager__Fields.h>
#if defined(IL2CPP_STRUCT_SerializationObjectManager__Fields_DEFINED)
#define IL2CPP_STRUCT_SerializationObjectManager_DEFINED
struct SerializationObjectManager__Class;
struct SerializationObjectManager {
    struct SerializationObjectManager__Class* klass;
    MonitorData* monitor;
    struct SerializationObjectManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SerializationObjectManager_FWDDECL)
#define IL2CPP_STRUCT_SerializationObjectManager_FWDDECL
#include <Modloader/app/structs/SerializationObjectManager__Class.h>
#endif
#undef IL2CPP_STRUCT_SerializationObjectManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationObjectManager_DEFINED) && !defined(IL2CPP_STRUCT_SerializationObjectManager_FWDDECL)
#include <Modloader/app/structs/SerializationObjectManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerializationObjectManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
