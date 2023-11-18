#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameplayCameraTargetEntry__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameplayCameraTargetEntry__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameplayCameraTargetEntry__Array_DEFINED)
#include <Modloader/app/structs/GameplayCameraTargetEntry.h>
#if defined(IL2CPP_STRUCT_GameplayCameraTargetEntry_DEFINED)
#define IL2CPP_STRUCT_GameplayCameraTargetEntry__Array_DEFINED
struct GameplayCameraTargetEntry__Array__Class;
struct GameplayCameraTargetEntry__Array {
    struct GameplayCameraTargetEntry__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct GameplayCameraTargetEntry vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameplayCameraTargetEntry__Array_FWDDECL)
#define IL2CPP_STRUCT_GameplayCameraTargetEntry__Array_FWDDECL
#include <Modloader/app/structs/GameplayCameraTargetEntry__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_GameplayCameraTargetEntry__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameplayCameraTargetEntry__Array_DEFINED) && !defined(IL2CPP_STRUCT_GameplayCameraTargetEntry__Array_FWDDECL)
#include <Modloader/app/structs/GameplayCameraTargetEntry__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameplayCameraTargetEntry__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
