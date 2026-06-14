#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CFObject__Class_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CFObject__Class_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFObject__Class_DEFINED)
#include <Modloader/app/structs/CFObject__VTable.h>
#if defined(IL2CPP_STRUCT_CFObject__VTable_DEFINED)
#define IL2CPP_STRUCT_CFObject__Class_DEFINED
struct CFObject__StaticFields;
struct CFObject__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
    struct CFObject__StaticFields* static_fields;
    const Il2CppRGCTXData* rgctx_data;
    Il2CppClass_1 _1;
    struct CFObject__VTable vtable;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CFObject__Class_FWDDECL)
#define IL2CPP_STRUCT_CFObject__Class_FWDDECL
#include <Modloader/app/structs/CFObject__StaticFields.h>
#endif
#undef IL2CPP_STRUCT_CFObject__Class_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFObject__Class_DEFINED) && !defined(IL2CPP_STRUCT_CFObject__Class_FWDDECL)
#include <Modloader/app/structs/CFObject__Class.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CFObject__Class.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
