#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LabelInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LabelInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_LabelInfo_DEFINED)
#include <Modloader/app/structs/LabelInfo__Fields.h>
#if defined(IL2CPP_STRUCT_LabelInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_LabelInfo_DEFINED
struct LabelInfo__Class;
struct LabelInfo {
    struct LabelInfo__Class* klass;
    MonitorData* monitor;
    struct LabelInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LabelInfo_FWDDECL)
#define IL2CPP_STRUCT_LabelInfo_FWDDECL
#include <Modloader/app/structs/LabelInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_LabelInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_LabelInfo_DEFINED) && !defined(IL2CPP_STRUCT_LabelInfo_FWDDECL)
#include <Modloader/app/structs/LabelInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LabelInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
