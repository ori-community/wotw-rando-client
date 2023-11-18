#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MethodBuilder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MethodBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_MethodBuilder_DEFINED)
#define IL2CPP_STRUCT_MethodBuilder_DEFINED
struct MethodBuilder__Class;
struct MethodBuilder {
    struct MethodBuilder__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MethodBuilder_FWDDECL)
#define IL2CPP_STRUCT_MethodBuilder_FWDDECL
#include <Modloader/app/structs/MethodBuilder__Class.h>
#endif
#undef IL2CPP_STRUCT_MethodBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_MethodBuilder_DEFINED) && !defined(IL2CPP_STRUCT_MethodBuilder_FWDDECL)
#include <Modloader/app/structs/MethodBuilder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MethodBuilder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
