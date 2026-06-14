#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AngularSpring_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AngularSpring_INITIALIZING
#if !defined(IL2CPP_STRUCT_AngularSpring_DEFINED)
#include <Modloader/app/structs/AngularSpring__Fields.h>
#if defined(IL2CPP_STRUCT_AngularSpring__Fields_DEFINED)
#define IL2CPP_STRUCT_AngularSpring_DEFINED
struct AngularSpring__Class;
struct AngularSpring {
    struct AngularSpring__Class* klass;
    MonitorData* monitor;
    struct AngularSpring__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AngularSpring_FWDDECL)
#define IL2CPP_STRUCT_AngularSpring_FWDDECL
#include <Modloader/app/structs/AngularSpring__Class.h>
#endif
#undef IL2CPP_STRUCT_AngularSpring_INITIALIZING
#if !defined(IL2CPP_STRUCT_AngularSpring_DEFINED) && !defined(IL2CPP_STRUCT_AngularSpring_FWDDECL)
#include <Modloader/app/structs/AngularSpring.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AngularSpring.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
