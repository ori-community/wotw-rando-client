#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InputData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InputData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputData__Fields_DEFINED)
#define IL2CPP_STRUCT_InputData__Fields_DEFINED
struct Boolean__Array;
struct __declspec(align(8)) InputData__Fields {
    struct Boolean__Array* Inputs;
    int32_t HorizontalDigiPad;
    int32_t VerticalDigiPad;
    bool SaveFileExists;
};
#endif
#if !defined(IL2CPP_STRUCT_InputData__Fields_FWDDECL)
#define IL2CPP_STRUCT_InputData__Fields_FWDDECL
#include <Modloader/app/structs/Boolean__Array.h>
#endif
#undef IL2CPP_STRUCT_InputData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InputData__Fields_FWDDECL)
#include <Modloader/app/structs/InputData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InputData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
