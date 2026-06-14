#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GamePlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GamePlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_GamePlaceholder_DEFINED)
#include <Modloader/app/structs/GamePlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_GamePlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_GamePlaceholder_DEFINED
struct GamePlaceholder__Class;
struct GamePlaceholder {
    struct GamePlaceholder__Class* klass;
    MonitorData* monitor;
    struct GamePlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GamePlaceholder_FWDDECL)
#define IL2CPP_STRUCT_GamePlaceholder_FWDDECL
#include <Modloader/app/structs/GamePlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_GamePlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_GamePlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_GamePlaceholder_FWDDECL)
#include <Modloader/app/structs/GamePlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GamePlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
