#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Token__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Token__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Token__Boxed_DEFINED)
#include <Modloader/app/structs/Token.h>
#if defined(IL2CPP_STRUCT_Token_DEFINED)
#define IL2CPP_STRUCT_Token__Boxed_DEFINED
struct Token__Class;
struct Token__Boxed {
    struct Token__Class* klass;
    MonitorData* monitor;
    struct Token fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Token__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Token__Boxed_FWDDECL
#include <Modloader/app/structs/Token__Class.h>
#endif
#undef IL2CPP_STRUCT_Token__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Token__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Token__Boxed_FWDDECL)
#include <Modloader/app/structs/Token__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Token__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
