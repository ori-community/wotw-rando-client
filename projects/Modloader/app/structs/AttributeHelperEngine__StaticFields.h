#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttributeHelperEngine__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttributeHelperEngine__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttributeHelperEngine__StaticFields_DEFINED)
#define IL2CPP_STRUCT_AttributeHelperEngine__StaticFields_DEFINED
struct DisallowMultipleComponent__Array;
struct ExecuteInEditMode__Array;
struct RequireComponent__Array;
struct AttributeHelperEngine__StaticFields {
    struct DisallowMultipleComponent__Array* _disallowMultipleComponentArray;
    struct ExecuteInEditMode__Array* _executeInEditModeArray;
    struct RequireComponent__Array* _requireComponentArray;
};
#endif
#if !defined(IL2CPP_STRUCT_AttributeHelperEngine__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_AttributeHelperEngine__StaticFields_FWDDECL
#include <Modloader/app/structs/DisallowMultipleComponent__Array.h>
#include <Modloader/app/structs/ExecuteInEditMode__Array.h>
#include <Modloader/app/structs/RequireComponent__Array.h>
#endif
#undef IL2CPP_STRUCT_AttributeHelperEngine__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttributeHelperEngine__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_AttributeHelperEngine__StaticFields_FWDDECL)
#include <Modloader/app/structs/AttributeHelperEngine__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttributeHelperEngine__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
