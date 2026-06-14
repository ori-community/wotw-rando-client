#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SmoothRangeAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SmoothRangeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SmoothRangeAttribute_DEFINED)
#include <Modloader/app/structs/SmoothRangeAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_SmoothRangeAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_SmoothRangeAttribute_DEFINED
struct SmoothRangeAttribute__Class;
struct SmoothRangeAttribute {
    struct SmoothRangeAttribute__Class* klass;
    MonitorData* monitor;
    struct SmoothRangeAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SmoothRangeAttribute_FWDDECL)
#define IL2CPP_STRUCT_SmoothRangeAttribute_FWDDECL
#include <Modloader/app/structs/SmoothRangeAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_SmoothRangeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SmoothRangeAttribute_DEFINED) && !defined(IL2CPP_STRUCT_SmoothRangeAttribute_FWDDECL)
#include <Modloader/app/structs/SmoothRangeAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SmoothRangeAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
