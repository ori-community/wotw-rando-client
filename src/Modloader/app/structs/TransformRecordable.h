#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransformRecordable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransformRecordable_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformRecordable_DEFINED)
#include <Modloader/app/structs/TransformRecordable__Fields.h>
#if defined(IL2CPP_STRUCT_TransformRecordable__Fields_DEFINED)
#define IL2CPP_STRUCT_TransformRecordable_DEFINED
struct TransformRecordable__Class;
struct TransformRecordable {
    struct TransformRecordable__Class* klass;
    MonitorData* monitor;
    struct TransformRecordable__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TransformRecordable_FWDDECL)
#define IL2CPP_STRUCT_TransformRecordable_FWDDECL
#include <Modloader/app/structs/TransformRecordable__Class.h>
#endif
#undef IL2CPP_STRUCT_TransformRecordable_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformRecordable_DEFINED) && !defined(IL2CPP_STRUCT_TransformRecordable_FWDDECL)
#include <Modloader/app/structs/TransformRecordable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransformRecordable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
