#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActiveAxis__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActiveAxis__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActiveAxis__Fields_DEFINED)
#define IL2CPP_STRUCT_ActiveAxis__Fields_DEFINED
struct Asttree;
struct ArrayList;
struct __declspec(align(8)) ActiveAxis__Fields {
    int32_t currentDepth;
    bool isActive;
    struct Asttree* axisTree;
    struct ArrayList* axisStack;
};
#endif
#if !defined(IL2CPP_STRUCT_ActiveAxis__Fields_FWDDECL)
#define IL2CPP_STRUCT_ActiveAxis__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/Asttree.h>
#endif
#undef IL2CPP_STRUCT_ActiveAxis__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActiveAxis__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ActiveAxis__Fields_FWDDECL)
#include <Modloader/app/structs/ActiveAxis__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActiveAxis__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
