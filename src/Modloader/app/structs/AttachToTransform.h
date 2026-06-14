#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttachToTransform_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttachToTransform_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttachToTransform_DEFINED)
#include <Modloader/app/structs/AttachToTransform__Fields.h>
#if defined(IL2CPP_STRUCT_AttachToTransform__Fields_DEFINED)
#define IL2CPP_STRUCT_AttachToTransform_DEFINED
struct AttachToTransform__Class;
struct AttachToTransform {
    struct AttachToTransform__Class* klass;
    MonitorData* monitor;
    struct AttachToTransform__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AttachToTransform_FWDDECL)
#define IL2CPP_STRUCT_AttachToTransform_FWDDECL
#include <Modloader/app/structs/AttachToTransform__Class.h>
#endif
#undef IL2CPP_STRUCT_AttachToTransform_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttachToTransform_DEFINED) && !defined(IL2CPP_STRUCT_AttachToTransform_FWDDECL)
#include <Modloader/app/structs/AttachToTransform.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttachToTransform.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
