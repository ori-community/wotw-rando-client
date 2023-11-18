#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClearRotation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClearRotation_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClearRotation_DEFINED)
#include <Modloader/app/structs/ClearRotation__Fields.h>
#if defined(IL2CPP_STRUCT_ClearRotation__Fields_DEFINED)
#define IL2CPP_STRUCT_ClearRotation_DEFINED
struct ClearRotation__Class;
struct ClearRotation {
    struct ClearRotation__Class* klass;
    MonitorData* monitor;
    struct ClearRotation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ClearRotation_FWDDECL)
#define IL2CPP_STRUCT_ClearRotation_FWDDECL
#include <Modloader/app/structs/ClearRotation__Class.h>
#endif
#undef IL2CPP_STRUCT_ClearRotation_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClearRotation_DEFINED) && !defined(IL2CPP_STRUCT_ClearRotation_FWDDECL)
#include <Modloader/app/structs/ClearRotation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClearRotation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
