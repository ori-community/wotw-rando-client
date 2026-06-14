#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetReplayCallback__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetReplayCallback__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetReplayCallback__Fields_DEFINED)
#include <Modloader/app/structs/SwaggerCallback__Fields.h>
#if defined(IL2CPP_STRUCT_SwaggerCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_GetReplayCallback__Fields_DEFINED
struct ReplayModel;
struct GetReplayCallback__Fields {
    struct SwaggerCallback__Fields _;
    struct ReplayModel* m_replay;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetReplayCallback__Fields_FWDDECL)
#define IL2CPP_STRUCT_GetReplayCallback__Fields_FWDDECL
#include <Modloader/app/structs/ReplayModel.h>
#endif
#undef IL2CPP_STRUCT_GetReplayCallback__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetReplayCallback__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GetReplayCallback__Fields_FWDDECL)
#include <Modloader/app/structs/GetReplayCallback__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetReplayCallback__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
