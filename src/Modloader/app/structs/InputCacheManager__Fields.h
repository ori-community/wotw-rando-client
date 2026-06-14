#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InputCacheManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InputCacheManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputCacheManager__Fields_DEFINED)
#define IL2CPP_STRUCT_InputCacheManager__Fields_DEFINED
struct InputCacheManager_SetupTempData;
struct List_1_SmartInput_ICachableInput_;
struct List_1_System_Boolean_;
struct List_1_System_Int32_;
struct __declspec(align(8)) InputCacheManager__Fields {
    struct InputCacheManager_SetupTempData* m_setupData;
    struct List_1_SmartInput_ICachableInput_* m_inputList;
    struct List_1_System_Boolean_* m_dirtyList;
    struct List_1_System_Boolean_* m_leafList;
    struct List_1_System_Int32_* m_readersRangesList;
    struct List_1_System_Int32_* m_readersLists;
};
#endif
#if !defined(IL2CPP_STRUCT_InputCacheManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_InputCacheManager__Fields_FWDDECL
#include <Modloader/app/structs/InputCacheManager_SetupTempData.h>
#include <Modloader/app/structs/List_1_SmartInput_ICachableInput_.h>
#include <Modloader/app/structs/List_1_System_Boolean_.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#endif
#undef IL2CPP_STRUCT_InputCacheManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputCacheManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InputCacheManager__Fields_FWDDECL)
#include <Modloader/app/structs/InputCacheManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InputCacheManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
