#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeNames_ATypeName_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeNames_ATypeName_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeNames_ATypeName_DEFINED)
#define IL2CPP_STRUCT_TypeNames_ATypeName_DEFINED
struct TypeNames_ATypeName__Class;
struct TypeNames_ATypeName {
    struct TypeNames_ATypeName__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TypeNames_ATypeName_FWDDECL)
#define IL2CPP_STRUCT_TypeNames_ATypeName_FWDDECL
#include <Modloader/app/structs/TypeNames_ATypeName__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeNames_ATypeName_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeNames_ATypeName_DEFINED) && !defined(IL2CPP_STRUCT_TypeNames_ATypeName_FWDDECL)
#include <Modloader/app/structs/TypeNames_ATypeName.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeNames_ATypeName.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
