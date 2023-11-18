#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetScaleAfterAnimation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetScaleAfterAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetScaleAfterAnimation_DEFINED)
#include <Modloader/app/structs/SetScaleAfterAnimation__Fields.h>
#if defined(IL2CPP_STRUCT_SetScaleAfterAnimation__Fields_DEFINED)
#define IL2CPP_STRUCT_SetScaleAfterAnimation_DEFINED
struct SetScaleAfterAnimation__Class;
struct SetScaleAfterAnimation {
    struct SetScaleAfterAnimation__Class* klass;
    MonitorData* monitor;
    struct SetScaleAfterAnimation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetScaleAfterAnimation_FWDDECL)
#define IL2CPP_STRUCT_SetScaleAfterAnimation_FWDDECL
#include <Modloader/app/structs/SetScaleAfterAnimation__Class.h>
#endif
#undef IL2CPP_STRUCT_SetScaleAfterAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetScaleAfterAnimation_DEFINED) && !defined(IL2CPP_STRUCT_SetScaleAfterAnimation_FWDDECL)
#include <Modloader/app/structs/SetScaleAfterAnimation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetScaleAfterAnimation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
