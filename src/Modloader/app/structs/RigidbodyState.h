#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RigidbodyState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RigidbodyState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RigidbodyState_DEFINED)
#include <Modloader/app/structs/RigidbodyState__Fields.h>
#if defined(IL2CPP_STRUCT_RigidbodyState__Fields_DEFINED)
#define IL2CPP_STRUCT_RigidbodyState_DEFINED
struct RigidbodyState__Class;
struct RigidbodyState {
    struct RigidbodyState__Class* klass;
    MonitorData* monitor;
    struct RigidbodyState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RigidbodyState_FWDDECL)
#define IL2CPP_STRUCT_RigidbodyState_FWDDECL
#include <Modloader/app/structs/RigidbodyState__Class.h>
#endif
#undef IL2CPP_STRUCT_RigidbodyState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RigidbodyState_DEFINED) && !defined(IL2CPP_STRUCT_RigidbodyState_FWDDECL)
#include <Modloader/app/structs/RigidbodyState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RigidbodyState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
