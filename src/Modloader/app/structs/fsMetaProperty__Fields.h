#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsMetaProperty__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsMetaProperty__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsMetaProperty__Fields_DEFINED)
#define IL2CPP_STRUCT_fsMetaProperty__Fields_DEFINED
struct MemberInfo_1;
struct Type;
struct String;
struct __declspec(align(8)) fsMetaProperty__Fields {
    struct MemberInfo_1* _memberInfo;
    struct Type* _StorageType_k__BackingField;
    struct Type* _OverrideConverterType_k__BackingField;
    bool _CanRead_k__BackingField;
    bool _CanWrite_k__BackingField;
    struct String* _JsonName_k__BackingField;
    struct String* _MemberName_k__BackingField;
    bool _IsPublic_k__BackingField;
    bool _IsReadOnly_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_fsMetaProperty__Fields_FWDDECL)
#define IL2CPP_STRUCT_fsMetaProperty__Fields_FWDDECL
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_fsMetaProperty__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsMetaProperty__Fields_DEFINED) && !defined(IL2CPP_STRUCT_fsMetaProperty__Fields_FWDDECL)
#include <Modloader/app/structs/fsMetaProperty__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsMetaProperty__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
