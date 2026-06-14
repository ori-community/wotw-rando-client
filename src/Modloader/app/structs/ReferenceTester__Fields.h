#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReferenceTester__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReferenceTester__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReferenceTester__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_ReferenceTester__Fields_DEFINED
struct MoonInt;
struct String;
struct MoonString;
struct MoonVector3;
struct GameObject;
struct MoonReference_1_UnityEngine_GameObject_;
struct MoonReference_1_ITestInterface_;
struct List_1_Moon_MoonReference_1_;
struct List_1_Moon_MoonInt_;
struct ReferenceTester__Fields {
    struct MonoBehaviour__Fields _;
    int32_t IntValueDirect;
    struct MoonInt* IntValueStatic;
    struct MoonInt* IntValueDataProvider;
    struct String* StringValueDirect;
    struct MoonString* StringValueStatic;
    struct MoonString* StringValueDataProvider;
    struct Vector3 Vector3ValueDirect;
    struct MoonVector3* Vector3ValueStatic;
    struct MoonVector3* Vector3ValueDataProvider;
    struct GameObject* GOValueDirect;
    struct MoonReference_1_UnityEngine_GameObject_* GOValueStatic;
    struct MoonReference_1_UnityEngine_GameObject_* GOValueDataProvider;
    struct MoonReference_1_ITestInterface_* InterfaceStatic;
    struct MoonReference_1_ITestInterface_* InterfaceDataProvider;
    struct List_1_Moon_MoonReference_1_* GOMoonTypeList;
    struct List_1_Moon_MoonInt_* IntMoonTypeList;
    struct String* latestPerfResults;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReferenceTester__Fields_FWDDECL)
#define IL2CPP_STRUCT_ReferenceTester__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_Moon_MoonInt_.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1_.h>
#include <Modloader/app/structs/MoonInt.h>
#include <Modloader/app/structs/MoonReference_1_ITestInterface_.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonString.h>
#include <Modloader/app/structs/MoonVector3.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ReferenceTester__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReferenceTester__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ReferenceTester__Fields_FWDDECL)
#include <Modloader/app/structs/ReferenceTester__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReferenceTester__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
