#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PositionStateOwner_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PositionStateOwner_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionStateOwner_DEFINED)
#include <Modloader/app/structs/PositionStateOwner__Fields.h>
#if defined(IL2CPP_STRUCT_PositionStateOwner__Fields_DEFINED)
#define IL2CPP_STRUCT_PositionStateOwner_DEFINED
struct PositionStateOwner__Class;
struct PositionStateOwner {
    struct PositionStateOwner__Class* klass;
    MonitorData* monitor;
    struct PositionStateOwner__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PositionStateOwner_FWDDECL)
#define IL2CPP_STRUCT_PositionStateOwner_FWDDECL
#include <Modloader/app/structs/PositionStateOwner__Class.h>
#endif
#undef IL2CPP_STRUCT_PositionStateOwner_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionStateOwner_DEFINED) && !defined(IL2CPP_STRUCT_PositionStateOwner_FWDDECL)
#include <Modloader/app/structs/PositionStateOwner.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PositionStateOwner.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
