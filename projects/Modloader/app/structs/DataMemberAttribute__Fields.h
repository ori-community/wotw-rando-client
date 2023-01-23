#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataMemberAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataMemberAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataMemberAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_DataMemberAttribute__Fields_DEFINED
struct String;
struct __declspec(align(8)) DataMemberAttribute__Fields {
    struct String* name;
    int32_t order;
    bool isRequired;
    bool emitDefaultValue;
};
#endif
#if !defined(IL2CPP_STRUCT_DataMemberAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataMemberAttribute__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DataMemberAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataMemberAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataMemberAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/DataMemberAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataMemberAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
