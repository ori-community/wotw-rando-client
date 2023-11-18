#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ForcedCooperation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ForcedCooperation_INITIALIZING
#if !defined(IL2CPP_STRUCT_ForcedCooperation_DEFINED)
#include <Modloader/app/structs/ForcedCooperation__Fields.h>
#if defined(IL2CPP_STRUCT_ForcedCooperation__Fields_DEFINED)
#define IL2CPP_STRUCT_ForcedCooperation_DEFINED
struct ForcedCooperation__Class;
struct ForcedCooperation {
    struct ForcedCooperation__Class* klass;
    MonitorData* monitor;
    struct ForcedCooperation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ForcedCooperation_FWDDECL)
#define IL2CPP_STRUCT_ForcedCooperation_FWDDECL
#include <Modloader/app/structs/ForcedCooperation__Class.h>
#endif
#undef IL2CPP_STRUCT_ForcedCooperation_INITIALIZING
#if !defined(IL2CPP_STRUCT_ForcedCooperation_DEFINED) && !defined(IL2CPP_STRUCT_ForcedCooperation_FWDDECL)
#include <Modloader/app/structs/ForcedCooperation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ForcedCooperation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
