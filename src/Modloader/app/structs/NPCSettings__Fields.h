#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NPCSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NPCSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NPCSettings__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_NPCSettings__Fields_DEFINED
struct NPCIconsCollection;
struct NPCTypeDictionary;
struct NPCSettings__Fields {
    struct MonoBehaviour__Fields _;
    struct NPCIconsCollection* Icons;
    struct NPCTypeDictionary* TypeDictionary;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NPCSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_NPCSettings__Fields_FWDDECL
#include <Modloader/app/structs/NPCIconsCollection.h>
#include <Modloader/app/structs/NPCTypeDictionary.h>
#endif
#undef IL2CPP_STRUCT_NPCSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NPCSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NPCSettings__Fields_FWDDECL)
#include <Modloader/app/structs/NPCSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NPCSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
