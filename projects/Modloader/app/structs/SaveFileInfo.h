#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SaveFileInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SaveFileInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveFileInfo_DEFINED)
#include <Modloader/app/structs/SaveFileInfo__Fields.h>
#if defined(IL2CPP_STRUCT_SaveFileInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_SaveFileInfo_DEFINED
struct SaveFileInfo__Class;
struct SaveFileInfo {
    struct SaveFileInfo__Class* klass;
    MonitorData* monitor;
    struct SaveFileInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SaveFileInfo_FWDDECL)
#define IL2CPP_STRUCT_SaveFileInfo_FWDDECL
#include <Modloader/app/structs/SaveFileInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_SaveFileInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveFileInfo_DEFINED) && !defined(IL2CPP_STRUCT_SaveFileInfo_FWDDECL)
#include <Modloader/app/structs/SaveFileInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SaveFileInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
