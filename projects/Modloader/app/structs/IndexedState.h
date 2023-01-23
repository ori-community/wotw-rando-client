#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IndexedState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IndexedState_INITIALIZING
#if !defined(IL2CPP_STRUCT_IndexedState_DEFINED)
#define IL2CPP_STRUCT_IndexedState_DEFINED
struct String;
struct IndexedState {
    int32_t _Index_k__BackingField;
    struct String* _Name_k__BackingField;
    bool _NotMappable_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_IndexedState_FWDDECL)
#define IL2CPP_STRUCT_IndexedState_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_IndexedState_INITIALIZING
#if !defined(IL2CPP_STRUCT_IndexedState_DEFINED) && !defined(IL2CPP_STRUCT_IndexedState_FWDDECL)
#include <Modloader/app/structs/IndexedState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IndexedState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
