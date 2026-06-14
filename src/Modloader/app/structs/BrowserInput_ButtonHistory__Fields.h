#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BrowserInput_ButtonHistory__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BrowserInput_ButtonHistory__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserInput_ButtonHistory__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_BrowserInput_ButtonHistory__Fields_DEFINED
struct __declspec(align(8)) BrowserInput_ButtonHistory__Fields {
    float lastPressTime;
    int32_t repeatCount;
    struct Vector3 lastPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BrowserInput_ButtonHistory__Fields_FWDDECL)
#define IL2CPP_STRUCT_BrowserInput_ButtonHistory__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_BrowserInput_ButtonHistory__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserInput_ButtonHistory__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BrowserInput_ButtonHistory__Fields_FWDDECL)
#include <Modloader/app/structs/BrowserInput_ButtonHistory__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BrowserInput_ButtonHistory__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
