#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BrowserInputSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BrowserInputSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserInputSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_BrowserInputSettings__Fields_DEFINED
struct __declspec(align(8)) BrowserInputSettings__Fields {
    int32_t scrollSpeed;
    float multiclickTolerance;
    float multiclickSpeed;
};
#endif
#if !defined(IL2CPP_STRUCT_BrowserInputSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_BrowserInputSettings__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_BrowserInputSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserInputSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BrowserInputSettings__Fields_FWDDECL)
#include <Modloader/app/structs/BrowserInputSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BrowserInputSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
