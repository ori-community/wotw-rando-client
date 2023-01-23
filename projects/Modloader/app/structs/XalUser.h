#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XalUser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XalUser_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalUser_DEFINED)
#include <Modloader/app/structs/XalUser__Fields.h>
#if defined(IL2CPP_STRUCT_XalUser__Fields_DEFINED)
#define IL2CPP_STRUCT_XalUser_DEFINED
struct XalUser__Class;
struct XalUser {
    struct XalUser__Class* klass;
    MonitorData* monitor;
    struct XalUser__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XalUser_FWDDECL)
#define IL2CPP_STRUCT_XalUser_FWDDECL
#include <Modloader/app/structs/XalUser__Class.h>
#endif
#undef IL2CPP_STRUCT_XalUser_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalUser_DEFINED) && !defined(IL2CPP_STRUCT_XalUser_FWDDECL)
#include <Modloader/app/structs/XalUser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XalUser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
