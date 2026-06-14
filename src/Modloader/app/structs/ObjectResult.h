#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectResult_DEFINED)
#include <Modloader/app/structs/ObjectResult__Fields.h>
#if defined(IL2CPP_STRUCT_ObjectResult__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectResult_DEFINED
struct ObjectResult__Class;
struct ObjectResult {
    struct ObjectResult__Class* klass;
    MonitorData* monitor;
    struct ObjectResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectResult_FWDDECL)
#define IL2CPP_STRUCT_ObjectResult_FWDDECL
#include <Modloader/app/structs/ObjectResult__Class.h>
#endif
#undef IL2CPP_STRUCT_ObjectResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectResult_DEFINED) && !defined(IL2CPP_STRUCT_ObjectResult_FWDDECL)
#include <Modloader/app/structs/ObjectResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
