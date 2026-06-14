#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AddPlayerTagResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AddPlayerTagResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddPlayerTagResult_DEFINED)
#include <Modloader/app/structs/AddPlayerTagResult__Fields.h>
#if defined(IL2CPP_STRUCT_AddPlayerTagResult__Fields_DEFINED)
#define IL2CPP_STRUCT_AddPlayerTagResult_DEFINED
struct AddPlayerTagResult__Class;
struct AddPlayerTagResult {
    struct AddPlayerTagResult__Class* klass;
    MonitorData* monitor;
    struct AddPlayerTagResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AddPlayerTagResult_FWDDECL)
#define IL2CPP_STRUCT_AddPlayerTagResult_FWDDECL
#include <Modloader/app/structs/AddPlayerTagResult__Class.h>
#endif
#undef IL2CPP_STRUCT_AddPlayerTagResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddPlayerTagResult_DEFINED) && !defined(IL2CPP_STRUCT_AddPlayerTagResult_FWDDECL)
#include <Modloader/app/structs/AddPlayerTagResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AddPlayerTagResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
