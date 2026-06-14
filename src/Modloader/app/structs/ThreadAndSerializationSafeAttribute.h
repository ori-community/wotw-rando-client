#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ThreadAndSerializationSafeAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ThreadAndSerializationSafeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadAndSerializationSafeAttribute_DEFINED)
#define IL2CPP_STRUCT_ThreadAndSerializationSafeAttribute_DEFINED
struct ThreadAndSerializationSafeAttribute__Class;
struct ThreadAndSerializationSafeAttribute {
    struct ThreadAndSerializationSafeAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ThreadAndSerializationSafeAttribute_FWDDECL)
#define IL2CPP_STRUCT_ThreadAndSerializationSafeAttribute_FWDDECL
#include <Modloader/app/structs/ThreadAndSerializationSafeAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_ThreadAndSerializationSafeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadAndSerializationSafeAttribute_DEFINED) && !defined(IL2CPP_STRUCT_ThreadAndSerializationSafeAttribute_FWDDECL)
#include <Modloader/app/structs/ThreadAndSerializationSafeAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ThreadAndSerializationSafeAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
