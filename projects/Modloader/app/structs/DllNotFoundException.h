#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DllNotFoundException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DllNotFoundException_INITIALIZING
#if !defined(IL2CPP_STRUCT_DllNotFoundException_DEFINED)
#include <Modloader/app/structs/DllNotFoundException__Fields.h>
#if defined(IL2CPP_STRUCT_DllNotFoundException__Fields_DEFINED)
#define IL2CPP_STRUCT_DllNotFoundException_DEFINED
struct DllNotFoundException__Class;
struct DllNotFoundException {
    struct DllNotFoundException__Class* klass;
    MonitorData* monitor;
    struct DllNotFoundException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DllNotFoundException_FWDDECL)
#define IL2CPP_STRUCT_DllNotFoundException_FWDDECL
#include <Modloader/app/structs/DllNotFoundException__Class.h>
#endif
#undef IL2CPP_STRUCT_DllNotFoundException_INITIALIZING
#if !defined(IL2CPP_STRUCT_DllNotFoundException_DEFINED) && !defined(IL2CPP_STRUCT_DllNotFoundException_FWDDECL)
#include <Modloader/app/structs/DllNotFoundException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DllNotFoundException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
