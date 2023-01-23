#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicDataLinkSerializedData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicDataLinkSerializedData_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicDataLinkSerializedData_DEFINED)
#include <Modloader/app/structs/DynamicDataLinkUtils_DataTargetMemberType__Enum.h>
#if defined(IL2CPP_STRUCT_DynamicDataLinkUtils_DataTargetMemberType__Enum_DEFINED)
#define IL2CPP_STRUCT_DynamicDataLinkSerializedData_DEFINED
struct Object_1;
struct String;
struct DynamicDataLinkSerializedData {
    struct Object_1* TargetObject;
    struct String* MemberName;
    struct String* ParameterName;
    DynamicDataLinkUtils_DataTargetMemberType__Enum TargetMemberType;

    int32_t ClassID;
    int32_t FieldID;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DynamicDataLinkSerializedData_FWDDECL)
#define IL2CPP_STRUCT_DynamicDataLinkSerializedData_FWDDECL
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DynamicDataLinkSerializedData_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicDataLinkSerializedData_DEFINED) && !defined(IL2CPP_STRUCT_DynamicDataLinkSerializedData_FWDDECL)
#include <Modloader/app/structs/DynamicDataLinkSerializedData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicDataLinkSerializedData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
