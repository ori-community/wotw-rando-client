#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NightberryPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NightberryPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_NightberryPlaceholder_DEFINED)
#include <Modloader/app/structs/NightberryPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_NightberryPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_NightberryPlaceholder_DEFINED
struct NightberryPlaceholder__Class;
struct NightberryPlaceholder {
    struct NightberryPlaceholder__Class* klass;
    MonitorData* monitor;
    struct NightberryPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NightberryPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_NightberryPlaceholder_FWDDECL
#include <Modloader/app/structs/NightberryPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_NightberryPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_NightberryPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_NightberryPlaceholder_FWDDECL)
#include <Modloader/app/structs/NightberryPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NightberryPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
