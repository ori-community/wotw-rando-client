#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CultureAwareComparer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CultureAwareComparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_CultureAwareComparer_DEFINED)
#include <Modloader/app/structs/CultureAwareComparer__Fields.h>
#if defined(IL2CPP_STRUCT_CultureAwareComparer__Fields_DEFINED)
#define IL2CPP_STRUCT_CultureAwareComparer_DEFINED
struct CultureAwareComparer__Class;
struct CultureAwareComparer {
    struct CultureAwareComparer__Class* klass;
    MonitorData* monitor;
    struct CultureAwareComparer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CultureAwareComparer_FWDDECL)
#define IL2CPP_STRUCT_CultureAwareComparer_FWDDECL
#include <Modloader/app/structs/CultureAwareComparer__Class.h>
#endif
#undef IL2CPP_STRUCT_CultureAwareComparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_CultureAwareComparer_DEFINED) && !defined(IL2CPP_STRUCT_CultureAwareComparer_FWDDECL)
#include <Modloader/app/structs/CultureAwareComparer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CultureAwareComparer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
