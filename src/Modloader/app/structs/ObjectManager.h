#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectManager_DEFINED)
#include <Modloader/app/structs/ObjectManager__Fields.h>
#if defined(IL2CPP_STRUCT_ObjectManager__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectManager_DEFINED
struct ObjectManager__Class;
struct ObjectManager {
    struct ObjectManager__Class* klass;
    MonitorData* monitor;
    struct ObjectManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectManager_FWDDECL)
#define IL2CPP_STRUCT_ObjectManager_FWDDECL
#include <Modloader/app/structs/ObjectManager__Class.h>
#endif
#undef IL2CPP_STRUCT_ObjectManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectManager_DEFINED) && !defined(IL2CPP_STRUCT_ObjectManager_FWDDECL)
#include <Modloader/app/structs/ObjectManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
