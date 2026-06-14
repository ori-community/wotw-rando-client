#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParsingInfo__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParsingInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParsingInfo__Boxed_DEFINED)
#include <Modloader/app/structs/ParsingInfo.h>
#if defined(IL2CPP_STRUCT_ParsingInfo_DEFINED)
#define IL2CPP_STRUCT_ParsingInfo__Boxed_DEFINED
struct ParsingInfo__Class;
struct ParsingInfo__Boxed {
    struct ParsingInfo__Class* klass;
    MonitorData* monitor;
    struct ParsingInfo fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParsingInfo__Boxed_FWDDECL)
#define IL2CPP_STRUCT_ParsingInfo__Boxed_FWDDECL
#include <Modloader/app/structs/ParsingInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_ParsingInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParsingInfo__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_ParsingInfo__Boxed_FWDDECL)
#include <Modloader/app/structs/ParsingInfo__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParsingInfo__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
