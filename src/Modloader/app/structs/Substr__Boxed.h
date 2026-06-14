#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Substr__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Substr__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Substr__Boxed_DEFINED)
#include <Modloader/app/structs/Substr.h>
#if defined(IL2CPP_STRUCT_Substr_DEFINED)
#define IL2CPP_STRUCT_Substr__Boxed_DEFINED
struct Substr__Class;
struct Substr__Boxed {
    struct Substr__Class* klass;
    MonitorData* monitor;
    struct Substr fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Substr__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Substr__Boxed_FWDDECL
#include <Modloader/app/structs/Substr__Class.h>
#endif
#undef IL2CPP_STRUCT_Substr__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Substr__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Substr__Boxed_FWDDECL)
#include <Modloader/app/structs/Substr__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Substr__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
