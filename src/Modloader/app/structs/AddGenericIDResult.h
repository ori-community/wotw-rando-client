#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AddGenericIDResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AddGenericIDResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddGenericIDResult_DEFINED)
#include <Modloader/app/structs/AddGenericIDResult__Fields.h>
#if defined(IL2CPP_STRUCT_AddGenericIDResult__Fields_DEFINED)
#define IL2CPP_STRUCT_AddGenericIDResult_DEFINED
struct AddGenericIDResult__Class;
struct AddGenericIDResult {
    struct AddGenericIDResult__Class* klass;
    MonitorData* monitor;
    struct AddGenericIDResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AddGenericIDResult_FWDDECL)
#define IL2CPP_STRUCT_AddGenericIDResult_FWDDECL
#include <Modloader/app/structs/AddGenericIDResult__Class.h>
#endif
#undef IL2CPP_STRUCT_AddGenericIDResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddGenericIDResult_DEFINED) && !defined(IL2CPP_STRUCT_AddGenericIDResult_FWDDECL)
#include <Modloader/app/structs/AddGenericIDResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AddGenericIDResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
