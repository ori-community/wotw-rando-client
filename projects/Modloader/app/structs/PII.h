#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PII_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PII_INITIALIZING
#if !defined(IL2CPP_STRUCT_PII_DEFINED)
#include <Modloader/app/structs/PII__Fields.h>
#if defined(IL2CPP_STRUCT_PII__Fields_DEFINED)
#define IL2CPP_STRUCT_PII_DEFINED
struct PII__Class;
struct PII {
    struct PII__Class* klass;
    MonitorData* monitor;
    struct PII__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PII_FWDDECL)
#define IL2CPP_STRUCT_PII_FWDDECL
#include <Modloader/app/structs/PII__Class.h>
#endif
#undef IL2CPP_STRUCT_PII_INITIALIZING
#if !defined(IL2CPP_STRUCT_PII_DEFINED) && !defined(IL2CPP_STRUCT_PII_FWDDECL)
#include <Modloader/app/structs/PII.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PII.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
