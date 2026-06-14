#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransformProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransformProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformProvider_DEFINED)
#include <Modloader/app/structs/TransformProvider__Fields.h>
#if defined(IL2CPP_STRUCT_TransformProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_TransformProvider_DEFINED
struct TransformProvider__Class;
struct TransformProvider {
    struct TransformProvider__Class* klass;
    MonitorData* monitor;
    struct TransformProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TransformProvider_FWDDECL)
#define IL2CPP_STRUCT_TransformProvider_FWDDECL
#include <Modloader/app/structs/TransformProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_TransformProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformProvider_DEFINED) && !defined(IL2CPP_STRUCT_TransformProvider_FWDDECL)
#include <Modloader/app/structs/TransformProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransformProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
