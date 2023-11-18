#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISerializationBinder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISerializationBinder_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISerializationBinder_DEFINED)
#define IL2CPP_STRUCT_ISerializationBinder_DEFINED
struct ISerializationBinder__Class;
struct ISerializationBinder {
    struct ISerializationBinder__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISerializationBinder_FWDDECL)
#define IL2CPP_STRUCT_ISerializationBinder_FWDDECL
#include <Modloader/app/structs/ISerializationBinder__Class.h>
#endif
#undef IL2CPP_STRUCT_ISerializationBinder_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISerializationBinder_DEFINED) && !defined(IL2CPP_STRUCT_ISerializationBinder_FWDDECL)
#include <Modloader/app/structs/ISerializationBinder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISerializationBinder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
