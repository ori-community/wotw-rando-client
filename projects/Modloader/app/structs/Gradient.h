#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Gradient_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Gradient_INITIALIZING
#if !defined(IL2CPP_STRUCT_Gradient_DEFINED)
#include <Modloader/app/structs/Gradient__Fields.h>
#if defined(IL2CPP_STRUCT_Gradient__Fields_DEFINED)
#define IL2CPP_STRUCT_Gradient_DEFINED
struct Gradient__Class;
struct Gradient {
    struct Gradient__Class* klass;
    MonitorData* monitor;
    struct Gradient__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Gradient_FWDDECL)
#define IL2CPP_STRUCT_Gradient_FWDDECL
#include <Modloader/app/structs/Gradient__Class.h>
#endif
#undef IL2CPP_STRUCT_Gradient_INITIALIZING
#if !defined(IL2CPP_STRUCT_Gradient_DEFINED) && !defined(IL2CPP_STRUCT_Gradient_FWDDECL)
#include <Modloader/app/structs/Gradient.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Gradient.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
