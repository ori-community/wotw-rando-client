#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NameInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NameInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameInfo__Fields_DEFINED)
#include <Modloader/app/structs/InternalArrayTypeE__Enum.h>
#include <Modloader/app/structs/InternalPrimitiveTypeE__Enum.h>
#if defined(IL2CPP_STRUCT_InternalPrimitiveTypeE__Enum_DEFINED) && defined(IL2CPP_STRUCT_InternalArrayTypeE__Enum_DEFINED)
#define IL2CPP_STRUCT_NameInfo__Fields_DEFINED
struct String;
struct Type;
struct __declspec(align(8)) NameInfo__Fields {
    struct String* NIFullName;
    int64_t NIobjectId;
    int64_t NIassemId;
    InternalPrimitiveTypeE__Enum NIprimitiveTypeEnum;

    struct Type* NItype;
    bool NIisSealed;
    bool NIisArray;
    bool NIisArrayItem;
    bool NItransmitTypeOnObject;
    bool NItransmitTypeOnMember;
    bool NIisParentTypeOnObject;
    InternalArrayTypeE__Enum NIarrayEnum;

    bool NIsealedStatusChecked;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NameInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_NameInfo__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_NameInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NameInfo__Fields_FWDDECL)
#include <Modloader/app/structs/NameInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NameInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
