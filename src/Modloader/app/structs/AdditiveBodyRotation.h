#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AdditiveBodyRotation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AdditiveBodyRotation_INITIALIZING
#if !defined(IL2CPP_STRUCT_AdditiveBodyRotation_DEFINED)
#include <Modloader/app/structs/AdditiveBodyRotation__Fields.h>
#if defined(IL2CPP_STRUCT_AdditiveBodyRotation__Fields_DEFINED)
#define IL2CPP_STRUCT_AdditiveBodyRotation_DEFINED
struct AdditiveBodyRotation__Class;
struct AdditiveBodyRotation {
    struct AdditiveBodyRotation__Class* klass;
    MonitorData* monitor;
    struct AdditiveBodyRotation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AdditiveBodyRotation_FWDDECL)
#define IL2CPP_STRUCT_AdditiveBodyRotation_FWDDECL
#include <Modloader/app/structs/AdditiveBodyRotation__Class.h>
#endif
#undef IL2CPP_STRUCT_AdditiveBodyRotation_INITIALIZING
#if !defined(IL2CPP_STRUCT_AdditiveBodyRotation_DEFINED) && !defined(IL2CPP_STRUCT_AdditiveBodyRotation_FWDDECL)
#include <Modloader/app/structs/AdditiveBodyRotation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AdditiveBodyRotation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
