#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SliderState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SliderState_INITIALIZING
#if !defined(IL2CPP_STRUCT_SliderState_DEFINED)
#include <Modloader/app/structs/SliderState__Fields.h>
#if defined(IL2CPP_STRUCT_SliderState__Fields_DEFINED)
#define IL2CPP_STRUCT_SliderState_DEFINED
struct SliderState__Class;
struct SliderState {
    struct SliderState__Class* klass;
    MonitorData* monitor;
    struct SliderState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SliderState_FWDDECL)
#define IL2CPP_STRUCT_SliderState_FWDDECL
#include <Modloader/app/structs/SliderState__Class.h>
#endif
#undef IL2CPP_STRUCT_SliderState_INITIALIZING
#if !defined(IL2CPP_STRUCT_SliderState_DEFINED) && !defined(IL2CPP_STRUCT_SliderState_FWDDECL)
#include <Modloader/app/structs/SliderState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SliderState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
