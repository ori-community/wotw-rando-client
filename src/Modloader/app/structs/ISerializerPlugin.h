#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISerializerPlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISerializerPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISerializerPlugin_DEFINED)
#define IL2CPP_STRUCT_ISerializerPlugin_DEFINED
struct ISerializerPlugin__Class;
struct ISerializerPlugin {
    struct ISerializerPlugin__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISerializerPlugin_FWDDECL)
#define IL2CPP_STRUCT_ISerializerPlugin_FWDDECL
#include <Modloader/app/structs/ISerializerPlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_ISerializerPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISerializerPlugin_DEFINED) && !defined(IL2CPP_STRUCT_ISerializerPlugin_FWDDECL)
#include <Modloader/app/structs/ISerializerPlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISerializerPlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
