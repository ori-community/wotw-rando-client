#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RangeContentValidator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RangeContentValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_RangeContentValidator_DEFINED)
#include <Modloader/app/structs/RangeContentValidator__Fields.h>
#if defined(IL2CPP_STRUCT_RangeContentValidator__Fields_DEFINED)
#define IL2CPP_STRUCT_RangeContentValidator_DEFINED
struct RangeContentValidator__Class;
struct RangeContentValidator {
    struct RangeContentValidator__Class* klass;
    MonitorData* monitor;
    struct RangeContentValidator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RangeContentValidator_FWDDECL)
#define IL2CPP_STRUCT_RangeContentValidator_FWDDECL
#include <Modloader/app/structs/RangeContentValidator__Class.h>
#endif
#undef IL2CPP_STRUCT_RangeContentValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_RangeContentValidator_DEFINED) && !defined(IL2CPP_STRUCT_RangeContentValidator_FWDDECL)
#include <Modloader/app/structs/RangeContentValidator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RangeContentValidator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
