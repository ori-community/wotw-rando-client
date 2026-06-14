#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameObjectDataProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameObjectDataProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameObjectDataProvider_DEFINED)
#include <Modloader/app/structs/GameObjectDataProvider__Fields.h>
#if defined(IL2CPP_STRUCT_GameObjectDataProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_GameObjectDataProvider_DEFINED
struct GameObjectDataProvider__Class;
struct GameObjectDataProvider {
    struct GameObjectDataProvider__Class* klass;
    MonitorData* monitor;
    struct GameObjectDataProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameObjectDataProvider_FWDDECL)
#define IL2CPP_STRUCT_GameObjectDataProvider_FWDDECL
#include <Modloader/app/structs/GameObjectDataProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_GameObjectDataProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameObjectDataProvider_DEFINED) && !defined(IL2CPP_STRUCT_GameObjectDataProvider_FWDDECL)
#include <Modloader/app/structs/GameObjectDataProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameObjectDataProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
