#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsAotVersionInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsAotVersionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsAotVersionInfo_DEFINED)
#define IL2CPP_STRUCT_fsAotVersionInfo_DEFINED
struct fsAotVersionInfo_Member__Array;
struct fsAotVersionInfo {
    bool IsConstructorPublic;
    struct fsAotVersionInfo_Member__Array* Members;
};
#endif
#if !defined(IL2CPP_STRUCT_fsAotVersionInfo_FWDDECL)
#define IL2CPP_STRUCT_fsAotVersionInfo_FWDDECL
#include <Modloader/app/structs/fsAotVersionInfo_Member__Array.h>
#endif
#undef IL2CPP_STRUCT_fsAotVersionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsAotVersionInfo_DEFINED) && !defined(IL2CPP_STRUCT_fsAotVersionInfo_FWDDECL)
#include <Modloader/app/structs/fsAotVersionInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsAotVersionInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
