#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BooleanTypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BooleanTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_BooleanTypeInfo_DEFINED)
#include <Modloader/app/structs/BooleanTypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_BooleanTypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_BooleanTypeInfo_DEFINED
struct BooleanTypeInfo__Class;
struct BooleanTypeInfo {
    struct BooleanTypeInfo__Class* klass;
    MonitorData* monitor;
    struct BooleanTypeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BooleanTypeInfo_FWDDECL)
#define IL2CPP_STRUCT_BooleanTypeInfo_FWDDECL
#include <Modloader/app/structs/BooleanTypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_BooleanTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_BooleanTypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_BooleanTypeInfo_FWDDECL)
#include <Modloader/app/structs/BooleanTypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BooleanTypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
