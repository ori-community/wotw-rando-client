#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExtractedIntFromInt64_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExtractedIntFromInt64_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExtractedIntFromInt64_DEFINED)
#include <Modloader/app/structs/ExtractedIntFromInt64__Fields.h>
#if defined(IL2CPP_STRUCT_ExtractedIntFromInt64__Fields_DEFINED)
#define IL2CPP_STRUCT_ExtractedIntFromInt64_DEFINED
struct ExtractedIntFromInt64__Class;
struct ExtractedIntFromInt64 {
    struct ExtractedIntFromInt64__Class* klass;
    MonitorData* monitor;
    struct ExtractedIntFromInt64__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExtractedIntFromInt64_FWDDECL)
#define IL2CPP_STRUCT_ExtractedIntFromInt64_FWDDECL
#include <Modloader/app/structs/ExtractedIntFromInt64__Class.h>
#endif
#undef IL2CPP_STRUCT_ExtractedIntFromInt64_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExtractedIntFromInt64_DEFINED) && !defined(IL2CPP_STRUCT_ExtractedIntFromInt64_FWDDECL)
#include <Modloader/app/structs/ExtractedIntFromInt64.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExtractedIntFromInt64.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
