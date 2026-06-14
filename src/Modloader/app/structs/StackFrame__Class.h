#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StackFrame__Class_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StackFrame__Class_INITIALIZING
#if !defined(IL2CPP_STRUCT_StackFrame__Class_DEFINED)
#include <Modloader/app/structs/StackFrame__VTable.h>
#if defined(IL2CPP_STRUCT_StackFrame__VTable_DEFINED)
#define IL2CPP_STRUCT_StackFrame__Class_DEFINED
struct StackFrame__StaticFields;
struct StackFrame__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
    struct StackFrame__StaticFields* static_fields;
    const Il2CppRGCTXData* rgctx_data;
    Il2CppClass_1 _1;
    struct StackFrame__VTable vtable;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StackFrame__Class_FWDDECL)
#define IL2CPP_STRUCT_StackFrame__Class_FWDDECL
#include <Modloader/app/structs/StackFrame__StaticFields.h>
#endif
#undef IL2CPP_STRUCT_StackFrame__Class_INITIALIZING
#if !defined(IL2CPP_STRUCT_StackFrame__Class_DEFINED) && !defined(IL2CPP_STRUCT_StackFrame__Class_FWDDECL)
#include <Modloader/app/structs/StackFrame__Class.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StackFrame__Class.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
