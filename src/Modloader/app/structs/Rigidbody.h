#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Rigidbody_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Rigidbody_INITIALIZING
#if !defined(IL2CPP_STRUCT_Rigidbody_DEFINED)
#include <Modloader/app/structs/Rigidbody__Fields.h>
#if defined(IL2CPP_STRUCT_Rigidbody__Fields_DEFINED)
#define IL2CPP_STRUCT_Rigidbody_DEFINED
struct Rigidbody__Class;
struct Rigidbody {
    struct Rigidbody__Class* klass;
    MonitorData* monitor;
    struct Rigidbody__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Rigidbody_FWDDECL)
#define IL2CPP_STRUCT_Rigidbody_FWDDECL
#include <Modloader/app/structs/Rigidbody__Class.h>
#endif
#undef IL2CPP_STRUCT_Rigidbody_INITIALIZING
#if !defined(IL2CPP_STRUCT_Rigidbody_DEFINED) && !defined(IL2CPP_STRUCT_Rigidbody_FWDDECL)
#include <Modloader/app/structs/Rigidbody.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Rigidbody.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
