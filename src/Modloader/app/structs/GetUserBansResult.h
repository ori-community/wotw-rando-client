#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetUserBansResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetUserBansResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetUserBansResult_DEFINED)
#include <Modloader/app/structs/GetUserBansResult__Fields.h>
#if defined(IL2CPP_STRUCT_GetUserBansResult__Fields_DEFINED)
#define IL2CPP_STRUCT_GetUserBansResult_DEFINED
struct GetUserBansResult__Class;
struct GetUserBansResult {
    struct GetUserBansResult__Class* klass;
    MonitorData* monitor;
    struct GetUserBansResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetUserBansResult_FWDDECL)
#define IL2CPP_STRUCT_GetUserBansResult_FWDDECL
#include <Modloader/app/structs/GetUserBansResult__Class.h>
#endif
#undef IL2CPP_STRUCT_GetUserBansResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetUserBansResult_DEFINED) && !defined(IL2CPP_STRUCT_GetUserBansResult_FWDDECL)
#include <Modloader/app/structs/GetUserBansResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetUserBansResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
