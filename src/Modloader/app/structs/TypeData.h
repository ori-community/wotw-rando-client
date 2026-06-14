#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeData_DEFINED)
#include <Modloader/app/structs/TypeData__Fields.h>
#if defined(IL2CPP_STRUCT_TypeData__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeData_DEFINED
struct TypeData__Class;
struct TypeData {
    struct TypeData__Class* klass;
    MonitorData* monitor;
    struct TypeData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TypeData_FWDDECL)
#define IL2CPP_STRUCT_TypeData_FWDDECL
#include <Modloader/app/structs/TypeData__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeData_DEFINED) && !defined(IL2CPP_STRUCT_TypeData_FWDDECL)
#include <Modloader/app/structs/TypeData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
