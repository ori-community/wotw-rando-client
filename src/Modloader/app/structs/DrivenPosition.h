#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DrivenPosition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DrivenPosition_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrivenPosition_DEFINED)
#include <Modloader/app/structs/DrivenPosition__Fields.h>
#if defined(IL2CPP_STRUCT_DrivenPosition__Fields_DEFINED)
#define IL2CPP_STRUCT_DrivenPosition_DEFINED
struct DrivenPosition__Class;
struct DrivenPosition {
    struct DrivenPosition__Class* klass;
    MonitorData* monitor;
    struct DrivenPosition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DrivenPosition_FWDDECL)
#define IL2CPP_STRUCT_DrivenPosition_FWDDECL
#include <Modloader/app/structs/DrivenPosition__Class.h>
#endif
#undef IL2CPP_STRUCT_DrivenPosition_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrivenPosition_DEFINED) && !defined(IL2CPP_STRUCT_DrivenPosition_FWDDECL)
#include <Modloader/app/structs/DrivenPosition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DrivenPosition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
