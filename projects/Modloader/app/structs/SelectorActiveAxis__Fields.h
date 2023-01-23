#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SelectorActiveAxis__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SelectorActiveAxis__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SelectorActiveAxis__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAxis__Fields.h>
#if defined(IL2CPP_STRUCT_ActiveAxis__Fields_DEFINED)
#define IL2CPP_STRUCT_SelectorActiveAxis__Fields_DEFINED
struct ConstraintStruct;
struct ArrayList;
struct SelectorActiveAxis__Fields {
    struct ActiveAxis__Fields _;
    struct ConstraintStruct* cs;
    struct ArrayList* KSs;
    int32_t KSpointer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SelectorActiveAxis__Fields_FWDDECL)
#define IL2CPP_STRUCT_SelectorActiveAxis__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/ConstraintStruct.h>
#endif
#undef IL2CPP_STRUCT_SelectorActiveAxis__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SelectorActiveAxis__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SelectorActiveAxis__Fields_FWDDECL)
#include <Modloader/app/structs/SelectorActiveAxis__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SelectorActiveAxis__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
