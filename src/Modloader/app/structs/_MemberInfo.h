#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT__MemberInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT__MemberInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT__MemberInfo_DEFINED)
#define IL2CPP_STRUCT__MemberInfo_DEFINED
struct _MemberInfo__Class;
struct _MemberInfo {
    struct _MemberInfo__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT__MemberInfo_FWDDECL)
#define IL2CPP_STRUCT__MemberInfo_FWDDECL
#include <Modloader/app/structs/_MemberInfo__Class.h>
#endif
#undef IL2CPP_STRUCT__MemberInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT__MemberInfo_DEFINED) && !defined(IL2CPP_STRUCT__MemberInfo_FWDDECL)
#include <Modloader/app/structs/_MemberInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/_MemberInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
