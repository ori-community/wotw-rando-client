#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IRideable__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IRideable__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRideable__VTable_DEFINED)
#define IL2CPP_STRUCT_IRideable__VTable_DEFINED
struct IRideable__VTable {
    VirtualInvokeData get_AttachPoint;
    VirtualInvokeData get_Position;
    VirtualInvokeData get_RideableType;
    VirtualInvokeData get_SourcePlatformBehaviour;
    VirtualInvokeData IsPointInsideCollectableDetector;
    VirtualInvokeData get_OnJump;
    VirtualInvokeData set_OnJump;
    VirtualInvokeData StartCarrying;
    VirtualInvokeData StopCarrying;
};
#endif
#if !defined(IL2CPP_STRUCT_IRideable__VTable_FWDDECL)
#define IL2CPP_STRUCT_IRideable__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IRideable__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRideable__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IRideable__VTable_FWDDECL)
#include <Modloader/app/structs/IRideable__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IRideable__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
