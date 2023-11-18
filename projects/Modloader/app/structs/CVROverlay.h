#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CVROverlay_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CVROverlay_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVROverlay_DEFINED)
#include <Modloader/app/structs/CVROverlay__Fields.h>
#if defined(IL2CPP_STRUCT_CVROverlay__Fields_DEFINED)
#define IL2CPP_STRUCT_CVROverlay_DEFINED
struct CVROverlay__Class;
struct CVROverlay {
    struct CVROverlay__Class* klass;
    MonitorData* monitor;
    struct CVROverlay__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CVROverlay_FWDDECL)
#define IL2CPP_STRUCT_CVROverlay_FWDDECL
#include <Modloader/app/structs/CVROverlay__Class.h>
#endif
#undef IL2CPP_STRUCT_CVROverlay_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVROverlay_DEFINED) && !defined(IL2CPP_STRUCT_CVROverlay_FWDDECL)
#include <Modloader/app/structs/CVROverlay.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CVROverlay.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
