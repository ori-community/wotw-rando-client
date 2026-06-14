#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Member_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Member_INITIALIZING
#if !defined(IL2CPP_STRUCT_Member_DEFINED)
#include <Modloader/app/structs/Member__Fields.h>
#if defined(IL2CPP_STRUCT_Member__Fields_DEFINED)
#define IL2CPP_STRUCT_Member_DEFINED
struct Member__Class;
struct Member {
    struct Member__Class* klass;
    MonitorData* monitor;
    struct Member__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Member_FWDDECL)
#define IL2CPP_STRUCT_Member_FWDDECL
#include <Modloader/app/structs/Member__Class.h>
#endif
#undef IL2CPP_STRUCT_Member_INITIALIZING
#if !defined(IL2CPP_STRUCT_Member_DEFINED) && !defined(IL2CPP_STRUCT_Member_FWDDECL)
#include <Modloader/app/structs/Member.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Member.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
