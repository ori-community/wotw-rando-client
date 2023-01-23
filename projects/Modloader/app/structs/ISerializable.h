#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISerializable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISerializable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISerializable_DEFINED)
#define IL2CPP_STRUCT_ISerializable_DEFINED
struct ISerializable__Class;
struct ISerializable {
    struct ISerializable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISerializable_FWDDECL)
#define IL2CPP_STRUCT_ISerializable_FWDDECL
#include <Modloader/app/structs/ISerializable__Class.h>
#endif
#undef IL2CPP_STRUCT_ISerializable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISerializable_DEFINED) && !defined(IL2CPP_STRUCT_ISerializable_FWDDECL)
#include <Modloader/app/structs/ISerializable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISerializable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
