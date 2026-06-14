#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeNames_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeNames_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeNames_DEFINED)
#define IL2CPP_STRUCT_TypeNames_DEFINED
struct TypeNames__Class;
struct TypeNames {
    struct TypeNames__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TypeNames_FWDDECL)
#define IL2CPP_STRUCT_TypeNames_FWDDECL
#include <Modloader/app/structs/TypeNames__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeNames_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeNames_DEFINED) && !defined(IL2CPP_STRUCT_TypeNames_FWDDECL)
#include <Modloader/app/structs/TypeNames.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeNames.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
