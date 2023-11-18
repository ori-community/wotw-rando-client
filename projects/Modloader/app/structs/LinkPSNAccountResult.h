#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LinkPSNAccountResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LinkPSNAccountResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinkPSNAccountResult_DEFINED)
#include <Modloader/app/structs/LinkPSNAccountResult__Fields.h>
#if defined(IL2CPP_STRUCT_LinkPSNAccountResult__Fields_DEFINED)
#define IL2CPP_STRUCT_LinkPSNAccountResult_DEFINED
struct LinkPSNAccountResult__Class;
struct LinkPSNAccountResult {
    struct LinkPSNAccountResult__Class* klass;
    MonitorData* monitor;
    struct LinkPSNAccountResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LinkPSNAccountResult_FWDDECL)
#define IL2CPP_STRUCT_LinkPSNAccountResult_FWDDECL
#include <Modloader/app/structs/LinkPSNAccountResult__Class.h>
#endif
#undef IL2CPP_STRUCT_LinkPSNAccountResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinkPSNAccountResult_DEFINED) && !defined(IL2CPP_STRUCT_LinkPSNAccountResult_FWDDECL)
#include <Modloader/app/structs/LinkPSNAccountResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LinkPSNAccountResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
