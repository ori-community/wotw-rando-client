#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ThreadStaticAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ThreadStaticAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadStaticAttribute_DEFINED)
#define IL2CPP_STRUCT_ThreadStaticAttribute_DEFINED
struct ThreadStaticAttribute__Class;
struct ThreadStaticAttribute {
    struct ThreadStaticAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ThreadStaticAttribute_FWDDECL)
#define IL2CPP_STRUCT_ThreadStaticAttribute_FWDDECL
#include <Modloader/app/structs/ThreadStaticAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_ThreadStaticAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadStaticAttribute_DEFINED) && !defined(IL2CPP_STRUCT_ThreadStaticAttribute_FWDDECL)
#include <Modloader/app/structs/ThreadStaticAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ThreadStaticAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
