#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurtlePlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurtlePlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtlePlaceholder_DEFINED)
#include <Modloader/app/structs/TurtlePlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_TurtlePlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_TurtlePlaceholder_DEFINED
struct TurtlePlaceholder__Class;
struct TurtlePlaceholder {
    struct TurtlePlaceholder__Class* klass;
    MonitorData* monitor;
    struct TurtlePlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TurtlePlaceholder_FWDDECL)
#define IL2CPP_STRUCT_TurtlePlaceholder_FWDDECL
#include <Modloader/app/structs/TurtlePlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_TurtlePlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtlePlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_TurtlePlaceholder_FWDDECL)
#include <Modloader/app/structs/TurtlePlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurtlePlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
