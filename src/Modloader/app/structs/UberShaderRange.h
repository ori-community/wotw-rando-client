#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderRange_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderRange_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderRange_DEFINED)
#include <Modloader/app/structs/UberShaderRange__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderRange__Fields_DEFINED)
#define IL2CPP_STRUCT_UberShaderRange_DEFINED
struct UberShaderRange__Class;
struct UberShaderRange {
    struct UberShaderRange__Class* klass;
    MonitorData* monitor;
    struct UberShaderRange__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderRange_FWDDECL)
#define IL2CPP_STRUCT_UberShaderRange_FWDDECL
#include <Modloader/app/structs/UberShaderRange__Class.h>
#endif
#undef IL2CPP_STRUCT_UberShaderRange_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderRange_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderRange_FWDDECL)
#include <Modloader/app/structs/UberShaderRange.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderRange.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
