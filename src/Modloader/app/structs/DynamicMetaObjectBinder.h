#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicMetaObjectBinder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicMetaObjectBinder_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicMetaObjectBinder_DEFINED)
#include <Modloader/app/structs/DynamicMetaObjectBinder__Fields.h>
#if defined(IL2CPP_STRUCT_DynamicMetaObjectBinder__Fields_DEFINED)
#define IL2CPP_STRUCT_DynamicMetaObjectBinder_DEFINED
struct DynamicMetaObjectBinder__Class;
struct DynamicMetaObjectBinder {
    struct DynamicMetaObjectBinder__Class* klass;
    MonitorData* monitor;
    struct DynamicMetaObjectBinder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DynamicMetaObjectBinder_FWDDECL)
#define IL2CPP_STRUCT_DynamicMetaObjectBinder_FWDDECL
#include <Modloader/app/structs/DynamicMetaObjectBinder__Class.h>
#endif
#undef IL2CPP_STRUCT_DynamicMetaObjectBinder_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicMetaObjectBinder_DEFINED) && !defined(IL2CPP_STRUCT_DynamicMetaObjectBinder_FWDDECL)
#include <Modloader/app/structs/DynamicMetaObjectBinder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicMetaObjectBinder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
