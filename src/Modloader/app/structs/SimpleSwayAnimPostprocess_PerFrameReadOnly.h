#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleSwayAnimPostprocess_PerFrameReadOnly_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleSwayAnimPostprocess_PerFrameReadOnly_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleSwayAnimPostprocess_PerFrameReadOnly_DEFINED)
#define IL2CPP_STRUCT_SimpleSwayAnimPostprocess_PerFrameReadOnly_DEFINED
struct SimpleSwayAnimPostprocess_PerFrameReadOnly {
    float axx;
    float gravity;
    float damping;
    float weight;
    float dt;
    float dtInv;
    bool DebugDraw;
};
#endif
#if !defined(IL2CPP_STRUCT_SimpleSwayAnimPostprocess_PerFrameReadOnly_FWDDECL)
#define IL2CPP_STRUCT_SimpleSwayAnimPostprocess_PerFrameReadOnly_FWDDECL
#endif
#undef IL2CPP_STRUCT_SimpleSwayAnimPostprocess_PerFrameReadOnly_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleSwayAnimPostprocess_PerFrameReadOnly_DEFINED) && !defined(IL2CPP_STRUCT_SimpleSwayAnimPostprocess_PerFrameReadOnly_FWDDECL)
#include <Modloader/app/structs/SimpleSwayAnimPostprocess_PerFrameReadOnly.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleSwayAnimPostprocess_PerFrameReadOnly.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
