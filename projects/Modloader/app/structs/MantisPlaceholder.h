#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MantisPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MantisPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_MantisPlaceholder_DEFINED)
#include <Modloader/app/structs/MantisPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_MantisPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_MantisPlaceholder_DEFINED
struct MantisPlaceholder__Class;
struct MantisPlaceholder {
    struct MantisPlaceholder__Class* klass;
    MonitorData* monitor;
    struct MantisPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MantisPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_MantisPlaceholder_FWDDECL
#include <Modloader/app/structs/MantisPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_MantisPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_MantisPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_MantisPlaceholder_FWDDECL)
#include <Modloader/app/structs/MantisPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MantisPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
