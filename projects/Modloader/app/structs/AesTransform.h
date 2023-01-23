#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AesTransform_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AesTransform_INITIALIZING
#if !defined(IL2CPP_STRUCT_AesTransform_DEFINED)
#include <Modloader/app/structs/AesTransform__Fields.h>
#if defined(IL2CPP_STRUCT_AesTransform__Fields_DEFINED)
#define IL2CPP_STRUCT_AesTransform_DEFINED
struct AesTransform__Class;
struct AesTransform {
    struct AesTransform__Class* klass;
    MonitorData* monitor;
    struct AesTransform__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AesTransform_FWDDECL)
#define IL2CPP_STRUCT_AesTransform_FWDDECL
#include <Modloader/app/structs/AesTransform__Class.h>
#endif
#undef IL2CPP_STRUCT_AesTransform_INITIALIZING
#if !defined(IL2CPP_STRUCT_AesTransform_DEFINED) && !defined(IL2CPP_STRUCT_AesTransform_FWDDECL)
#include <Modloader/app/structs/AesTransform.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AesTransform.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
