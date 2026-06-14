#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MaskedValueBar_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MaskedValueBar_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaskedValueBar_DEFINED)
#include <Modloader/app/structs/MaskedValueBar__Fields.h>
#if defined(IL2CPP_STRUCT_MaskedValueBar__Fields_DEFINED)
#define IL2CPP_STRUCT_MaskedValueBar_DEFINED
struct MaskedValueBar__Class;
struct MaskedValueBar {
    struct MaskedValueBar__Class* klass;
    MonitorData* monitor;
    struct MaskedValueBar__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MaskedValueBar_FWDDECL)
#define IL2CPP_STRUCT_MaskedValueBar_FWDDECL
#include <Modloader/app/structs/MaskedValueBar__Class.h>
#endif
#undef IL2CPP_STRUCT_MaskedValueBar_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaskedValueBar_DEFINED) && !defined(IL2CPP_STRUCT_MaskedValueBar_FWDDECL)
#include <Modloader/app/structs/MaskedValueBar.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MaskedValueBar.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
