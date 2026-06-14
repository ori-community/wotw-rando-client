#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MechSpiderLeg_Step_d_24__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MechSpiderLeg_Step_d_24__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MechSpiderLeg_Step_d_24__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_MechSpiderLeg_Step_d_24__Fields_DEFINED
struct Object;
struct MechSpiderLeg;
struct __declspec(align(8)) MechSpiderLeg_Step_d_24__Fields {
    int32_t __1__state;
    struct Object* __2__current;
    struct MechSpiderLeg* __4__this;
    struct Vector3 stepStartPosition;
    struct Vector3 targetPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MechSpiderLeg_Step_d_24__Fields_FWDDECL)
#define IL2CPP_STRUCT_MechSpiderLeg_Step_d_24__Fields_FWDDECL
#include <Modloader/app/structs/MechSpiderLeg.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_MechSpiderLeg_Step_d_24__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MechSpiderLeg_Step_d_24__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MechSpiderLeg_Step_d_24__Fields_FWDDECL)
#include <Modloader/app/structs/MechSpiderLeg_Step_d_24__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MechSpiderLeg_Step_d_24__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
