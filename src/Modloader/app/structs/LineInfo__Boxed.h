#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LineInfo__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LineInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_LineInfo__Boxed_DEFINED)
#include <Modloader/app/structs/LineInfo.h>
#if defined(IL2CPP_STRUCT_LineInfo_DEFINED)
#define IL2CPP_STRUCT_LineInfo__Boxed_DEFINED
struct LineInfo__Class;
struct LineInfo__Boxed {
    struct LineInfo__Class* klass;
    MonitorData* monitor;
    struct LineInfo fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LineInfo__Boxed_FWDDECL)
#define IL2CPP_STRUCT_LineInfo__Boxed_FWDDECL
#include <Modloader/app/structs/LineInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_LineInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_LineInfo__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_LineInfo__Boxed_FWDDECL)
#include <Modloader/app/structs/LineInfo__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LineInfo__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
