#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DialogHandler_c_DisplayClass3_0__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DialogHandler_c_DisplayClass3_0__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DialogHandler_c_DisplayClass3_0__Fields_DEFINED)
#define IL2CPP_STRUCT_DialogHandler_c_DisplayClass3_0__Fields_DEFINED
struct DialogHandler_DialogCallback;
struct DialogHandler;
struct DialogHandler_MenuCallback;
struct __declspec(align(8)) DialogHandler_c_DisplayClass3_0__Fields {
    struct DialogHandler_DialogCallback* dialogCallback;
    struct DialogHandler* handler;
    struct DialogHandler_MenuCallback* contextCallback;
};
#endif
#if !defined(IL2CPP_STRUCT_DialogHandler_c_DisplayClass3_0__Fields_FWDDECL)
#define IL2CPP_STRUCT_DialogHandler_c_DisplayClass3_0__Fields_FWDDECL
#include <Modloader/app/structs/DialogHandler.h>
#include <Modloader/app/structs/DialogHandler_DialogCallback.h>
#include <Modloader/app/structs/DialogHandler_MenuCallback.h>
#endif
#undef IL2CPP_STRUCT_DialogHandler_c_DisplayClass3_0__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DialogHandler_c_DisplayClass3_0__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DialogHandler_c_DisplayClass3_0__Fields_FWDDECL)
#include <Modloader/app/structs/DialogHandler_c_DisplayClass3_0__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DialogHandler_c_DisplayClass3_0__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
