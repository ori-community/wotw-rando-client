#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AreaComment_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AreaComment_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaComment_DEFINED)
#include <Modloader/app/structs/AreaComment__Fields.h>
#if defined(IL2CPP_STRUCT_AreaComment__Fields_DEFINED)
#define IL2CPP_STRUCT_AreaComment_DEFINED
struct AreaComment__Class;
struct AreaComment {
    struct AreaComment__Class* klass;
    MonitorData* monitor;
    struct AreaComment__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AreaComment_FWDDECL)
#define IL2CPP_STRUCT_AreaComment_FWDDECL
#include <Modloader/app/structs/AreaComment__Class.h>
#endif
#undef IL2CPP_STRUCT_AreaComment_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaComment_DEFINED) && !defined(IL2CPP_STRUCT_AreaComment_FWDDECL)
#include <Modloader/app/structs/AreaComment.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AreaComment.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
