#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataObjectMethodAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataObjectMethodAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataObjectMethodAttribute__Fields_DEFINED)
#include <Modloader/app/structs/DataObjectMethodType__Enum.h>
#if defined(IL2CPP_STRUCT_DataObjectMethodType__Enum_DEFINED)
#define IL2CPP_STRUCT_DataObjectMethodAttribute__Fields_DEFINED
struct __declspec(align(8)) DataObjectMethodAttribute__Fields {
    bool _isDefault;
    DataObjectMethodType__Enum _methodType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataObjectMethodAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataObjectMethodAttribute__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_DataObjectMethodAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataObjectMethodAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataObjectMethodAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/DataObjectMethodAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataObjectMethodAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
