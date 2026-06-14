#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OnScreenPositions_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OnScreenPositions_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnScreenPositions_DEFINED)
#include <Modloader/app/structs/OnScreenPositions__Fields.h>
#if defined(IL2CPP_STRUCT_OnScreenPositions__Fields_DEFINED)
#define IL2CPP_STRUCT_OnScreenPositions_DEFINED
struct OnScreenPositions__Class;
struct OnScreenPositions {
    struct OnScreenPositions__Class* klass;
    MonitorData* monitor;
    struct OnScreenPositions__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OnScreenPositions_FWDDECL)
#define IL2CPP_STRUCT_OnScreenPositions_FWDDECL
#include <Modloader/app/structs/OnScreenPositions__Class.h>
#endif
#undef IL2CPP_STRUCT_OnScreenPositions_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnScreenPositions_DEFINED) && !defined(IL2CPP_STRUCT_OnScreenPositions_FWDDECL)
#include <Modloader/app/structs/OnScreenPositions.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OnScreenPositions.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
