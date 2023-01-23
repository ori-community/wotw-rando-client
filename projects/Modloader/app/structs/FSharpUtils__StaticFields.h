#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FSharpUtils__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FSharpUtils__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FSharpUtils__StaticFields_DEFINED)
#define IL2CPP_STRUCT_FSharpUtils__StaticFields_DEFINED
struct Object;
struct MethodInfo_1;
struct Type;
struct Assembly;
struct MethodCall_2_System_Object_System_Object_;
struct Func_2_Object_Object_;
struct FSharpUtils__StaticFields {
    struct Object* Lock;
    bool _initialized;
    struct MethodInfo_1* _ofSeq;
    struct Type* _mapType;
    struct Assembly* _FSharpCoreAssembly_k__BackingField;
    struct MethodCall_2_System_Object_System_Object_* _IsUnion_k__BackingField;
    struct MethodCall_2_System_Object_System_Object_* _GetUnionCases_k__BackingField;
    struct MethodCall_2_System_Object_System_Object_* _PreComputeUnionTagReader_k__BackingField;
    struct MethodCall_2_System_Object_System_Object_* _PreComputeUnionReader_k__BackingField;
    struct MethodCall_2_System_Object_System_Object_* _PreComputeUnionConstructor_k__BackingField;
    struct Func_2_Object_Object_* _GetUnionCaseInfoDeclaringType_k__BackingField;
    struct Func_2_Object_Object_* _GetUnionCaseInfoName_k__BackingField;
    struct Func_2_Object_Object_* _GetUnionCaseInfoTag_k__BackingField;
    struct MethodCall_2_System_Object_System_Object_* _GetUnionCaseInfoFields_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_FSharpUtils__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_FSharpUtils__StaticFields_FWDDECL
#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/Func_2_Object_Object_.h>
#include <Modloader/app/structs/MethodCall_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_FSharpUtils__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FSharpUtils__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_FSharpUtils__StaticFields_FWDDECL)
#include <Modloader/app/structs/FSharpUtils__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FSharpUtils__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
