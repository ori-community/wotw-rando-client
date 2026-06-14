#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Diff__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Diff__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Diff__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Diff__StaticFields_DEFINED
struct List_1_SystemIntegration_CacheData_;
struct Diff__StaticFields {
    struct List_1_SystemIntegration_CacheData_* s_localOnly;
    struct List_1_SystemIntegration_CacheData_* s_remoteOnly;
    bool debug;
};
#endif
#if !defined(IL2CPP_STRUCT_Diff__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Diff__StaticFields_FWDDECL
#include <Modloader/app/structs/List_1_SystemIntegration_CacheData_.h>
#endif
#undef IL2CPP_STRUCT_Diff__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Diff__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Diff__StaticFields_FWDDECL)
#include <Modloader/app/structs/Diff__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Diff__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
