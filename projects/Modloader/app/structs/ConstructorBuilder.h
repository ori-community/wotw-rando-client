#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConstructorBuilder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConstructorBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstructorBuilder_DEFINED)
#define IL2CPP_STRUCT_ConstructorBuilder_DEFINED
struct ConstructorBuilder__Class;
struct ConstructorBuilder {
    struct ConstructorBuilder__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ConstructorBuilder_FWDDECL)
#define IL2CPP_STRUCT_ConstructorBuilder_FWDDECL
#include <Modloader/app/structs/ConstructorBuilder__Class.h>
#endif
#undef IL2CPP_STRUCT_ConstructorBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstructorBuilder_DEFINED) && !defined(IL2CPP_STRUCT_ConstructorBuilder_FWDDECL)
#include <Modloader/app/structs/ConstructorBuilder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConstructorBuilder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
