#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISerializationSurrogate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISerializationSurrogate_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISerializationSurrogate_DEFINED)
#define IL2CPP_STRUCT_ISerializationSurrogate_DEFINED
struct ISerializationSurrogate__Class;
struct ISerializationSurrogate {
    struct ISerializationSurrogate__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISerializationSurrogate_FWDDECL)
#define IL2CPP_STRUCT_ISerializationSurrogate_FWDDECL
#include <Modloader/app/structs/ISerializationSurrogate__Class.h>
#endif
#undef IL2CPP_STRUCT_ISerializationSurrogate_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISerializationSurrogate_DEFINED) && !defined(IL2CPP_STRUCT_ISerializationSurrogate_FWDDECL)
#include <Modloader/app/structs/ISerializationSurrogate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISerializationSurrogate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
