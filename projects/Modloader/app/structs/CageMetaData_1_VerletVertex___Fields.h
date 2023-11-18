#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CageMetaData_1_VerletVertex___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CageMetaData_1_VerletVertex___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CageMetaData_1_VerletVertex___Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_CageMetaData_1_VerletVertex___Fields_DEFINED
struct List_1_System_Int32_;
struct List_1_VerletVertex_;
struct VerletVertex;
struct CageStructureTool;
struct CageMetaData_1_VerletVertex___Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_System_Int32_* IDs;
    struct List_1_VerletVertex_* Data;
    struct VerletVertex* DefaultValue;
    struct CageStructureTool* CageStructureTool;
    bool ShouldSerialize;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CageMetaData_1_VerletVertex___Fields_FWDDECL)
#define IL2CPP_STRUCT_CageMetaData_1_VerletVertex___Fields_FWDDECL
#include <Modloader/app/structs/CageStructureTool.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/List_1_VerletVertex_.h>
#include <Modloader/app/structs/VerletVertex.h>
#endif
#undef IL2CPP_STRUCT_CageMetaData_1_VerletVertex___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CageMetaData_1_VerletVertex___Fields_DEFINED) && !defined(IL2CPP_STRUCT_CageMetaData_1_VerletVertex___Fields_FWDDECL)
#include <Modloader/app/structs/CageMetaData_1_VerletVertex___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CageMetaData_1_VerletVertex___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
