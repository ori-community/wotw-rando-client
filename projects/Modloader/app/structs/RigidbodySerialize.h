#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RigidbodySerialize_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RigidbodySerialize_INITIALIZING
#if !defined(IL2CPP_STRUCT_RigidbodySerialize_DEFINED)
#include <Modloader/app/structs/RigidbodySerialize__Fields.h>
#if defined(IL2CPP_STRUCT_RigidbodySerialize__Fields_DEFINED)
#define IL2CPP_STRUCT_RigidbodySerialize_DEFINED
struct RigidbodySerialize__Class;
struct RigidbodySerialize {
    struct RigidbodySerialize__Class* klass;
    MonitorData* monitor;
    struct RigidbodySerialize__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RigidbodySerialize_FWDDECL)
#define IL2CPP_STRUCT_RigidbodySerialize_FWDDECL
#include <Modloader/app/structs/RigidbodySerialize__Class.h>
#endif
#undef IL2CPP_STRUCT_RigidbodySerialize_INITIALIZING
#if !defined(IL2CPP_STRUCT_RigidbodySerialize_DEFINED) && !defined(IL2CPP_STRUCT_RigidbodySerialize_FWDDECL)
#include <Modloader/app/structs/RigidbodySerialize.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RigidbodySerialize.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
