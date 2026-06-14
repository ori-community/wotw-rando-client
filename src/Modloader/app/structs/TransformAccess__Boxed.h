#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransformAccess__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransformAccess__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformAccess__Boxed_DEFINED)
#include <Modloader/app/structs/TransformAccess.h>
#if defined(IL2CPP_STRUCT_TransformAccess_DEFINED)
#define IL2CPP_STRUCT_TransformAccess__Boxed_DEFINED
struct TransformAccess__Class;
struct TransformAccess__Boxed {
    struct TransformAccess__Class* klass;
    MonitorData* monitor;
    struct TransformAccess fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TransformAccess__Boxed_FWDDECL)
#define IL2CPP_STRUCT_TransformAccess__Boxed_FWDDECL
#include <Modloader/app/structs/TransformAccess__Class.h>
#endif
#undef IL2CPP_STRUCT_TransformAccess__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformAccess__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_TransformAccess__Boxed_FWDDECL)
#include <Modloader/app/structs/TransformAccess__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransformAccess__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
