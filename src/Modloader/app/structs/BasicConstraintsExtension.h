#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BasicConstraintsExtension_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BasicConstraintsExtension_INITIALIZING
#if !defined(IL2CPP_STRUCT_BasicConstraintsExtension_DEFINED)
#include <Modloader/app/structs/BasicConstraintsExtension__Fields.h>
#if defined(IL2CPP_STRUCT_BasicConstraintsExtension__Fields_DEFINED)
#define IL2CPP_STRUCT_BasicConstraintsExtension_DEFINED
struct BasicConstraintsExtension__Class;
struct BasicConstraintsExtension {
    struct BasicConstraintsExtension__Class* klass;
    MonitorData* monitor;
    struct BasicConstraintsExtension__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BasicConstraintsExtension_FWDDECL)
#define IL2CPP_STRUCT_BasicConstraintsExtension_FWDDECL
#include <Modloader/app/structs/BasicConstraintsExtension__Class.h>
#endif
#undef IL2CPP_STRUCT_BasicConstraintsExtension_INITIALIZING
#if !defined(IL2CPP_STRUCT_BasicConstraintsExtension_DEFINED) && !defined(IL2CPP_STRUCT_BasicConstraintsExtension_FWDDECL)
#include <Modloader/app/structs/BasicConstraintsExtension.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BasicConstraintsExtension.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
