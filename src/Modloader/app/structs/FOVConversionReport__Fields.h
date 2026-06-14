#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FOVConversionReport__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FOVConversionReport__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FOVConversionReport__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_FOVConversionReport__Fields_DEFINED
struct List_1_System_String_;
struct List_1_Moon_EditorTools_FOVConversionReport_Issue_;
struct FOVConversionReport__Fields {
    struct MonoBehaviour__Fields _;
    float From;
    float To;
    float FactorMultiplier;
    bool UsedConversionRange;
    float ConversionRangeStart;
    float ConversionRangeEnd;
    struct List_1_System_String_* ConversionsPerformed;
    struct List_1_Moon_EditorTools_FOVConversionReport_Issue_* RotationIssues;
    struct List_1_Moon_EditorTools_FOVConversionReport_Issue_* HorizontalPlanes;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FOVConversionReport__Fields_FWDDECL)
#define IL2CPP_STRUCT_FOVConversionReport__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_EditorTools_FOVConversionReport_Issue_.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#endif
#undef IL2CPP_STRUCT_FOVConversionReport__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FOVConversionReport__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FOVConversionReport__Fields_FWDDECL)
#include <Modloader/app/structs/FOVConversionReport__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FOVConversionReport__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
