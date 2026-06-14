#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BubbleModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BubbleModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_BubbleModifier_DEFINED)
#include <Modloader/app/structs/BubbleModifier__Fields.h>
#if defined(IL2CPP_STRUCT_BubbleModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_BubbleModifier_DEFINED
struct BubbleModifier__Class;
struct BubbleModifier {
    struct BubbleModifier__Class* klass;
    MonitorData* monitor;
    struct BubbleModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BubbleModifier_FWDDECL)
#define IL2CPP_STRUCT_BubbleModifier_FWDDECL
#include <Modloader/app/structs/BubbleModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_BubbleModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_BubbleModifier_DEFINED) && !defined(IL2CPP_STRUCT_BubbleModifier_FWDDECL)
#include <Modloader/app/structs/BubbleModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BubbleModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
