#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Label__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Label__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Label__Boxed_DEFINED)
#include <Modloader/app/structs/Label.h>
#if defined(IL2CPP_STRUCT_Label_DEFINED)
#define IL2CPP_STRUCT_Label__Boxed_DEFINED
struct Label__Class;
struct Label__Boxed {
    struct Label__Class* klass;
    MonitorData* monitor;
    struct Label fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Label__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Label__Boxed_FWDDECL
#include <Modloader/app/structs/Label__Class.h>
#endif
#undef IL2CPP_STRUCT_Label__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Label__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Label__Boxed_FWDDECL)
#include <Modloader/app/structs/Label__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Label__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
