#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GenericDataContainer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GenericDataContainer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericDataContainer__Fields_DEFINED)
#define IL2CPP_STRUCT_GenericDataContainer__Fields_DEFINED
struct List_1_System_Boolean_;
struct List_1_System_Int32_;
struct List_1_System_Byte_;
struct List_1_System_Single_;
struct List_1_UnityEngine_Vector3_;
struct List_1_UnityEngine_Color_;
struct __declspec(align(8)) GenericDataContainer__Fields {
    struct List_1_System_Boolean_* Booleans;
    struct List_1_System_Int32_* Ints;
    struct List_1_System_Byte_* Bytes;
    struct List_1_System_Single_* Floats;
    struct List_1_UnityEngine_Vector3_* Vectors;
    struct List_1_UnityEngine_Color_* Colors;
};
#endif
#if !defined(IL2CPP_STRUCT_GenericDataContainer__Fields_FWDDECL)
#define IL2CPP_STRUCT_GenericDataContainer__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_Boolean_.h>
#include <Modloader/app/structs/List_1_System_Byte_.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/List_1_System_Single_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Color_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#endif
#undef IL2CPP_STRUCT_GenericDataContainer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericDataContainer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GenericDataContainer__Fields_FWDDECL)
#include <Modloader/app/structs/GenericDataContainer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GenericDataContainer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
