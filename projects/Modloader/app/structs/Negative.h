#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Negative_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Negative_INITIALIZING
#if !defined(IL2CPP_STRUCT_Negative_DEFINED)
#include <Modloader/app/structs/Negative__Fields.h>
#if defined(IL2CPP_STRUCT_Negative__Fields_DEFINED)
#define IL2CPP_STRUCT_Negative_DEFINED
struct Negative__Class;
struct Negative {
    struct Negative__Class* klass;
    MonitorData* monitor;
    struct Negative__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Negative_FWDDECL)
#define IL2CPP_STRUCT_Negative_FWDDECL
#include <Modloader/app/structs/Negative__Class.h>
#endif
#undef IL2CPP_STRUCT_Negative_INITIALIZING
#if !defined(IL2CPP_STRUCT_Negative_DEFINED) && !defined(IL2CPP_STRUCT_Negative_FWDDECL)
#include <Modloader/app/structs/Negative.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Negative.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
