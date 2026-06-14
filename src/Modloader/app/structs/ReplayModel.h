#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReplayModel_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReplayModel_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayModel_DEFINED)
#include <Modloader/app/structs/ReplayModel__Fields.h>
#if defined(IL2CPP_STRUCT_ReplayModel__Fields_DEFINED)
#define IL2CPP_STRUCT_ReplayModel_DEFINED
struct ReplayModel__Class;
struct ReplayModel {
    struct ReplayModel__Class* klass;
    MonitorData* monitor;
    struct ReplayModel__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReplayModel_FWDDECL)
#define IL2CPP_STRUCT_ReplayModel_FWDDECL
#include <Modloader/app/structs/ReplayModel__Class.h>
#endif
#undef IL2CPP_STRUCT_ReplayModel_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayModel_DEFINED) && !defined(IL2CPP_STRUCT_ReplayModel_FWDDECL)
#include <Modloader/app/structs/ReplayModel.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReplayModel.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
