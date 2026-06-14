#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderVector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderVector_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderVector_DEFINED)
#include <Modloader/app/structs/UberShaderVector__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderVector__Fields_DEFINED)
#define IL2CPP_STRUCT_UberShaderVector_DEFINED
struct UberShaderVector__Class;
struct UberShaderVector {
    struct UberShaderVector__Class* klass;
    MonitorData* monitor;
    struct UberShaderVector__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderVector_FWDDECL)
#define IL2CPP_STRUCT_UberShaderVector_FWDDECL
#include <Modloader/app/structs/UberShaderVector__Class.h>
#endif
#undef IL2CPP_STRUCT_UberShaderVector_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderVector_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderVector_FWDDECL)
#include <Modloader/app/structs/UberShaderVector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderVector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
