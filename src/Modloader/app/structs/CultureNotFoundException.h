#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CultureNotFoundException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CultureNotFoundException_INITIALIZING
#if !defined(IL2CPP_STRUCT_CultureNotFoundException_DEFINED)
#include <Modloader/app/structs/CultureNotFoundException__Fields.h>
#if defined(IL2CPP_STRUCT_CultureNotFoundException__Fields_DEFINED)
#define IL2CPP_STRUCT_CultureNotFoundException_DEFINED
struct CultureNotFoundException__Class;
struct CultureNotFoundException {
    struct CultureNotFoundException__Class* klass;
    MonitorData* monitor;
    struct CultureNotFoundException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CultureNotFoundException_FWDDECL)
#define IL2CPP_STRUCT_CultureNotFoundException_FWDDECL
#include <Modloader/app/structs/CultureNotFoundException__Class.h>
#endif
#undef IL2CPP_STRUCT_CultureNotFoundException_INITIALIZING
#if !defined(IL2CPP_STRUCT_CultureNotFoundException_DEFINED) && !defined(IL2CPP_STRUCT_CultureNotFoundException_FWDDECL)
#include <Modloader/app/structs/CultureNotFoundException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CultureNotFoundException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
