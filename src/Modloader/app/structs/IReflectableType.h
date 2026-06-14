#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IReflectableType_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IReflectableType_INITIALIZING
#if !defined(IL2CPP_STRUCT_IReflectableType_DEFINED)
#define IL2CPP_STRUCT_IReflectableType_DEFINED
struct IReflectableType__Class;
struct IReflectableType {
    struct IReflectableType__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IReflectableType_FWDDECL)
#define IL2CPP_STRUCT_IReflectableType_FWDDECL
#include <Modloader/app/structs/IReflectableType__Class.h>
#endif
#undef IL2CPP_STRUCT_IReflectableType_INITIALIZING
#if !defined(IL2CPP_STRUCT_IReflectableType_DEFINED) && !defined(IL2CPP_STRUCT_IReflectableType_FWDDECL)
#include <Modloader/app/structs/IReflectableType.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IReflectableType.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
