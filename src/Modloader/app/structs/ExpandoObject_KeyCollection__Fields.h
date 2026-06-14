#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExpandoObject_KeyCollection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExpandoObject_KeyCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpandoObject_KeyCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_ExpandoObject_KeyCollection__Fields_DEFINED
struct ExpandoObject;
struct ExpandoObject_ExpandoData;
struct __declspec(align(8)) ExpandoObject_KeyCollection__Fields {
    struct ExpandoObject* _expando;
    int32_t _expandoVersion;
    int32_t _expandoCount;
    struct ExpandoObject_ExpandoData* _expandoData;
};
#endif
#if !defined(IL2CPP_STRUCT_ExpandoObject_KeyCollection__Fields_FWDDECL)
#define IL2CPP_STRUCT_ExpandoObject_KeyCollection__Fields_FWDDECL
#include <Modloader/app/structs/ExpandoObject.h>
#include <Modloader/app/structs/ExpandoObject_ExpandoData.h>
#endif
#undef IL2CPP_STRUCT_ExpandoObject_KeyCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpandoObject_KeyCollection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ExpandoObject_KeyCollection__Fields_FWDDECL)
#include <Modloader/app/structs/ExpandoObject_KeyCollection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExpandoObject_KeyCollection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
