#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IntPtrTypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IntPtrTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntPtrTypeInfo_DEFINED)
#include <Modloader/app/structs/IntPtrTypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_IntPtrTypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_IntPtrTypeInfo_DEFINED
struct IntPtrTypeInfo__Class;
struct IntPtrTypeInfo {
    struct IntPtrTypeInfo__Class* klass;
    MonitorData* monitor;
    struct IntPtrTypeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IntPtrTypeInfo_FWDDECL)
#define IL2CPP_STRUCT_IntPtrTypeInfo_FWDDECL
#include <Modloader/app/structs/IntPtrTypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_IntPtrTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntPtrTypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_IntPtrTypeInfo_FWDDECL)
#include <Modloader/app/structs/IntPtrTypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IntPtrTypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
