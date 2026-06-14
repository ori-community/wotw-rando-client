#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UIntPtrArrayTypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UIntPtrArrayTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UIntPtrArrayTypeInfo_DEFINED)
#include <Modloader/app/structs/UIntPtrArrayTypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_UIntPtrArrayTypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_UIntPtrArrayTypeInfo_DEFINED
struct UIntPtrArrayTypeInfo__Class;
struct UIntPtrArrayTypeInfo {
    struct UIntPtrArrayTypeInfo__Class* klass;
    MonitorData* monitor;
    struct UIntPtrArrayTypeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UIntPtrArrayTypeInfo_FWDDECL)
#define IL2CPP_STRUCT_UIntPtrArrayTypeInfo_FWDDECL
#include <Modloader/app/structs/UIntPtrArrayTypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_UIntPtrArrayTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UIntPtrArrayTypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_UIntPtrArrayTypeInfo_FWDDECL)
#include <Modloader/app/structs/UIntPtrArrayTypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UIntPtrArrayTypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
