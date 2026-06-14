#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExpandoObject_ExpandoData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExpandoObject_ExpandoData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpandoObject_ExpandoData__Fields_DEFINED)
#define IL2CPP_STRUCT_ExpandoObject_ExpandoData__Fields_DEFINED
struct ExpandoClass;
struct Object__Array;
struct __declspec(align(8)) ExpandoObject_ExpandoData__Fields {
    struct ExpandoClass* Class;
    struct Object__Array* _dataArray;
    int32_t _version;
};
#endif
#if !defined(IL2CPP_STRUCT_ExpandoObject_ExpandoData__Fields_FWDDECL)
#define IL2CPP_STRUCT_ExpandoObject_ExpandoData__Fields_FWDDECL
#include <Modloader/app/structs/ExpandoClass.h>
#include <Modloader/app/structs/Object__Array.h>
#endif
#undef IL2CPP_STRUCT_ExpandoObject_ExpandoData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpandoObject_ExpandoData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ExpandoObject_ExpandoData__Fields_FWDDECL)
#include <Modloader/app/structs/ExpandoObject_ExpandoData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExpandoObject_ExpandoData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
