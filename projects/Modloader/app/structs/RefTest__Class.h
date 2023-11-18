#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RefTest__Class_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RefTest__Class_INITIALIZING
#if !defined(IL2CPP_STRUCT_RefTest__Class_DEFINED)
#include <Modloader/app/structs/RefTest__VTable.h>
#if defined(IL2CPP_STRUCT_RefTest__VTable_DEFINED)
#define IL2CPP_STRUCT_RefTest__Class_DEFINED
struct RefTest__StaticFields;
struct RefTest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
    struct RefTest__StaticFields* static_fields;
    const Il2CppRGCTXData* rgctx_data;
    Il2CppClass_1 _1;
    struct RefTest__VTable vtable;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RefTest__Class_FWDDECL)
#define IL2CPP_STRUCT_RefTest__Class_FWDDECL
#include <Modloader/app/structs/RefTest__StaticFields.h>
#endif
#undef IL2CPP_STRUCT_RefTest__Class_INITIALIZING
#if !defined(IL2CPP_STRUCT_RefTest__Class_DEFINED) && !defined(IL2CPP_STRUCT_RefTest__Class_FWDDECL)
#include <Modloader/app/structs/RefTest__Class.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RefTest__Class.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
