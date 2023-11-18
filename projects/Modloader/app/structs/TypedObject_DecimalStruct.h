#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypedObject_DecimalStruct_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypedObject_DecimalStruct_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypedObject_DecimalStruct_DEFINED)
#include <Modloader/app/structs/TypedObject_DecimalStruct__Fields.h>
#if defined(IL2CPP_STRUCT_TypedObject_DecimalStruct__Fields_DEFINED)
#define IL2CPP_STRUCT_TypedObject_DecimalStruct_DEFINED
struct TypedObject_DecimalStruct__Class;
struct TypedObject_DecimalStruct {
    struct TypedObject_DecimalStruct__Class* klass;
    MonitorData* monitor;
    struct TypedObject_DecimalStruct__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TypedObject_DecimalStruct_FWDDECL)
#define IL2CPP_STRUCT_TypedObject_DecimalStruct_FWDDECL
#include <Modloader/app/structs/TypedObject_DecimalStruct__Class.h>
#endif
#undef IL2CPP_STRUCT_TypedObject_DecimalStruct_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypedObject_DecimalStruct_DEFINED) && !defined(IL2CPP_STRUCT_TypedObject_DecimalStruct_FWDDECL)
#include <Modloader/app/structs/TypedObject_DecimalStruct.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypedObject_DecimalStruct.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
