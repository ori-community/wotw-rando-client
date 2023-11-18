#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HideOnMenuOpen_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HideOnMenuOpen_INITIALIZING
#if !defined(IL2CPP_STRUCT_HideOnMenuOpen_DEFINED)
#include <Modloader/app/structs/HideOnMenuOpen__Fields.h>
#if defined(IL2CPP_STRUCT_HideOnMenuOpen__Fields_DEFINED)
#define IL2CPP_STRUCT_HideOnMenuOpen_DEFINED
struct HideOnMenuOpen__Class;
struct HideOnMenuOpen {
    struct HideOnMenuOpen__Class* klass;
    MonitorData* monitor;
    struct HideOnMenuOpen__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HideOnMenuOpen_FWDDECL)
#define IL2CPP_STRUCT_HideOnMenuOpen_FWDDECL
#include <Modloader/app/structs/HideOnMenuOpen__Class.h>
#endif
#undef IL2CPP_STRUCT_HideOnMenuOpen_INITIALIZING
#if !defined(IL2CPP_STRUCT_HideOnMenuOpen_DEFINED) && !defined(IL2CPP_STRUCT_HideOnMenuOpen_FWDDECL)
#include <Modloader/app/structs/HideOnMenuOpen.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HideOnMenuOpen.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
