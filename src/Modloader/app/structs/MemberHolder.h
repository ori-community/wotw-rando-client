#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemberHolder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemberHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemberHolder_DEFINED)
#include <Modloader/app/structs/MemberHolder__Fields.h>
#if defined(IL2CPP_STRUCT_MemberHolder__Fields_DEFINED)
#define IL2CPP_STRUCT_MemberHolder_DEFINED
struct MemberHolder__Class;
struct MemberHolder {
    struct MemberHolder__Class* klass;
    MonitorData* monitor;
    struct MemberHolder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MemberHolder_FWDDECL)
#define IL2CPP_STRUCT_MemberHolder_FWDDECL
#include <Modloader/app/structs/MemberHolder__Class.h>
#endif
#undef IL2CPP_STRUCT_MemberHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemberHolder_DEFINED) && !defined(IL2CPP_STRUCT_MemberHolder_FWDDECL)
#include <Modloader/app/structs/MemberHolder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemberHolder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
