#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExpandoObject__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExpandoObject__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpandoObject__Fields_DEFINED)
#define IL2CPP_STRUCT_ExpandoObject__Fields_DEFINED
struct Object;
struct ExpandoObject_ExpandoData;
struct PropertyChangedEventHandler;
struct __declspec(align(8)) ExpandoObject__Fields {
    struct Object* LockObject;
    struct ExpandoObject_ExpandoData* _data;
    int32_t _count;
    struct PropertyChangedEventHandler* _propertyChanged;
};
#endif
#if !defined(IL2CPP_STRUCT_ExpandoObject__Fields_FWDDECL)
#define IL2CPP_STRUCT_ExpandoObject__Fields_FWDDECL
#include <Modloader/app/structs/ExpandoObject_ExpandoData.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyChangedEventHandler.h>
#endif
#undef IL2CPP_STRUCT_ExpandoObject__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpandoObject__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ExpandoObject__Fields_FWDDECL)
#include <Modloader/app/structs/ExpandoObject__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExpandoObject__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
