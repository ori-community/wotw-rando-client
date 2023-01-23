#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SliderHandler__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SliderHandler__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SliderHandler__Boxed_DEFINED)
#include <Modloader/app/structs/SliderHandler.h>
#if defined(IL2CPP_STRUCT_SliderHandler_DEFINED)
#define IL2CPP_STRUCT_SliderHandler__Boxed_DEFINED
struct SliderHandler__Class;
struct SliderHandler__Boxed {
    struct SliderHandler__Class* klass;
    MonitorData* monitor;
    struct SliderHandler fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SliderHandler__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SliderHandler__Boxed_FWDDECL
#include <Modloader/app/structs/SliderHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_SliderHandler__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SliderHandler__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SliderHandler__Boxed_FWDDECL)
#include <Modloader/app/structs/SliderHandler__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SliderHandler__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
