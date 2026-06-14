#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityHealthProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityHealthProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityHealthProvider_DEFINED)
#include <Modloader/app/structs/EntityHealthProvider__Fields.h>
#if defined(IL2CPP_STRUCT_EntityHealthProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityHealthProvider_DEFINED
struct EntityHealthProvider__Class;
struct EntityHealthProvider {
    struct EntityHealthProvider__Class* klass;
    MonitorData* monitor;
    struct EntityHealthProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityHealthProvider_FWDDECL)
#define IL2CPP_STRUCT_EntityHealthProvider_FWDDECL
#include <Modloader/app/structs/EntityHealthProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityHealthProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityHealthProvider_DEFINED) && !defined(IL2CPP_STRUCT_EntityHealthProvider_FWDDECL)
#include <Modloader/app/structs/EntityHealthProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityHealthProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
