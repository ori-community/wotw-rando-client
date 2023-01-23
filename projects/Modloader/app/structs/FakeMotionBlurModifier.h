#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FakeMotionBlurModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FakeMotionBlurModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_FakeMotionBlurModifier_DEFINED)
#include <Modloader/app/structs/FakeMotionBlurModifier__Fields.h>
#if defined(IL2CPP_STRUCT_FakeMotionBlurModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_FakeMotionBlurModifier_DEFINED
struct FakeMotionBlurModifier__Class;
struct FakeMotionBlurModifier {
    struct FakeMotionBlurModifier__Class* klass;
    MonitorData* monitor;
    struct FakeMotionBlurModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FakeMotionBlurModifier_FWDDECL)
#define IL2CPP_STRUCT_FakeMotionBlurModifier_FWDDECL
#include <Modloader/app/structs/FakeMotionBlurModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_FakeMotionBlurModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_FakeMotionBlurModifier_DEFINED) && !defined(IL2CPP_STRUCT_FakeMotionBlurModifier_FWDDECL)
#include <Modloader/app/structs/FakeMotionBlurModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FakeMotionBlurModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
