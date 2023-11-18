#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InputInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InputInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputInfo_DEFINED)
#include <Modloader/app/structs/InputInfo__Fields.h>
#if defined(IL2CPP_STRUCT_InputInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_InputInfo_DEFINED
struct InputInfo__Class;
struct InputInfo {
    struct InputInfo__Class* klass;
    MonitorData* monitor;
    struct InputInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InputInfo_FWDDECL)
#define IL2CPP_STRUCT_InputInfo_FWDDECL
#include <Modloader/app/structs/InputInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_InputInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputInfo_DEFINED) && !defined(IL2CPP_STRUCT_InputInfo_FWDDECL)
#include <Modloader/app/structs/InputInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InputInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
