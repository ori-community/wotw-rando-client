#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SendMouseEvents__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SendMouseEvents__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SendMouseEvents__StaticFields_DEFINED)
#define IL2CPP_STRUCT_SendMouseEvents__StaticFields_DEFINED
struct SendMouseEvents_HitInfo__Array;
struct Camera__Array;
struct SendMouseEvents__StaticFields {
    bool s_MouseUsed;
    struct SendMouseEvents_HitInfo__Array* m_LastHit;
    struct SendMouseEvents_HitInfo__Array* m_MouseDownHit;
    struct SendMouseEvents_HitInfo__Array* m_CurrentHit;
    struct Camera__Array* m_Cameras;
};
#endif
#if !defined(IL2CPP_STRUCT_SendMouseEvents__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SendMouseEvents__StaticFields_FWDDECL
#include <Modloader/app/structs/Camera__Array.h>
#include <Modloader/app/structs/SendMouseEvents_HitInfo__Array.h>
#endif
#undef IL2CPP_STRUCT_SendMouseEvents__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SendMouseEvents__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SendMouseEvents__StaticFields_FWDDECL)
#include <Modloader/app/structs/SendMouseEvents__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SendMouseEvents__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
