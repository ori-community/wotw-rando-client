#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IntPtrArrayTypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IntPtrArrayTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntPtrArrayTypeInfo_DEFINED)
#include <Modloader/app/structs/IntPtrArrayTypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_IntPtrArrayTypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_IntPtrArrayTypeInfo_DEFINED
struct IntPtrArrayTypeInfo__Class;
struct IntPtrArrayTypeInfo {
    struct IntPtrArrayTypeInfo__Class* klass;
    MonitorData* monitor;
    struct IntPtrArrayTypeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IntPtrArrayTypeInfo_FWDDECL)
#define IL2CPP_STRUCT_IntPtrArrayTypeInfo_FWDDECL
#include <Modloader/app/structs/IntPtrArrayTypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_IntPtrArrayTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntPtrArrayTypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_IntPtrArrayTypeInfo_FWDDECL)
#include <Modloader/app/structs/IntPtrArrayTypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IntPtrArrayTypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
