#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SafeSerializationManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SafeSerializationManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeSerializationManager_DEFINED)
#include <Modloader/app/structs/SafeSerializationManager__Fields.h>
#if defined(IL2CPP_STRUCT_SafeSerializationManager__Fields_DEFINED)
#define IL2CPP_STRUCT_SafeSerializationManager_DEFINED
struct SafeSerializationManager__Class;
struct SafeSerializationManager {
    struct SafeSerializationManager__Class* klass;
    MonitorData* monitor;
    struct SafeSerializationManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SafeSerializationManager_FWDDECL)
#define IL2CPP_STRUCT_SafeSerializationManager_FWDDECL
#include <Modloader/app/structs/SafeSerializationManager__Class.h>
#endif
#undef IL2CPP_STRUCT_SafeSerializationManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeSerializationManager_DEFINED) && !defined(IL2CPP_STRUCT_SafeSerializationManager_FWDDECL)
#include <Modloader/app/structs/SafeSerializationManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SafeSerializationManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
