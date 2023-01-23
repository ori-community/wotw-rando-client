#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReflectPropertyDescriptor__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReflectPropertyDescriptor__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectPropertyDescriptor__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ReflectPropertyDescriptor__StaticFields_DEFINED
struct Type__Array;
struct Object;
struct TraceSwitch;
struct ReflectPropertyDescriptor__StaticFields {
    struct Type__Array* argsNone;
    struct Object* noValue;
    struct TraceSwitch* PropDescCreateSwitch;
    struct TraceSwitch* PropDescUsageSwitch;
    int32_t BitDefaultValueQueried;
    int32_t BitGetQueried;
    int32_t BitSetQueried;
    int32_t BitShouldSerializeQueried;
    int32_t BitResetQueried;
    int32_t BitChangedQueried;
    int32_t BitIPropChangedQueried;
    int32_t BitReadOnlyChecked;
    int32_t BitAmbientValueQueried;
    int32_t BitSetOnDemand;
};
#endif
#if !defined(IL2CPP_STRUCT_ReflectPropertyDescriptor__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ReflectPropertyDescriptor__StaticFields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TraceSwitch.h>
#include <Modloader/app/structs/Type__Array.h>
#endif
#undef IL2CPP_STRUCT_ReflectPropertyDescriptor__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectPropertyDescriptor__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ReflectPropertyDescriptor__StaticFields_FWDDECL)
#include <Modloader/app/structs/ReflectPropertyDescriptor__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReflectPropertyDescriptor__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
