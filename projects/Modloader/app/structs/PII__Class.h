#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PII__Class_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PII__Class_INITIALIZING
#if !defined(IL2CPP_STRUCT_PII__Class_DEFINED)
#include <Modloader/app/structs/PII__VTable.h>
#if defined(IL2CPP_STRUCT_PII__VTable_DEFINED)
#define IL2CPP_STRUCT_PII__Class_DEFINED
struct PII__StaticFields;
struct PII__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
    struct PII__StaticFields* static_fields;
    const Il2CppRGCTXData* rgctx_data;
    Il2CppClass_1 _1;
    struct PII__VTable vtable;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PII__Class_FWDDECL)
#define IL2CPP_STRUCT_PII__Class_FWDDECL
#include <Modloader/app/structs/PII__StaticFields.h>
#endif
#undef IL2CPP_STRUCT_PII__Class_INITIALIZING
#if !defined(IL2CPP_STRUCT_PII__Class_DEFINED) && !defined(IL2CPP_STRUCT_PII__Class_FWDDECL)
#include <Modloader/app/structs/PII__Class.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PII__Class.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
