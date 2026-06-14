#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StringBuffer__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StringBuffer__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringBuffer__Boxed_DEFINED)
#include <Modloader/app/structs/StringBuffer.h>
#if defined(IL2CPP_STRUCT_StringBuffer_DEFINED)
#define IL2CPP_STRUCT_StringBuffer__Boxed_DEFINED
struct StringBuffer__Class;
struct StringBuffer__Boxed {
    struct StringBuffer__Class* klass;
    MonitorData* monitor;
    struct StringBuffer fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StringBuffer__Boxed_FWDDECL)
#define IL2CPP_STRUCT_StringBuffer__Boxed_FWDDECL
#include <Modloader/app/structs/StringBuffer__Class.h>
#endif
#undef IL2CPP_STRUCT_StringBuffer__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringBuffer__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_StringBuffer__Boxed_FWDDECL)
#include <Modloader/app/structs/StringBuffer__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StringBuffer__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
