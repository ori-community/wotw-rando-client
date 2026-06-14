#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPlaceholder_DEFINED)
#include <Modloader/app/structs/SeinPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_SeinPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinPlaceholder_DEFINED
struct SeinPlaceholder__Class;
struct SeinPlaceholder {
    struct SeinPlaceholder__Class* klass;
    MonitorData* monitor;
    struct SeinPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_SeinPlaceholder_FWDDECL
#include <Modloader/app/structs/SeinPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_SeinPlaceholder_FWDDECL)
#include <Modloader/app/structs/SeinPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
