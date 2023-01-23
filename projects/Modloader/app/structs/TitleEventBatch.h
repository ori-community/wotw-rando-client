#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TitleEventBatch_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TitleEventBatch_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleEventBatch_DEFINED)
#include <Modloader/app/structs/TitleEventBatch__Fields.h>
#if defined(IL2CPP_STRUCT_TitleEventBatch__Fields_DEFINED)
#define IL2CPP_STRUCT_TitleEventBatch_DEFINED
struct TitleEventBatch__Class;
struct TitleEventBatch {
    struct TitleEventBatch__Class* klass;
    MonitorData* monitor;
    struct TitleEventBatch__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TitleEventBatch_FWDDECL)
#define IL2CPP_STRUCT_TitleEventBatch_FWDDECL
#include <Modloader/app/structs/TitleEventBatch__Class.h>
#endif
#undef IL2CPP_STRUCT_TitleEventBatch_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleEventBatch_DEFINED) && !defined(IL2CPP_STRUCT_TitleEventBatch_FWDDECL)
#include <Modloader/app/structs/TitleEventBatch.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TitleEventBatch.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
