#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InflateCodes_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InflateCodes_INITIALIZING
#if !defined(IL2CPP_STRUCT_InflateCodes_DEFINED)
#include <Modloader/app/structs/InflateCodes__Fields.h>
#if defined(IL2CPP_STRUCT_InflateCodes__Fields_DEFINED)
#define IL2CPP_STRUCT_InflateCodes_DEFINED
struct InflateCodes__Class;
struct InflateCodes {
    struct InflateCodes__Class* klass;
    MonitorData* monitor;
    struct InflateCodes__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InflateCodes_FWDDECL)
#define IL2CPP_STRUCT_InflateCodes_FWDDECL
#include <Modloader/app/structs/InflateCodes__Class.h>
#endif
#undef IL2CPP_STRUCT_InflateCodes_INITIALIZING
#if !defined(IL2CPP_STRUCT_InflateCodes_DEFINED) && !defined(IL2CPP_STRUCT_InflateCodes_FWDDECL)
#include <Modloader/app/structs/InflateCodes.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InflateCodes.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
