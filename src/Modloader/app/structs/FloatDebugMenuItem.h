#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FloatDebugMenuItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FloatDebugMenuItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatDebugMenuItem_DEFINED)
#include <Modloader/app/structs/FloatDebugMenuItem__Fields.h>
#if defined(IL2CPP_STRUCT_FloatDebugMenuItem__Fields_DEFINED)
#define IL2CPP_STRUCT_FloatDebugMenuItem_DEFINED
struct FloatDebugMenuItem__Class;
struct FloatDebugMenuItem {
    struct FloatDebugMenuItem__Class* klass;
    MonitorData* monitor;
    struct FloatDebugMenuItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FloatDebugMenuItem_FWDDECL)
#define IL2CPP_STRUCT_FloatDebugMenuItem_FWDDECL
#include <Modloader/app/structs/FloatDebugMenuItem__Class.h>
#endif
#undef IL2CPP_STRUCT_FloatDebugMenuItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatDebugMenuItem_DEFINED) && !defined(IL2CPP_STRUCT_FloatDebugMenuItem_FWDDECL)
#include <Modloader/app/structs/FloatDebugMenuItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FloatDebugMenuItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
