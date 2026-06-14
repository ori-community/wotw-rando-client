#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Void__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Void__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Void__Boxed_DEFINED)
#include <Modloader/app/structs/Void.h>
#if defined(IL2CPP_STRUCT_Void_DEFINED)
#define IL2CPP_STRUCT_Void__Boxed_DEFINED
struct Void__Class;
struct Void__Boxed {
    struct Void__Class* klass;
    MonitorData* monitor;
    struct Void fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Void__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Void__Boxed_FWDDECL
#include <Modloader/app/structs/Void__Class.h>
#endif
#undef IL2CPP_STRUCT_Void__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Void__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Void__Boxed_FWDDECL)
#include <Modloader/app/structs/Void__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Void__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
