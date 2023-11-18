#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SymmetricTransform_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SymmetricTransform_INITIALIZING
#if !defined(IL2CPP_STRUCT_SymmetricTransform_DEFINED)
#include <Modloader/app/structs/SymmetricTransform__Fields.h>
#if defined(IL2CPP_STRUCT_SymmetricTransform__Fields_DEFINED)
#define IL2CPP_STRUCT_SymmetricTransform_DEFINED
struct SymmetricTransform__Class;
struct SymmetricTransform {
    struct SymmetricTransform__Class* klass;
    MonitorData* monitor;
    struct SymmetricTransform__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SymmetricTransform_FWDDECL)
#define IL2CPP_STRUCT_SymmetricTransform_FWDDECL
#include <Modloader/app/structs/SymmetricTransform__Class.h>
#endif
#undef IL2CPP_STRUCT_SymmetricTransform_INITIALIZING
#if !defined(IL2CPP_STRUCT_SymmetricTransform_DEFINED) && !defined(IL2CPP_STRUCT_SymmetricTransform_FWDDECL)
#include <Modloader/app/structs/SymmetricTransform.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SymmetricTransform.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
