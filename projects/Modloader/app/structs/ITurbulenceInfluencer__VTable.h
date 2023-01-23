#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITurbulenceInfluencer__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITurbulenceInfluencer__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITurbulenceInfluencer__VTable_DEFINED)
#define IL2CPP_STRUCT_ITurbulenceInfluencer__VTable_DEFINED
struct ITurbulenceInfluencer__VTable {
    VirtualInvokeData get_TurbulenceMagnitude;
    VirtualInvokeData get_MagnitudeWeight;
    VirtualInvokeData get_TurbulenceSpeed;
    VirtualInvokeData get_SpeedWeight;
    VirtualInvokeData get_TurbulenceApplyOrder;
};
#endif
#if !defined(IL2CPP_STRUCT_ITurbulenceInfluencer__VTable_FWDDECL)
#define IL2CPP_STRUCT_ITurbulenceInfluencer__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_ITurbulenceInfluencer__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITurbulenceInfluencer__VTable_DEFINED) && !defined(IL2CPP_STRUCT_ITurbulenceInfluencer__VTable_FWDDECL)
#include <Modloader/app/structs/ITurbulenceInfluencer__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITurbulenceInfluencer__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
