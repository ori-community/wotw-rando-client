#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UIntPtrTypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UIntPtrTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UIntPtrTypeInfo_DEFINED)
#include <Modloader/app/structs/UIntPtrTypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_UIntPtrTypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_UIntPtrTypeInfo_DEFINED
struct UIntPtrTypeInfo__Class;
struct UIntPtrTypeInfo {
    struct UIntPtrTypeInfo__Class* klass;
    MonitorData* monitor;
    struct UIntPtrTypeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UIntPtrTypeInfo_FWDDECL)
#define IL2CPP_STRUCT_UIntPtrTypeInfo_FWDDECL
#include <Modloader/app/structs/UIntPtrTypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_UIntPtrTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UIntPtrTypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_UIntPtrTypeInfo_FWDDECL)
#include <Modloader/app/structs/UIntPtrTypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UIntPtrTypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
