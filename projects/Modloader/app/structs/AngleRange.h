#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AngleRange_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AngleRange_INITIALIZING
#if !defined(IL2CPP_STRUCT_AngleRange_DEFINED)
#include <Modloader/app/structs/Angle.h>
#if defined(IL2CPP_STRUCT_Angle_DEFINED)
#define IL2CPP_STRUCT_AngleRange_DEFINED
struct AngleRange {
    struct Angle min;
    struct Angle max;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AngleRange_FWDDECL)
#define IL2CPP_STRUCT_AngleRange_FWDDECL
#endif
#undef IL2CPP_STRUCT_AngleRange_INITIALIZING
#if !defined(IL2CPP_STRUCT_AngleRange_DEFINED) && !defined(IL2CPP_STRUCT_AngleRange_FWDDECL)
#include <Modloader/app/structs/AngleRange.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AngleRange.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
