#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OnRemoveWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OnRemoveWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnRemoveWriter_DEFINED)
#include <Modloader/app/structs/OnRemoveWriter__Fields.h>
#if defined(IL2CPP_STRUCT_OnRemoveWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_OnRemoveWriter_DEFINED
struct OnRemoveWriter__Class;
struct OnRemoveWriter {
    struct OnRemoveWriter__Class* klass;
    MonitorData* monitor;
    struct OnRemoveWriter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OnRemoveWriter_FWDDECL)
#define IL2CPP_STRUCT_OnRemoveWriter_FWDDECL
#include <Modloader/app/structs/OnRemoveWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_OnRemoveWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnRemoveWriter_DEFINED) && !defined(IL2CPP_STRUCT_OnRemoveWriter_FWDDECL)
#include <Modloader/app/structs/OnRemoveWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OnRemoveWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
