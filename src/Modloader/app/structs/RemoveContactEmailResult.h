#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemoveContactEmailResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemoveContactEmailResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoveContactEmailResult_DEFINED)
#include <Modloader/app/structs/RemoveContactEmailResult__Fields.h>
#if defined(IL2CPP_STRUCT_RemoveContactEmailResult__Fields_DEFINED)
#define IL2CPP_STRUCT_RemoveContactEmailResult_DEFINED
struct RemoveContactEmailResult__Class;
struct RemoveContactEmailResult {
    struct RemoveContactEmailResult__Class* klass;
    MonitorData* monitor;
    struct RemoveContactEmailResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RemoveContactEmailResult_FWDDECL)
#define IL2CPP_STRUCT_RemoveContactEmailResult_FWDDECL
#include <Modloader/app/structs/RemoveContactEmailResult__Class.h>
#endif
#undef IL2CPP_STRUCT_RemoveContactEmailResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoveContactEmailResult_DEFINED) && !defined(IL2CPP_STRUCT_RemoveContactEmailResult_FWDDECL)
#include <Modloader/app/structs/RemoveContactEmailResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemoveContactEmailResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
