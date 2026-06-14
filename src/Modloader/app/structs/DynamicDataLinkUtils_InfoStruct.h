#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicDataLinkUtils_InfoStruct_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicDataLinkUtils_InfoStruct_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicDataLinkUtils_InfoStruct_DEFINED)
#define IL2CPP_STRUCT_DynamicDataLinkUtils_InfoStruct_DEFINED
struct MemberInfo_1;
struct Type;
struct DynamicDataLinkUtils_InfoStruct {
    struct MemberInfo_1* MemberInfo;
    struct Type* ReturnType;
};
#endif
#if !defined(IL2CPP_STRUCT_DynamicDataLinkUtils_InfoStruct_FWDDECL)
#define IL2CPP_STRUCT_DynamicDataLinkUtils_InfoStruct_FWDDECL
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_DynamicDataLinkUtils_InfoStruct_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicDataLinkUtils_InfoStruct_DEFINED) && !defined(IL2CPP_STRUCT_DynamicDataLinkUtils_InfoStruct_FWDDECL)
#include <Modloader/app/structs/DynamicDataLinkUtils_InfoStruct.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicDataLinkUtils_InfoStruct.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
