#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MaterialPropertyBlock_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MaterialPropertyBlock_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaterialPropertyBlock_DEFINED)
#include <Modloader/app/structs/MaterialPropertyBlock__Fields.h>
#if defined(IL2CPP_STRUCT_MaterialPropertyBlock__Fields_DEFINED)
#define IL2CPP_STRUCT_MaterialPropertyBlock_DEFINED
struct MaterialPropertyBlock__Class;
struct MaterialPropertyBlock {
    struct MaterialPropertyBlock__Class* klass;
    MonitorData* monitor;
    struct MaterialPropertyBlock__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MaterialPropertyBlock_FWDDECL)
#define IL2CPP_STRUCT_MaterialPropertyBlock_FWDDECL
#include <Modloader/app/structs/MaterialPropertyBlock__Class.h>
#endif
#undef IL2CPP_STRUCT_MaterialPropertyBlock_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaterialPropertyBlock_DEFINED) && !defined(IL2CPP_STRUCT_MaterialPropertyBlock_FWDDECL)
#include <Modloader/app/structs/MaterialPropertyBlock.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MaterialPropertyBlock.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
