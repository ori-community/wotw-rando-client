#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RangeHeaderValue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RangeHeaderValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_RangeHeaderValue_DEFINED)
#include <Modloader/app/structs/RangeHeaderValue__Fields.h>
#if defined(IL2CPP_STRUCT_RangeHeaderValue__Fields_DEFINED)
#define IL2CPP_STRUCT_RangeHeaderValue_DEFINED
struct RangeHeaderValue__Class;
struct RangeHeaderValue {
    struct RangeHeaderValue__Class* klass;
    MonitorData* monitor;
    struct RangeHeaderValue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RangeHeaderValue_FWDDECL)
#define IL2CPP_STRUCT_RangeHeaderValue_FWDDECL
#include <Modloader/app/structs/RangeHeaderValue__Class.h>
#endif
#undef IL2CPP_STRUCT_RangeHeaderValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_RangeHeaderValue_DEFINED) && !defined(IL2CPP_STRUCT_RangeHeaderValue_FWDDECL)
#include <Modloader/app/structs/RangeHeaderValue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RangeHeaderValue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
