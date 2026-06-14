#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SampleComparer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SampleComparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_SampleComparer_DEFINED)
#include <Modloader/app/structs/SampleComparer__Fields.h>
#if defined(IL2CPP_STRUCT_SampleComparer__Fields_DEFINED)
#define IL2CPP_STRUCT_SampleComparer_DEFINED
struct SampleComparer__Class;
struct SampleComparer {
    struct SampleComparer__Class* klass;
    MonitorData* monitor;
    struct SampleComparer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SampleComparer_FWDDECL)
#define IL2CPP_STRUCT_SampleComparer_FWDDECL
#include <Modloader/app/structs/SampleComparer__Class.h>
#endif
#undef IL2CPP_STRUCT_SampleComparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_SampleComparer_DEFINED) && !defined(IL2CPP_STRUCT_SampleComparer_FWDDECL)
#include <Modloader/app/structs/SampleComparer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SampleComparer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
