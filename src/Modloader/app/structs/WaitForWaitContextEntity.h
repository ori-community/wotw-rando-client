#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitForWaitContextEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitForWaitContextEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForWaitContextEntity_DEFINED)
#include <Modloader/app/structs/WaitForWaitContextEntity__Fields.h>
#if defined(IL2CPP_STRUCT_WaitForWaitContextEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_WaitForWaitContextEntity_DEFINED
struct WaitForWaitContextEntity__Class;
struct WaitForWaitContextEntity {
    struct WaitForWaitContextEntity__Class* klass;
    MonitorData* monitor;
    struct WaitForWaitContextEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaitForWaitContextEntity_FWDDECL)
#define IL2CPP_STRUCT_WaitForWaitContextEntity_FWDDECL
#include <Modloader/app/structs/WaitForWaitContextEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_WaitForWaitContextEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForWaitContextEntity_DEFINED) && !defined(IL2CPP_STRUCT_WaitForWaitContextEntity_FWDDECL)
#include <Modloader/app/structs/WaitForWaitContextEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitForWaitContextEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
