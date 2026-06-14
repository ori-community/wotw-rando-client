#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderOrderAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderOrderAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderOrderAttribute_DEFINED)
#include <Modloader/app/structs/UberShaderOrderAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderOrderAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_UberShaderOrderAttribute_DEFINED
struct UberShaderOrderAttribute__Class;
struct UberShaderOrderAttribute {
    struct UberShaderOrderAttribute__Class* klass;
    MonitorData* monitor;
    struct UberShaderOrderAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderOrderAttribute_FWDDECL)
#define IL2CPP_STRUCT_UberShaderOrderAttribute_FWDDECL
#include <Modloader/app/structs/UberShaderOrderAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_UberShaderOrderAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderOrderAttribute_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderOrderAttribute_FWDDECL)
#include <Modloader/app/structs/UberShaderOrderAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderOrderAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
