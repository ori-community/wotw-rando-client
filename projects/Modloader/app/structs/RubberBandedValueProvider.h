#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RubberBandedValueProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RubberBandedValueProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_RubberBandedValueProvider_DEFINED)
#include <Modloader/app/structs/RubberBandedValueProvider__Fields.h>
#if defined(IL2CPP_STRUCT_RubberBandedValueProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_RubberBandedValueProvider_DEFINED
struct RubberBandedValueProvider__Class;
struct RubberBandedValueProvider {
    struct RubberBandedValueProvider__Class* klass;
    MonitorData* monitor;
    struct RubberBandedValueProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RubberBandedValueProvider_FWDDECL)
#define IL2CPP_STRUCT_RubberBandedValueProvider_FWDDECL
#include <Modloader/app/structs/RubberBandedValueProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_RubberBandedValueProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_RubberBandedValueProvider_DEFINED) && !defined(IL2CPP_STRUCT_RubberBandedValueProvider_FWDDECL)
#include <Modloader/app/structs/RubberBandedValueProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RubberBandedValueProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
