#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeLabel__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeLabel__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeLabel__Boxed_DEFINED)
#include <Modloader/app/structs/RuntimeLabel.h>
#if defined(IL2CPP_STRUCT_RuntimeLabel_DEFINED)
#define IL2CPP_STRUCT_RuntimeLabel__Boxed_DEFINED
struct RuntimeLabel__Class;
struct RuntimeLabel__Boxed {
    struct RuntimeLabel__Class* klass;
    MonitorData* monitor;
    struct RuntimeLabel fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeLabel__Boxed_FWDDECL)
#define IL2CPP_STRUCT_RuntimeLabel__Boxed_FWDDECL
#include <Modloader/app/structs/RuntimeLabel__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeLabel__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeLabel__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeLabel__Boxed_FWDDECL)
#include <Modloader/app/structs/RuntimeLabel__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeLabel__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
