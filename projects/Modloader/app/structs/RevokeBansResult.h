#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RevokeBansResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RevokeBansResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_RevokeBansResult_DEFINED)
#include <Modloader/app/structs/RevokeBansResult__Fields.h>
#if defined(IL2CPP_STRUCT_RevokeBansResult__Fields_DEFINED)
#define IL2CPP_STRUCT_RevokeBansResult_DEFINED
struct RevokeBansResult__Class;
struct RevokeBansResult {
    struct RevokeBansResult__Class* klass;
    MonitorData* monitor;
    struct RevokeBansResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RevokeBansResult_FWDDECL)
#define IL2CPP_STRUCT_RevokeBansResult_FWDDECL
#include <Modloader/app/structs/RevokeBansResult__Class.h>
#endif
#undef IL2CPP_STRUCT_RevokeBansResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_RevokeBansResult_DEFINED) && !defined(IL2CPP_STRUCT_RevokeBansResult_FWDDECL)
#include <Modloader/app/structs/RevokeBansResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RevokeBansResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
