#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypedObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypedObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypedObject_DEFINED)
#include <Modloader/app/structs/TypedObject__Fields.h>
#if defined(IL2CPP_STRUCT_TypedObject__Fields_DEFINED)
#define IL2CPP_STRUCT_TypedObject_DEFINED
struct TypedObject__Class;
struct TypedObject {
    struct TypedObject__Class* klass;
    MonitorData* monitor;
    struct TypedObject__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TypedObject_FWDDECL)
#define IL2CPP_STRUCT_TypedObject_FWDDECL
#include <Modloader/app/structs/TypedObject__Class.h>
#endif
#undef IL2CPP_STRUCT_TypedObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypedObject_DEFINED) && !defined(IL2CPP_STRUCT_TypedObject_FWDDECL)
#include <Modloader/app/structs/TypedObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypedObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
