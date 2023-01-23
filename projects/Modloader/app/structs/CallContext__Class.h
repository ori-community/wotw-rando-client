#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CallContext__Class_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CallContext__Class_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallContext__Class_DEFINED)
#include <Modloader/app/structs/CallContext__VTable.h>
#if defined(IL2CPP_STRUCT_CallContext__VTable_DEFINED)
#define IL2CPP_STRUCT_CallContext__Class_DEFINED
struct CallContext__StaticFields;
struct CallContext__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
    struct CallContext__StaticFields* static_fields;
    const Il2CppRGCTXData* rgctx_data;
    Il2CppClass_1 _1;
    struct CallContext__VTable vtable;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CallContext__Class_FWDDECL)
#define IL2CPP_STRUCT_CallContext__Class_FWDDECL
#include <Modloader/app/structs/CallContext__StaticFields.h>
#endif
#undef IL2CPP_STRUCT_CallContext__Class_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallContext__Class_DEFINED) && !defined(IL2CPP_STRUCT_CallContext__Class_FWDDECL)
#include <Modloader/app/structs/CallContext__Class.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CallContext__Class.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
