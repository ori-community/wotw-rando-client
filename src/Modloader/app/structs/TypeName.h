#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeName_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeName_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeName_DEFINED)
#define IL2CPP_STRUCT_TypeName_DEFINED
struct TypeName__Class;
struct TypeName {
    struct TypeName__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TypeName_FWDDECL)
#define IL2CPP_STRUCT_TypeName_FWDDECL
#include <Modloader/app/structs/TypeName__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeName_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeName_DEFINED) && !defined(IL2CPP_STRUCT_TypeName_FWDDECL)
#include <Modloader/app/structs/TypeName.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeName.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
