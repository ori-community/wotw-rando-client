#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransformAccessArray__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransformAccessArray__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformAccessArray__Boxed_DEFINED)
#include <Modloader/app/structs/TransformAccessArray.h>
#if defined(IL2CPP_STRUCT_TransformAccessArray_DEFINED)
#define IL2CPP_STRUCT_TransformAccessArray__Boxed_DEFINED
struct TransformAccessArray__Class;
struct TransformAccessArray__Boxed {
    struct TransformAccessArray__Class* klass;
    MonitorData* monitor;
    struct TransformAccessArray fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TransformAccessArray__Boxed_FWDDECL)
#define IL2CPP_STRUCT_TransformAccessArray__Boxed_FWDDECL
#include <Modloader/app/structs/TransformAccessArray__Class.h>
#endif
#undef IL2CPP_STRUCT_TransformAccessArray__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformAccessArray__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_TransformAccessArray__Boxed_FWDDECL)
#include <Modloader/app/structs/TransformAccessArray__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransformAccessArray__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
