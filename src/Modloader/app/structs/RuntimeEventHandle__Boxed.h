#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeEventHandle__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeEventHandle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeEventHandle__Boxed_DEFINED)
#include <Modloader/app/structs/RuntimeEventHandle.h>
#if defined(IL2CPP_STRUCT_RuntimeEventHandle_DEFINED)
#define IL2CPP_STRUCT_RuntimeEventHandle__Boxed_DEFINED
struct RuntimeEventHandle__Class;
struct RuntimeEventHandle__Boxed {
    struct RuntimeEventHandle__Class* klass;
    MonitorData* monitor;
    struct RuntimeEventHandle fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeEventHandle__Boxed_FWDDECL)
#define IL2CPP_STRUCT_RuntimeEventHandle__Boxed_FWDDECL
#include <Modloader/app/structs/RuntimeEventHandle__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeEventHandle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeEventHandle__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeEventHandle__Boxed_FWDDECL)
#include <Modloader/app/structs/RuntimeEventHandle__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeEventHandle__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
