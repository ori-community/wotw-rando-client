#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KeySizes_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KeySizes_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeySizes_DEFINED)
#include <Modloader/app/structs/KeySizes__Fields.h>
#if defined(IL2CPP_STRUCT_KeySizes__Fields_DEFINED)
#define IL2CPP_STRUCT_KeySizes_DEFINED
struct KeySizes__Class;
struct KeySizes {
    struct KeySizes__Class* klass;
    MonitorData* monitor;
    struct KeySizes__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KeySizes_FWDDECL)
#define IL2CPP_STRUCT_KeySizes_FWDDECL
#include <Modloader/app/structs/KeySizes__Class.h>
#endif
#undef IL2CPP_STRUCT_KeySizes_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeySizes_DEFINED) && !defined(IL2CPP_STRUCT_KeySizes_FWDDECL)
#include <Modloader/app/structs/KeySizes.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KeySizes.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
