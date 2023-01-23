#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTypeMapMember__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTypeMapMember__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTypeMapMember__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlTypeMapMember__Fields_DEFINED
struct String;
struct TypeData;
struct MemberInfo_1;
struct MethodInfo_1;
struct Object;
struct __declspec(align(8)) XmlTypeMapMember__Fields {
    struct String* _name;
    int32_t _index;
    int32_t _globalIndex;
    int32_t _specifiedGlobalIndex;
    struct TypeData* _typeData;
    struct MemberInfo_1* _member;
    struct MemberInfo_1* _specifiedMember;
    struct MethodInfo_1* _shouldSerialize;
    struct Object* _defaultValue;
    int32_t _flags;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlTypeMapMember__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlTypeMapMember__Fields_FWDDECL
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TypeData.h>
#endif
#undef IL2CPP_STRUCT_XmlTypeMapMember__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTypeMapMember__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlTypeMapMember__Fields_FWDDECL)
#include <Modloader/app/structs/XmlTypeMapMember__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTypeMapMember__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
