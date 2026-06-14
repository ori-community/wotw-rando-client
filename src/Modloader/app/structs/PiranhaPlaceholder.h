#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PiranhaPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PiranhaPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_PiranhaPlaceholder_DEFINED)
#include <Modloader/app/structs/PiranhaPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_PiranhaPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_PiranhaPlaceholder_DEFINED
struct PiranhaPlaceholder__Class;
struct PiranhaPlaceholder {
    struct PiranhaPlaceholder__Class* klass;
    MonitorData* monitor;
    struct PiranhaPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PiranhaPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_PiranhaPlaceholder_FWDDECL
#include <Modloader/app/structs/PiranhaPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_PiranhaPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_PiranhaPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_PiranhaPlaceholder_FWDDECL)
#include <Modloader/app/structs/PiranhaPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PiranhaPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
