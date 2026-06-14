#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDynamicMetaObjectProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDynamicMetaObjectProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDynamicMetaObjectProvider_DEFINED)
#define IL2CPP_STRUCT_IDynamicMetaObjectProvider_DEFINED
struct IDynamicMetaObjectProvider__Class;
struct IDynamicMetaObjectProvider {
    struct IDynamicMetaObjectProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDynamicMetaObjectProvider_FWDDECL)
#define IL2CPP_STRUCT_IDynamicMetaObjectProvider_FWDDECL
#include <Modloader/app/structs/IDynamicMetaObjectProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_IDynamicMetaObjectProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDynamicMetaObjectProvider_DEFINED) && !defined(IL2CPP_STRUCT_IDynamicMetaObjectProvider_FWDDECL)
#include <Modloader/app/structs/IDynamicMetaObjectProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDynamicMetaObjectProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
