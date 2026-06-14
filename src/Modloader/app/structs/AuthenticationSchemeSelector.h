#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AuthenticationSchemeSelector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AuthenticationSchemeSelector_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuthenticationSchemeSelector_DEFINED)
#include <Modloader/app/structs/AuthenticationSchemeSelector__Fields.h>
#if defined(IL2CPP_STRUCT_AuthenticationSchemeSelector__Fields_DEFINED)
#define IL2CPP_STRUCT_AuthenticationSchemeSelector_DEFINED
struct AuthenticationSchemeSelector__Class;
struct AuthenticationSchemeSelector {
    struct AuthenticationSchemeSelector__Class* klass;
    MonitorData* monitor;
    struct AuthenticationSchemeSelector__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AuthenticationSchemeSelector_FWDDECL)
#define IL2CPP_STRUCT_AuthenticationSchemeSelector_FWDDECL
#include <Modloader/app/structs/AuthenticationSchemeSelector__Class.h>
#endif
#undef IL2CPP_STRUCT_AuthenticationSchemeSelector_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuthenticationSchemeSelector_DEFINED) && !defined(IL2CPP_STRUCT_AuthenticationSchemeSelector_FWDDECL)
#include <Modloader/app/structs/AuthenticationSchemeSelector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AuthenticationSchemeSelector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
