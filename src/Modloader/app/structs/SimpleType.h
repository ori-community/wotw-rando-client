#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleType_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleType_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleType_DEFINED)
#include <Modloader/app/structs/SimpleType__Fields.h>
#if defined(IL2CPP_STRUCT_SimpleType__Fields_DEFINED)
#define IL2CPP_STRUCT_SimpleType_DEFINED
struct SimpleType__Class;
struct SimpleType {
    struct SimpleType__Class* klass;
    MonitorData* monitor;
    struct SimpleType__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleType_FWDDECL)
#define IL2CPP_STRUCT_SimpleType_FWDDECL
#include <Modloader/app/structs/SimpleType__Class.h>
#endif
#undef IL2CPP_STRUCT_SimpleType_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleType_DEFINED) && !defined(IL2CPP_STRUCT_SimpleType_FWDDECL)
#include <Modloader/app/structs/SimpleType.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleType.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
