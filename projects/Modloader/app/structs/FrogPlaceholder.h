#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrogPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrogPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrogPlaceholder_DEFINED)
#include <Modloader/app/structs/FrogPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_FrogPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_FrogPlaceholder_DEFINED
struct FrogPlaceholder__Class;
struct FrogPlaceholder {
    struct FrogPlaceholder__Class* klass;
    MonitorData* monitor;
    struct FrogPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FrogPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_FrogPlaceholder_FWDDECL
#include <Modloader/app/structs/FrogPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_FrogPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrogPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_FrogPlaceholder_FWDDECL)
#include <Modloader/app/structs/FrogPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrogPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
