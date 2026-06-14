#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FloatValueProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FloatValueProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatValueProvider_DEFINED)
#include <Modloader/app/structs/FloatValueProvider__Fields.h>
#if defined(IL2CPP_STRUCT_FloatValueProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_FloatValueProvider_DEFINED
struct FloatValueProvider__Class;
struct FloatValueProvider {
    struct FloatValueProvider__Class* klass;
    MonitorData* monitor;
    struct FloatValueProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FloatValueProvider_FWDDECL)
#define IL2CPP_STRUCT_FloatValueProvider_FWDDECL
#include <Modloader/app/structs/FloatValueProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_FloatValueProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatValueProvider_DEFINED) && !defined(IL2CPP_STRUCT_FloatValueProvider_FWDDECL)
#include <Modloader/app/structs/FloatValueProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FloatValueProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
