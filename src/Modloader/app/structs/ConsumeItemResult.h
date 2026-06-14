#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConsumeItemResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConsumeItemResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConsumeItemResult_DEFINED)
#include <Modloader/app/structs/ConsumeItemResult__Fields.h>
#if defined(IL2CPP_STRUCT_ConsumeItemResult__Fields_DEFINED)
#define IL2CPP_STRUCT_ConsumeItemResult_DEFINED
struct ConsumeItemResult__Class;
struct ConsumeItemResult {
    struct ConsumeItemResult__Class* klass;
    MonitorData* monitor;
    struct ConsumeItemResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConsumeItemResult_FWDDECL)
#define IL2CPP_STRUCT_ConsumeItemResult_FWDDECL
#include <Modloader/app/structs/ConsumeItemResult__Class.h>
#endif
#undef IL2CPP_STRUCT_ConsumeItemResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConsumeItemResult_DEFINED) && !defined(IL2CPP_STRUCT_ConsumeItemResult_FWDDECL)
#include <Modloader/app/structs/ConsumeItemResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConsumeItemResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
