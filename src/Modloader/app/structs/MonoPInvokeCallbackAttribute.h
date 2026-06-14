#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoPInvokeCallbackAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoPInvokeCallbackAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoPInvokeCallbackAttribute_DEFINED)
#define IL2CPP_STRUCT_MonoPInvokeCallbackAttribute_DEFINED
struct MonoPInvokeCallbackAttribute__Class;
struct MonoPInvokeCallbackAttribute {
    struct MonoPInvokeCallbackAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MonoPInvokeCallbackAttribute_FWDDECL)
#define IL2CPP_STRUCT_MonoPInvokeCallbackAttribute_FWDDECL
#include <Modloader/app/structs/MonoPInvokeCallbackAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoPInvokeCallbackAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoPInvokeCallbackAttribute_DEFINED) && !defined(IL2CPP_STRUCT_MonoPInvokeCallbackAttribute_FWDDECL)
#include <Modloader/app/structs/MonoPInvokeCallbackAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoPInvokeCallbackAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
