#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataObjectFieldAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataObjectFieldAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataObjectFieldAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_DataObjectFieldAttribute__Fields_DEFINED
struct __declspec(align(8)) DataObjectFieldAttribute__Fields {
    bool _primaryKey;
    bool _isIdentity;
    bool _isNullable;
    int32_t _length;
};
#endif
#if !defined(IL2CPP_STRUCT_DataObjectFieldAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataObjectFieldAttribute__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_DataObjectFieldAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataObjectFieldAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataObjectFieldAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/DataObjectFieldAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataObjectFieldAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
