#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttributePSVIInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttributePSVIInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttributePSVIInfo_DEFINED)
#include <Modloader/app/structs/AttributePSVIInfo__Fields.h>
#if defined(IL2CPP_STRUCT_AttributePSVIInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_AttributePSVIInfo_DEFINED
struct AttributePSVIInfo__Class;
struct AttributePSVIInfo {
    struct AttributePSVIInfo__Class* klass;
    MonitorData* monitor;
    struct AttributePSVIInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AttributePSVIInfo_FWDDECL)
#define IL2CPP_STRUCT_AttributePSVIInfo_FWDDECL
#include <Modloader/app/structs/AttributePSVIInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_AttributePSVIInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttributePSVIInfo_DEFINED) && !defined(IL2CPP_STRUCT_AttributePSVIInfo_FWDDECL)
#include <Modloader/app/structs/AttributePSVIInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttributePSVIInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
