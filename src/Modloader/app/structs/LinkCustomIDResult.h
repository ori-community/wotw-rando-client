#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LinkCustomIDResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LinkCustomIDResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinkCustomIDResult_DEFINED)
#include <Modloader/app/structs/LinkCustomIDResult__Fields.h>
#if defined(IL2CPP_STRUCT_LinkCustomIDResult__Fields_DEFINED)
#define IL2CPP_STRUCT_LinkCustomIDResult_DEFINED
struct LinkCustomIDResult__Class;
struct LinkCustomIDResult {
    struct LinkCustomIDResult__Class* klass;
    MonitorData* monitor;
    struct LinkCustomIDResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LinkCustomIDResult_FWDDECL)
#define IL2CPP_STRUCT_LinkCustomIDResult_FWDDECL
#include <Modloader/app/structs/LinkCustomIDResult__Class.h>
#endif
#undef IL2CPP_STRUCT_LinkCustomIDResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinkCustomIDResult_DEFINED) && !defined(IL2CPP_STRUCT_LinkCustomIDResult_FWDDECL)
#include <Modloader/app/structs/LinkCustomIDResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LinkCustomIDResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
