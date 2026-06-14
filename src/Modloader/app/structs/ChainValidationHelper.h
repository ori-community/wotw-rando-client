#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChainValidationHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChainValidationHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChainValidationHelper_DEFINED)
#include <Modloader/app/structs/ChainValidationHelper__Fields.h>
#if defined(IL2CPP_STRUCT_ChainValidationHelper__Fields_DEFINED)
#define IL2CPP_STRUCT_ChainValidationHelper_DEFINED
struct ChainValidationHelper__Class;
struct ChainValidationHelper {
    struct ChainValidationHelper__Class* klass;
    MonitorData* monitor;
    struct ChainValidationHelper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChainValidationHelper_FWDDECL)
#define IL2CPP_STRUCT_ChainValidationHelper_FWDDECL
#include <Modloader/app/structs/ChainValidationHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_ChainValidationHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChainValidationHelper_DEFINED) && !defined(IL2CPP_STRUCT_ChainValidationHelper_FWDDECL)
#include <Modloader/app/structs/ChainValidationHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChainValidationHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
