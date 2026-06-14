#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContrastEnhance_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContrastEnhance_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContrastEnhance_DEFINED)
#include <Modloader/app/structs/ContrastEnhance__Fields.h>
#if defined(IL2CPP_STRUCT_ContrastEnhance__Fields_DEFINED)
#define IL2CPP_STRUCT_ContrastEnhance_DEFINED
struct ContrastEnhance__Class;
struct ContrastEnhance {
    struct ContrastEnhance__Class* klass;
    MonitorData* monitor;
    struct ContrastEnhance__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ContrastEnhance_FWDDECL)
#define IL2CPP_STRUCT_ContrastEnhance_FWDDECL
#include <Modloader/app/structs/ContrastEnhance__Class.h>
#endif
#undef IL2CPP_STRUCT_ContrastEnhance_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContrastEnhance_DEFINED) && !defined(IL2CPP_STRUCT_ContrastEnhance_FWDDECL)
#include <Modloader/app/structs/ContrastEnhance.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContrastEnhance.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
