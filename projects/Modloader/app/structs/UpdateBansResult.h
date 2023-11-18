#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdateBansResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdateBansResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateBansResult_DEFINED)
#include <Modloader/app/structs/UpdateBansResult__Fields.h>
#if defined(IL2CPP_STRUCT_UpdateBansResult__Fields_DEFINED)
#define IL2CPP_STRUCT_UpdateBansResult_DEFINED
struct UpdateBansResult__Class;
struct UpdateBansResult {
    struct UpdateBansResult__Class* klass;
    MonitorData* monitor;
    struct UpdateBansResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpdateBansResult_FWDDECL)
#define IL2CPP_STRUCT_UpdateBansResult_FWDDECL
#include <Modloader/app/structs/UpdateBansResult__Class.h>
#endif
#undef IL2CPP_STRUCT_UpdateBansResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateBansResult_DEFINED) && !defined(IL2CPP_STRUCT_UpdateBansResult_FWDDECL)
#include <Modloader/app/structs/UpdateBansResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdateBansResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
