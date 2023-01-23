#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ForwardAxis__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ForwardAxis__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ForwardAxis__Fields_DEFINED)
#define IL2CPP_STRUCT_ForwardAxis__Fields_DEFINED
struct DoubleLinkAxis;
struct __declspec(align(8)) ForwardAxis__Fields {
    struct DoubleLinkAxis* topNode;
    struct DoubleLinkAxis* rootNode;
    bool isAttribute;
    bool isDss;
    bool isSelfAxis;
};
#endif
#if !defined(IL2CPP_STRUCT_ForwardAxis__Fields_FWDDECL)
#define IL2CPP_STRUCT_ForwardAxis__Fields_FWDDECL
#include <Modloader/app/structs/DoubleLinkAxis.h>
#endif
#undef IL2CPP_STRUCT_ForwardAxis__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ForwardAxis__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ForwardAxis__Fields_FWDDECL)
#include <Modloader/app/structs/ForwardAxis__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ForwardAxis__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
