#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ThreadSafeAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ThreadSafeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadSafeAttribute_DEFINED)
#include <Modloader/app/structs/ThreadSafeAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_ThreadSafeAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_ThreadSafeAttribute_DEFINED
struct ThreadSafeAttribute__Class;
struct ThreadSafeAttribute {
    struct ThreadSafeAttribute__Class* klass;
    MonitorData* monitor;
    struct ThreadSafeAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ThreadSafeAttribute_FWDDECL)
#define IL2CPP_STRUCT_ThreadSafeAttribute_FWDDECL
#include <Modloader/app/structs/ThreadSafeAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_ThreadSafeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadSafeAttribute_DEFINED) && !defined(IL2CPP_STRUCT_ThreadSafeAttribute_FWDDECL)
#include <Modloader/app/structs/ThreadSafeAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ThreadSafeAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
