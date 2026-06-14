#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimator_ActiveAnimation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimator_ActiveAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_ActiveAnimation_DEFINED)
#include <Modloader/app/structs/MoonAnimator_ActiveAnimation__Fields.h>
#if defined(IL2CPP_STRUCT_MoonAnimator_ActiveAnimation__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonAnimator_ActiveAnimation_DEFINED
struct MoonAnimator_ActiveAnimation__Class;
struct MoonAnimator_ActiveAnimation {
    struct MoonAnimator_ActiveAnimation__Class* klass;
    MonitorData* monitor;
    struct MoonAnimator_ActiveAnimation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimator_ActiveAnimation_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimator_ActiveAnimation_FWDDECL
#include <Modloader/app/structs/MoonAnimator_ActiveAnimation__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimator_ActiveAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_ActiveAnimation_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimator_ActiveAnimation_FWDDECL)
#include <Modloader/app/structs/MoonAnimator_ActiveAnimation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimator_ActiveAnimation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
