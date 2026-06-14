#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxOne_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxOne_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOne_DEFINED)
#include <Modloader/app/structs/XboxOne__Fields.h>
#if defined(IL2CPP_STRUCT_XboxOne__Fields_DEFINED)
#define IL2CPP_STRUCT_XboxOne_DEFINED
struct XboxOne__Class;
struct XboxOne {
    struct XboxOne__Class* klass;
    MonitorData* monitor;
    struct XboxOne__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XboxOne_FWDDECL)
#define IL2CPP_STRUCT_XboxOne_FWDDECL
#include <Modloader/app/structs/XboxOne__Class.h>
#endif
#undef IL2CPP_STRUCT_XboxOne_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOne_DEFINED) && !defined(IL2CPP_STRUCT_XboxOne_FWDDECL)
#include <Modloader/app/structs/XboxOne.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxOne.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
