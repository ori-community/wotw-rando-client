#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RangeItemHeaderValue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RangeItemHeaderValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_RangeItemHeaderValue_DEFINED)
#include <Modloader/app/structs/RangeItemHeaderValue__Fields.h>
#if defined(IL2CPP_STRUCT_RangeItemHeaderValue__Fields_DEFINED)
#define IL2CPP_STRUCT_RangeItemHeaderValue_DEFINED
struct RangeItemHeaderValue__Class;
struct RangeItemHeaderValue {
    struct RangeItemHeaderValue__Class* klass;
    MonitorData* monitor;
    struct RangeItemHeaderValue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RangeItemHeaderValue_FWDDECL)
#define IL2CPP_STRUCT_RangeItemHeaderValue_FWDDECL
#include <Modloader/app/structs/RangeItemHeaderValue__Class.h>
#endif
#undef IL2CPP_STRUCT_RangeItemHeaderValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_RangeItemHeaderValue_DEFINED) && !defined(IL2CPP_STRUCT_RangeItemHeaderValue_FWDDECL)
#include <Modloader/app/structs/RangeItemHeaderValue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RangeItemHeaderValue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
