#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InputCacheManager_SetupTempData_Node__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InputCacheManager_SetupTempData_Node__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputCacheManager_SetupTempData_Node__Fields_DEFINED)
#define IL2CPP_STRUCT_InputCacheManager_SetupTempData_Node__Fields_DEFINED
struct ICachableInput;
struct List_1_SmartInput_InputCacheManager_SetupTempData_Node_;
struct __declspec(align(8)) InputCacheManager_SetupTempData_Node__Fields {
    int32_t index;
    struct ICachableInput* input;
    struct List_1_SmartInput_InputCacheManager_SetupTempData_Node_* sources;
    struct List_1_SmartInput_InputCacheManager_SetupTempData_Node_* readers;
};
#endif
#if !defined(IL2CPP_STRUCT_InputCacheManager_SetupTempData_Node__Fields_FWDDECL)
#define IL2CPP_STRUCT_InputCacheManager_SetupTempData_Node__Fields_FWDDECL
#include <Modloader/app/structs/ICachableInput.h>
#include <Modloader/app/structs/List_1_SmartInput_InputCacheManager_SetupTempData_Node_.h>
#endif
#undef IL2CPP_STRUCT_InputCacheManager_SetupTempData_Node__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputCacheManager_SetupTempData_Node__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InputCacheManager_SetupTempData_Node__Fields_FWDDECL)
#include <Modloader/app/structs/InputCacheManager_SetupTempData_Node__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InputCacheManager_SetupTempData_Node__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
