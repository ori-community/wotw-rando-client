#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActiveAxis_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActiveAxis_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActiveAxis_DEFINED)
#include <Modloader/app/structs/ActiveAxis__Fields.h>
#if defined(IL2CPP_STRUCT_ActiveAxis__Fields_DEFINED)
#define IL2CPP_STRUCT_ActiveAxis_DEFINED
struct ActiveAxis__Class;
struct ActiveAxis {
    struct ActiveAxis__Class* klass;
    MonitorData* monitor;
    struct ActiveAxis__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActiveAxis_FWDDECL)
#define IL2CPP_STRUCT_ActiveAxis_FWDDECL
#include <Modloader/app/structs/ActiveAxis__Class.h>
#endif
#undef IL2CPP_STRUCT_ActiveAxis_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActiveAxis_DEFINED) && !defined(IL2CPP_STRUCT_ActiveAxis_FWDDECL)
#include <Modloader/app/structs/ActiveAxis.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActiveAxis.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
