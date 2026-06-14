#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderAPI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderAPI_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderAPI_DEFINED)
#define IL2CPP_STRUCT_UberShaderAPI_DEFINED
struct UberShaderAPI__Class;
struct UberShaderAPI {
    struct UberShaderAPI__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UberShaderAPI_FWDDECL)
#define IL2CPP_STRUCT_UberShaderAPI_FWDDECL
#include <Modloader/app/structs/UberShaderAPI__Class.h>
#endif
#undef IL2CPP_STRUCT_UberShaderAPI_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderAPI_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderAPI_FWDDECL)
#include <Modloader/app/structs/UberShaderAPI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderAPI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
