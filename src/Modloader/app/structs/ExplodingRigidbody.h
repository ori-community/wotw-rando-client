#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExplodingRigidbody_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExplodingRigidbody_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExplodingRigidbody_DEFINED)
#include <Modloader/app/structs/ExplodingRigidbody__Fields.h>
#if defined(IL2CPP_STRUCT_ExplodingRigidbody__Fields_DEFINED)
#define IL2CPP_STRUCT_ExplodingRigidbody_DEFINED
struct ExplodingRigidbody__Class;
struct ExplodingRigidbody {
    struct ExplodingRigidbody__Class* klass;
    MonitorData* monitor;
    struct ExplodingRigidbody__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExplodingRigidbody_FWDDECL)
#define IL2CPP_STRUCT_ExplodingRigidbody_FWDDECL
#include <Modloader/app/structs/ExplodingRigidbody__Class.h>
#endif
#undef IL2CPP_STRUCT_ExplodingRigidbody_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExplodingRigidbody_DEFINED) && !defined(IL2CPP_STRUCT_ExplodingRigidbody_FWDDECL)
#include <Modloader/app/structs/ExplodingRigidbody.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExplodingRigidbody.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
