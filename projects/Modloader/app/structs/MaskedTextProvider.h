#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MaskedTextProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MaskedTextProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaskedTextProvider_DEFINED)
#include <Modloader/app/structs/MaskedTextProvider__Fields.h>
#if defined(IL2CPP_STRUCT_MaskedTextProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_MaskedTextProvider_DEFINED
struct MaskedTextProvider__Class;
struct MaskedTextProvider {
    struct MaskedTextProvider__Class* klass;
    MonitorData* monitor;
    struct MaskedTextProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MaskedTextProvider_FWDDECL)
#define IL2CPP_STRUCT_MaskedTextProvider_FWDDECL
#include <Modloader/app/structs/MaskedTextProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_MaskedTextProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaskedTextProvider_DEFINED) && !defined(IL2CPP_STRUCT_MaskedTextProvider_FWDDECL)
#include <Modloader/app/structs/MaskedTextProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MaskedTextProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
