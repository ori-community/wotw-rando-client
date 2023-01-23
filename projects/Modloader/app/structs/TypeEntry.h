#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeEntry_DEFINED)
#include <Modloader/app/structs/TypeEntry__Fields.h>
#if defined(IL2CPP_STRUCT_TypeEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeEntry_DEFINED
struct TypeEntry__Class;
struct TypeEntry {
    struct TypeEntry__Class* klass;
    MonitorData* monitor;
    struct TypeEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TypeEntry_FWDDECL)
#define IL2CPP_STRUCT_TypeEntry_FWDDECL
#include <Modloader/app/structs/TypeEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeEntry_DEFINED) && !defined(IL2CPP_STRUCT_TypeEntry_FWDDECL)
#include <Modloader/app/structs/TypeEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
