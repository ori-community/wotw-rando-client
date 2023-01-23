#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SecurityParser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SecurityParser_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityParser_DEFINED)
#include <Modloader/app/structs/SecurityParser__Fields.h>
#if defined(IL2CPP_STRUCT_SecurityParser__Fields_DEFINED)
#define IL2CPP_STRUCT_SecurityParser_DEFINED
struct SecurityParser__Class;
struct SecurityParser {
    struct SecurityParser__Class* klass;
    MonitorData* monitor;
    struct SecurityParser__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SecurityParser_FWDDECL)
#define IL2CPP_STRUCT_SecurityParser_FWDDECL
#include <Modloader/app/structs/SecurityParser__Class.h>
#endif
#undef IL2CPP_STRUCT_SecurityParser_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityParser_DEFINED) && !defined(IL2CPP_STRUCT_SecurityParser_FWDDECL)
#include <Modloader/app/structs/SecurityParser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SecurityParser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
