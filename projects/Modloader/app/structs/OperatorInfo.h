#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OperatorInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OperatorInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_OperatorInfo_DEFINED)
#include <Modloader/app/structs/OperatorInfo__Fields.h>
#if defined(IL2CPP_STRUCT_OperatorInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_OperatorInfo_DEFINED
struct OperatorInfo__Class;
struct OperatorInfo {
    struct OperatorInfo__Class* klass;
    MonitorData* monitor;
    struct OperatorInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OperatorInfo_FWDDECL)
#define IL2CPP_STRUCT_OperatorInfo_FWDDECL
#include <Modloader/app/structs/OperatorInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_OperatorInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_OperatorInfo_DEFINED) && !defined(IL2CPP_STRUCT_OperatorInfo_FWDDECL)
#include <Modloader/app/structs/OperatorInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OperatorInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
