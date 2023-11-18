#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CageStructureToolStressTester__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CageStructureToolStressTester__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CageStructureToolStressTester__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_CageStructureToolStressTester__Fields_DEFINED
struct CageStructureTool;
struct String;
struct List_1_UnityEngine_Vector2_;
struct List_1_System_Boolean_;
struct CageStructureToolStressTester__Fields {
    struct MonoBehaviour__Fields _;
    struct CageStructureTool* Cage;
    int32_t AmountOfSamplingTargetsX;
    int32_t AmountOfSamplingTargetsY;
    struct String* ProfilerSampleName;
    bool UseTextureMapOptimization;
    struct List_1_UnityEngine_Vector2_* m_samplingPoints;
    struct List_1_System_Boolean_* m_inside;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CageStructureToolStressTester__Fields_FWDDECL)
#define IL2CPP_STRUCT_CageStructureToolStressTester__Fields_FWDDECL
#include <Modloader/app/structs/CageStructureTool.h>
#include <Modloader/app/structs/List_1_System_Boolean_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CageStructureToolStressTester__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CageStructureToolStressTester__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CageStructureToolStressTester__Fields_FWDDECL)
#include <Modloader/app/structs/CageStructureToolStressTester__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CageStructureToolStressTester__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
