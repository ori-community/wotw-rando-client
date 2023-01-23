#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GasBallAttractionRect__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GasBallAttractionRect__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GasBallAttractionRect__Fields_DEFINED)
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_GasBallAttractionRect__Fields_DEFINED
struct Transform;
struct IGasBallBait;
struct __declspec(align(8)) GasBallAttractionRect__Fields {
    struct Rect Zone;
    float AttractionTime;
    struct Transform* ReferenceTransfom;
    struct Rect m_runTimeZone;
    struct IGasBallBait* m_owner;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GasBallAttractionRect__Fields_FWDDECL)
#define IL2CPP_STRUCT_GasBallAttractionRect__Fields_FWDDECL
#include <Modloader/app/structs/IGasBallBait.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_GasBallAttractionRect__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GasBallAttractionRect__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GasBallAttractionRect__Fields_FWDDECL)
#include <Modloader/app/structs/GasBallAttractionRect__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GasBallAttractionRect__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
