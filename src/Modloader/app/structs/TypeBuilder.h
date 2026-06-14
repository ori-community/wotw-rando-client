#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeBuilder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeBuilder_DEFINED)
#include <Modloader/app/structs/TypeBuilder__Fields.h>
#if defined(IL2CPP_STRUCT_TypeBuilder__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeBuilder_DEFINED
struct TypeBuilder__Class;
struct TypeBuilder {
    struct TypeBuilder__Class* klass;
    MonitorData* monitor;
    struct TypeBuilder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TypeBuilder_FWDDECL)
#define IL2CPP_STRUCT_TypeBuilder_FWDDECL
#include <Modloader/app/structs/TypeBuilder__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeBuilder_DEFINED) && !defined(IL2CPP_STRUCT_TypeBuilder_FWDDECL)
#include <Modloader/app/structs/TypeBuilder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeBuilder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
