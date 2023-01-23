#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NotSupportedException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NotSupportedException_INITIALIZING
#if !defined(IL2CPP_STRUCT_NotSupportedException_DEFINED)
#include <Modloader/app/structs/NotSupportedException__Fields.h>
#if defined(IL2CPP_STRUCT_NotSupportedException__Fields_DEFINED)
#define IL2CPP_STRUCT_NotSupportedException_DEFINED
struct NotSupportedException__Class;
struct NotSupportedException {
    struct NotSupportedException__Class* klass;
    MonitorData* monitor;
    struct NotSupportedException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NotSupportedException_FWDDECL)
#define IL2CPP_STRUCT_NotSupportedException_FWDDECL
#include <Modloader/app/structs/NotSupportedException__Class.h>
#endif
#undef IL2CPP_STRUCT_NotSupportedException_INITIALIZING
#if !defined(IL2CPP_STRUCT_NotSupportedException_DEFINED) && !defined(IL2CPP_STRUCT_NotSupportedException_FWDDECL)
#include <Modloader/app/structs/NotSupportedException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NotSupportedException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
