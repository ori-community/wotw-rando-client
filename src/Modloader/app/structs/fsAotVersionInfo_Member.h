#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsAotVersionInfo_Member_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsAotVersionInfo_Member_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsAotVersionInfo_Member_DEFINED)
#define IL2CPP_STRUCT_fsAotVersionInfo_Member_DEFINED
struct String;
struct fsAotVersionInfo_Member {
    struct String* MemberName;
    struct String* JsonName;
    struct String* StorageType;
    struct String* OverrideConverterType;
};
#endif
#if !defined(IL2CPP_STRUCT_fsAotVersionInfo_Member_FWDDECL)
#define IL2CPP_STRUCT_fsAotVersionInfo_Member_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_fsAotVersionInfo_Member_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsAotVersionInfo_Member_DEFINED) && !defined(IL2CPP_STRUCT_fsAotVersionInfo_Member_FWDDECL)
#include <Modloader/app/structs/fsAotVersionInfo_Member.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsAotVersionInfo_Member.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
