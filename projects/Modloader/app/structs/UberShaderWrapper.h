#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderWrapper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderWrapper_DEFINED)
#include <Modloader/app/structs/UberShaderWrapper__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_UberShaderWrapper_DEFINED
struct UberShaderWrapper__Class;
struct UberShaderWrapper {
    struct UberShaderWrapper__Class* klass;
    MonitorData* monitor;
    struct UberShaderWrapper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderWrapper_FWDDECL)
#define IL2CPP_STRUCT_UberShaderWrapper_FWDDECL
#include <Modloader/app/structs/UberShaderWrapper__Class.h>
#endif
#undef IL2CPP_STRUCT_UberShaderWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderWrapper_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderWrapper_FWDDECL)
#include <Modloader/app/structs/UberShaderWrapper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderWrapper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
