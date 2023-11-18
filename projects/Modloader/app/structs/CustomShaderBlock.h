#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CustomShaderBlock_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CustomShaderBlock_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomShaderBlock_DEFINED)
#include <Modloader/app/structs/CustomShaderBlock__Fields.h>
#if defined(IL2CPP_STRUCT_CustomShaderBlock__Fields_DEFINED)
#define IL2CPP_STRUCT_CustomShaderBlock_DEFINED
struct CustomShaderBlock__Class;
struct CustomShaderBlock {
    struct CustomShaderBlock__Class* klass;
    MonitorData* monitor;
    struct CustomShaderBlock__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CustomShaderBlock_FWDDECL)
#define IL2CPP_STRUCT_CustomShaderBlock_FWDDECL
#include <Modloader/app/structs/CustomShaderBlock__Class.h>
#endif
#undef IL2CPP_STRUCT_CustomShaderBlock_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomShaderBlock_DEFINED) && !defined(IL2CPP_STRUCT_CustomShaderBlock_FWDDECL)
#include <Modloader/app/structs/CustomShaderBlock.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CustomShaderBlock.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
