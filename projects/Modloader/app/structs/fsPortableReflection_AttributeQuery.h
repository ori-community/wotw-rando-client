#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsPortableReflection_AttributeQuery_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsPortableReflection_AttributeQuery_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsPortableReflection_AttributeQuery_DEFINED)
#define IL2CPP_STRUCT_fsPortableReflection_AttributeQuery_DEFINED
struct MemberInfo_1;
struct Type;
struct fsPortableReflection_AttributeQuery {
    struct MemberInfo_1* MemberInfo;
    struct Type* AttributeType;
};
#endif
#if !defined(IL2CPP_STRUCT_fsPortableReflection_AttributeQuery_FWDDECL)
#define IL2CPP_STRUCT_fsPortableReflection_AttributeQuery_FWDDECL
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_fsPortableReflection_AttributeQuery_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsPortableReflection_AttributeQuery_DEFINED) && !defined(IL2CPP_STRUCT_fsPortableReflection_AttributeQuery_FWDDECL)
#include <Modloader/app/structs/fsPortableReflection_AttributeQuery.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsPortableReflection_AttributeQuery.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
