#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GrdkUser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GrdkUser_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrdkUser_DEFINED)
#include <Modloader/app/structs/GrdkUser__Fields.h>
#if defined(IL2CPP_STRUCT_GrdkUser__Fields_DEFINED)
#define IL2CPP_STRUCT_GrdkUser_DEFINED
struct GrdkUser__Class;
struct GrdkUser {
    struct GrdkUser__Class* klass;
    MonitorData* monitor;
    struct GrdkUser__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GrdkUser_FWDDECL)
#define IL2CPP_STRUCT_GrdkUser_FWDDECL
#include <Modloader/app/structs/GrdkUser__Class.h>
#endif
#undef IL2CPP_STRUCT_GrdkUser_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrdkUser_DEFINED) && !defined(IL2CPP_STRUCT_GrdkUser_FWDDECL)
#include <Modloader/app/structs/GrdkUser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GrdkUser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
