#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderBlock_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderBlock_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderBlock_DEFINED)
#include <Modloader/app/structs/UberShaderBlock__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderBlock__Fields_DEFINED)
#define IL2CPP_STRUCT_UberShaderBlock_DEFINED
struct UberShaderBlock__Class;
struct UberShaderBlock {
    struct UberShaderBlock__Class* klass;
    MonitorData* monitor;
    struct UberShaderBlock__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderBlock_FWDDECL)
#define IL2CPP_STRUCT_UberShaderBlock_FWDDECL
#include <Modloader/app/structs/UberShaderBlock__Class.h>
#endif
#undef IL2CPP_STRUCT_UberShaderBlock_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderBlock_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderBlock_FWDDECL)
#include <Modloader/app/structs/UberShaderBlock.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderBlock.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
