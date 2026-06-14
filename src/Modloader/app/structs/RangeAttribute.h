#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RangeAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RangeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_RangeAttribute_DEFINED)
#include <Modloader/app/structs/RangeAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_RangeAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_RangeAttribute_DEFINED
struct RangeAttribute__Class;
struct RangeAttribute {
    struct RangeAttribute__Class* klass;
    MonitorData* monitor;
    struct RangeAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RangeAttribute_FWDDECL)
#define IL2CPP_STRUCT_RangeAttribute_FWDDECL
#include <Modloader/app/structs/RangeAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_RangeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_RangeAttribute_DEFINED) && !defined(IL2CPP_STRUCT_RangeAttribute_FWDDECL)
#include <Modloader/app/structs/RangeAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RangeAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
