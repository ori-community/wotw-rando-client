#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LabelScopeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LabelScopeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_LabelScopeInfo_DEFINED)
#include <Modloader/app/structs/LabelScopeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_LabelScopeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_LabelScopeInfo_DEFINED
struct LabelScopeInfo__Class;
struct LabelScopeInfo {
    struct LabelScopeInfo__Class* klass;
    MonitorData* monitor;
    struct LabelScopeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LabelScopeInfo_FWDDECL)
#define IL2CPP_STRUCT_LabelScopeInfo_FWDDECL
#include <Modloader/app/structs/LabelScopeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_LabelScopeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_LabelScopeInfo_DEFINED) && !defined(IL2CPP_STRUCT_LabelScopeInfo_FWDDECL)
#include <Modloader/app/structs/LabelScopeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LabelScopeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
