#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoManager_DEFINED)
#include <Modloader/app/structs/MonoManager__Fields.h>
#if defined(IL2CPP_STRUCT_MonoManager__Fields_DEFINED)
#define IL2CPP_STRUCT_MonoManager_DEFINED
struct MonoManager__Class;
struct MonoManager {
    struct MonoManager__Class* klass;
    MonitorData* monitor;
    struct MonoManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoManager_FWDDECL)
#define IL2CPP_STRUCT_MonoManager_FWDDECL
#include <Modloader/app/structs/MonoManager__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoManager_DEFINED) && !defined(IL2CPP_STRUCT_MonoManager_FWDDECL)
#include <Modloader/app/structs/MonoManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
