#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicTextProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicTextProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicTextProvider_DEFINED)
#include <Modloader/app/structs/DynamicTextProvider__Fields.h>
#if defined(IL2CPP_STRUCT_DynamicTextProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_DynamicTextProvider_DEFINED
struct DynamicTextProvider__Class;
struct DynamicTextProvider {
    struct DynamicTextProvider__Class* klass;
    MonitorData* monitor;
    struct DynamicTextProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DynamicTextProvider_FWDDECL)
#define IL2CPP_STRUCT_DynamicTextProvider_FWDDECL
#include <Modloader/app/structs/DynamicTextProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_DynamicTextProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicTextProvider_DEFINED) && !defined(IL2CPP_STRUCT_DynamicTextProvider_FWDDECL)
#include <Modloader/app/structs/DynamicTextProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicTextProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
