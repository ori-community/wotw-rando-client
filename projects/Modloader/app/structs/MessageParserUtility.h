#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MessageParserUtility_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MessageParserUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageParserUtility_DEFINED)
#define IL2CPP_STRUCT_MessageParserUtility_DEFINED
struct MessageParserUtility__Class;
struct MessageParserUtility {
    struct MessageParserUtility__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MessageParserUtility_FWDDECL)
#define IL2CPP_STRUCT_MessageParserUtility_FWDDECL
#include <Modloader/app/structs/MessageParserUtility__Class.h>
#endif
#undef IL2CPP_STRUCT_MessageParserUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageParserUtility_DEFINED) && !defined(IL2CPP_STRUCT_MessageParserUtility_FWDDECL)
#include <Modloader/app/structs/MessageParserUtility.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MessageParserUtility.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
