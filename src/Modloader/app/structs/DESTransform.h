#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DESTransform_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DESTransform_INITIALIZING
#if !defined(IL2CPP_STRUCT_DESTransform_DEFINED)
#include <Modloader/app/structs/DESTransform__Fields.h>
#if defined(IL2CPP_STRUCT_DESTransform__Fields_DEFINED)
#define IL2CPP_STRUCT_DESTransform_DEFINED
struct DESTransform__Class;
struct DESTransform {
    struct DESTransform__Class* klass;
    MonitorData* monitor;
    struct DESTransform__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DESTransform_FWDDECL)
#define IL2CPP_STRUCT_DESTransform_FWDDECL
#include <Modloader/app/structs/DESTransform__Class.h>
#endif
#undef IL2CPP_STRUCT_DESTransform_INITIALIZING
#if !defined(IL2CPP_STRUCT_DESTransform_DEFINED) && !defined(IL2CPP_STRUCT_DESTransform_FWDDECL)
#include <Modloader/app/structs/DESTransform.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DESTransform.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
