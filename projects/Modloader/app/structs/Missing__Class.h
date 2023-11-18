#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Missing__Class_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Missing__Class_INITIALIZING
#if !defined(IL2CPP_STRUCT_Missing__Class_DEFINED)
#include <Modloader/app/structs/Missing__VTable.h>
#if defined(IL2CPP_STRUCT_Missing__VTable_DEFINED)
#define IL2CPP_STRUCT_Missing__Class_DEFINED
struct Missing__StaticFields;
struct Missing__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
    struct Missing__StaticFields* static_fields;
    const Il2CppRGCTXData* rgctx_data;
    Il2CppClass_1 _1;
    struct Missing__VTable vtable;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Missing__Class_FWDDECL)
#define IL2CPP_STRUCT_Missing__Class_FWDDECL
#include <Modloader/app/structs/Missing__StaticFields.h>
#endif
#undef IL2CPP_STRUCT_Missing__Class_INITIALIZING
#if !defined(IL2CPP_STRUCT_Missing__Class_DEFINED) && !defined(IL2CPP_STRUCT_Missing__Class_FWDDECL)
#include <Modloader/app/structs/Missing__Class.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Missing__Class.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
