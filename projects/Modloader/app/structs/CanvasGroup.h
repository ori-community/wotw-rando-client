#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CanvasGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CanvasGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_CanvasGroup_DEFINED)
#include <Modloader/app/structs/CanvasGroup__Fields.h>
#if defined(IL2CPP_STRUCT_CanvasGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_CanvasGroup_DEFINED
struct CanvasGroup__Class;
struct CanvasGroup {
    struct CanvasGroup__Class* klass;
    MonitorData* monitor;
    struct CanvasGroup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CanvasGroup_FWDDECL)
#define IL2CPP_STRUCT_CanvasGroup_FWDDECL
#include <Modloader/app/structs/CanvasGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_CanvasGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_CanvasGroup_DEFINED) && !defined(IL2CPP_STRUCT_CanvasGroup_FWDDECL)
#include <Modloader/app/structs/CanvasGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CanvasGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
