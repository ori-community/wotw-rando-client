#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectReader_TypeNAssembly_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectReader_TypeNAssembly_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectReader_TypeNAssembly_DEFINED)
#include <Modloader/app/structs/ObjectReader_TypeNAssembly__Fields.h>
#if defined(IL2CPP_STRUCT_ObjectReader_TypeNAssembly__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectReader_TypeNAssembly_DEFINED
struct ObjectReader_TypeNAssembly__Class;
struct ObjectReader_TypeNAssembly {
    struct ObjectReader_TypeNAssembly__Class* klass;
    MonitorData* monitor;
    struct ObjectReader_TypeNAssembly__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectReader_TypeNAssembly_FWDDECL)
#define IL2CPP_STRUCT_ObjectReader_TypeNAssembly_FWDDECL
#include <Modloader/app/structs/ObjectReader_TypeNAssembly__Class.h>
#endif
#undef IL2CPP_STRUCT_ObjectReader_TypeNAssembly_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectReader_TypeNAssembly_DEFINED) && !defined(IL2CPP_STRUCT_ObjectReader_TypeNAssembly_FWDDECL)
#include <Modloader/app/structs/ObjectReader_TypeNAssembly.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectReader_TypeNAssembly.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
