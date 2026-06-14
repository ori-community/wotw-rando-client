#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DllCheck__Class_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DllCheck__Class_INITIALIZING
#if !defined(IL2CPP_STRUCT_DllCheck__Class_DEFINED)
#include <Modloader/app/structs/DllCheck__VTable.h>
#if defined(IL2CPP_STRUCT_DllCheck__VTable_DEFINED)
#define IL2CPP_STRUCT_DllCheck__Class_DEFINED
struct DllCheck__StaticFields;
struct DllCheck__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
    struct DllCheck__StaticFields* static_fields;
    const Il2CppRGCTXData* rgctx_data;
    Il2CppClass_1 _1;
    struct DllCheck__VTable vtable;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DllCheck__Class_FWDDECL)
#define IL2CPP_STRUCT_DllCheck__Class_FWDDECL
#include <Modloader/app/structs/DllCheck__StaticFields.h>
#endif
#undef IL2CPP_STRUCT_DllCheck__Class_INITIALIZING
#if !defined(IL2CPP_STRUCT_DllCheck__Class_DEFINED) && !defined(IL2CPP_STRUCT_DllCheck__Class_FWDDECL)
#include <Modloader/app/structs/DllCheck__Class.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DllCheck__Class.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
