#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParameterBuilder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParameterBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParameterBuilder_DEFINED)
#define IL2CPP_STRUCT_ParameterBuilder_DEFINED
struct ParameterBuilder__Class;
struct ParameterBuilder {
    struct ParameterBuilder__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ParameterBuilder_FWDDECL)
#define IL2CPP_STRUCT_ParameterBuilder_FWDDECL
#include <Modloader/app/structs/ParameterBuilder__Class.h>
#endif
#undef IL2CPP_STRUCT_ParameterBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParameterBuilder_DEFINED) && !defined(IL2CPP_STRUCT_ParameterBuilder_FWDDECL)
#include <Modloader/app/structs/ParameterBuilder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParameterBuilder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
