#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlockableLaser_ActivationTimeslicer_Request_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlockableLaser_ActivationTimeslicer_Request_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlockableLaser_ActivationTimeslicer_Request_DEFINED)
#define IL2CPP_STRUCT_BlockableLaser_ActivationTimeslicer_Request_DEFINED
struct BlockableLaser;
struct BlockableLaser_ActivationTimeslicer_Request {
    bool activate;
    struct BlockableLaser* laser;
    int32_t frame;
};
#endif
#if !defined(IL2CPP_STRUCT_BlockableLaser_ActivationTimeslicer_Request_FWDDECL)
#define IL2CPP_STRUCT_BlockableLaser_ActivationTimeslicer_Request_FWDDECL
#include <Modloader/app/structs/BlockableLaser.h>
#endif
#undef IL2CPP_STRUCT_BlockableLaser_ActivationTimeslicer_Request_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlockableLaser_ActivationTimeslicer_Request_DEFINED) && !defined(IL2CPP_STRUCT_BlockableLaser_ActivationTimeslicer_Request_FWDDECL)
#include <Modloader/app/structs/BlockableLaser_ActivationTimeslicer_Request.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlockableLaser_ActivationTimeslicer_Request.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
