#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicUtils_BinderWrapper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicUtils_BinderWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicUtils_BinderWrapper_DEFINED)
#define IL2CPP_STRUCT_DynamicUtils_BinderWrapper_DEFINED
struct DynamicUtils_BinderWrapper__Class;
struct DynamicUtils_BinderWrapper {
    struct DynamicUtils_BinderWrapper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DynamicUtils_BinderWrapper_FWDDECL)
#define IL2CPP_STRUCT_DynamicUtils_BinderWrapper_FWDDECL
#include <Modloader/app/structs/DynamicUtils_BinderWrapper__Class.h>
#endif
#undef IL2CPP_STRUCT_DynamicUtils_BinderWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicUtils_BinderWrapper_DEFINED) && !defined(IL2CPP_STRUCT_DynamicUtils_BinderWrapper_FWDDECL)
#include <Modloader/app/structs/DynamicUtils_BinderWrapper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicUtils_BinderWrapper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
