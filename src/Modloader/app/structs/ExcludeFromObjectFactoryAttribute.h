#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExcludeFromObjectFactoryAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExcludeFromObjectFactoryAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExcludeFromObjectFactoryAttribute_DEFINED)
#define IL2CPP_STRUCT_ExcludeFromObjectFactoryAttribute_DEFINED
struct ExcludeFromObjectFactoryAttribute__Class;
struct ExcludeFromObjectFactoryAttribute {
    struct ExcludeFromObjectFactoryAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ExcludeFromObjectFactoryAttribute_FWDDECL)
#define IL2CPP_STRUCT_ExcludeFromObjectFactoryAttribute_FWDDECL
#include <Modloader/app/structs/ExcludeFromObjectFactoryAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_ExcludeFromObjectFactoryAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExcludeFromObjectFactoryAttribute_DEFINED) && !defined(IL2CPP_STRUCT_ExcludeFromObjectFactoryAttribute_FWDDECL)
#include <Modloader/app/structs/ExcludeFromObjectFactoryAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExcludeFromObjectFactoryAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
