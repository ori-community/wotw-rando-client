#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EmptyResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EmptyResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_EmptyResult_DEFINED)
#include <Modloader/app/structs/EmptyResult__Fields.h>
#if defined(IL2CPP_STRUCT_EmptyResult__Fields_DEFINED)
#define IL2CPP_STRUCT_EmptyResult_DEFINED
struct EmptyResult__Class;
struct EmptyResult {
    struct EmptyResult__Class* klass;
    MonitorData* monitor;
    struct EmptyResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EmptyResult_FWDDECL)
#define IL2CPP_STRUCT_EmptyResult_FWDDECL
#include <Modloader/app/structs/EmptyResult__Class.h>
#endif
#undef IL2CPP_STRUCT_EmptyResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_EmptyResult_DEFINED) && !defined(IL2CPP_STRUCT_EmptyResult_FWDDECL)
#include <Modloader/app/structs/EmptyResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EmptyResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
