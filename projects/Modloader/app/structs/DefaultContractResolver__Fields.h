#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DefaultContractResolver__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DefaultContractResolver__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultContractResolver__Fields_DEFINED)
#include <Modloader/app/structs/BindingFlags__Enum.h>
#if defined(IL2CPP_STRUCT_BindingFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_DefaultContractResolver__Fields_DEFINED
struct DefaultJsonNameTable;
struct ThreadSafeStore_2_System_Type_Newtonsoft_Json_Serialization_JsonContract_;
struct NamingStrategy;
struct __declspec(align(8)) DefaultContractResolver__Fields {
    struct DefaultJsonNameTable* _nameTable;
    struct ThreadSafeStore_2_System_Type_Newtonsoft_Json_Serialization_JsonContract_* _contractCache;
    BindingFlags__Enum _DefaultMembersSearchFlags_k__BackingField;

    bool _SerializeCompilerGeneratedMembers_k__BackingField;
    bool _IgnoreSerializableInterface_k__BackingField;
    bool _IgnoreSerializableAttribute_k__BackingField;
    bool _IgnoreIsSpecifiedMembers_k__BackingField;
    bool _IgnoreShouldSerializeMembers_k__BackingField;
    struct NamingStrategy* _NamingStrategy_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DefaultContractResolver__Fields_FWDDECL)
#define IL2CPP_STRUCT_DefaultContractResolver__Fields_FWDDECL
#include <Modloader/app/structs/DefaultJsonNameTable.h>
#include <Modloader/app/structs/NamingStrategy.h>
#include <Modloader/app/structs/ThreadSafeStore_2_System_Type_Newtonsoft_Json_Serialization_JsonContract_.h>
#endif
#undef IL2CPP_STRUCT_DefaultContractResolver__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultContractResolver__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DefaultContractResolver__Fields_FWDDECL)
#include <Modloader/app/structs/DefaultContractResolver__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DefaultContractResolver__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
