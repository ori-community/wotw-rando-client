#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContractionComparer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContractionComparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContractionComparer_DEFINED)
#define IL2CPP_STRUCT_ContractionComparer_DEFINED
struct ContractionComparer__Class;
struct ContractionComparer {
    struct ContractionComparer__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ContractionComparer_FWDDECL)
#define IL2CPP_STRUCT_ContractionComparer_FWDDECL
#include <Modloader/app/structs/ContractionComparer__Class.h>
#endif
#undef IL2CPP_STRUCT_ContractionComparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContractionComparer_DEFINED) && !defined(IL2CPP_STRUCT_ContractionComparer_FWDDECL)
#include <Modloader/app/structs/ContractionComparer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContractionComparer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
