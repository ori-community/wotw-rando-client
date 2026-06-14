#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicMetaObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicMetaObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicMetaObject_DEFINED)
#include <Modloader/app/structs/DynamicMetaObject__Fields.h>
#if defined(IL2CPP_STRUCT_DynamicMetaObject__Fields_DEFINED)
#define IL2CPP_STRUCT_DynamicMetaObject_DEFINED
struct DynamicMetaObject__Class;
struct DynamicMetaObject {
    struct DynamicMetaObject__Class* klass;
    MonitorData* monitor;
    struct DynamicMetaObject__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DynamicMetaObject_FWDDECL)
#define IL2CPP_STRUCT_DynamicMetaObject_FWDDECL
#include <Modloader/app/structs/DynamicMetaObject__Class.h>
#endif
#undef IL2CPP_STRUCT_DynamicMetaObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicMetaObject_DEFINED) && !defined(IL2CPP_STRUCT_DynamicMetaObject_FWDDECL)
#include <Modloader/app/structs/DynamicMetaObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicMetaObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
