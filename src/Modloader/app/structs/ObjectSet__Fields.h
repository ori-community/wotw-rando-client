#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectSet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectSet__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_PlayFab_PlayStreamModels_OperationTypes_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_PlayFab_PlayStreamModels_OperationTypes__DEFINED)
#define IL2CPP_STRUCT_ObjectSet__Fields_DEFINED
struct Object;
struct String;
struct __declspec(align(8)) ObjectSet__Fields {
    struct Object* DataObject;
    struct String* Name;
    struct Nullable_1_PlayFab_PlayStreamModels_OperationTypes_ Operation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectSet__Fields_FWDDECL)
#define IL2CPP_STRUCT_ObjectSet__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ObjectSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectSet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ObjectSet__Fields_FWDDECL)
#include <Modloader/app/structs/ObjectSet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectSet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
