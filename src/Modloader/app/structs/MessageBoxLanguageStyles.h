#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MessageBoxLanguageStyles_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MessageBoxLanguageStyles_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageBoxLanguageStyles_DEFINED)
#include <Modloader/app/structs/MessageBoxLanguageStyles__Fields.h>
#if defined(IL2CPP_STRUCT_MessageBoxLanguageStyles__Fields_DEFINED)
#define IL2CPP_STRUCT_MessageBoxLanguageStyles_DEFINED
struct MessageBoxLanguageStyles__Class;
struct MessageBoxLanguageStyles {
    struct MessageBoxLanguageStyles__Class* klass;
    MonitorData* monitor;
    struct MessageBoxLanguageStyles__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MessageBoxLanguageStyles_FWDDECL)
#define IL2CPP_STRUCT_MessageBoxLanguageStyles_FWDDECL
#include <Modloader/app/structs/MessageBoxLanguageStyles__Class.h>
#endif
#undef IL2CPP_STRUCT_MessageBoxLanguageStyles_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageBoxLanguageStyles_DEFINED) && !defined(IL2CPP_STRUCT_MessageBoxLanguageStyles_FWDDECL)
#include <Modloader/app/structs/MessageBoxLanguageStyles.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MessageBoxLanguageStyles.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
