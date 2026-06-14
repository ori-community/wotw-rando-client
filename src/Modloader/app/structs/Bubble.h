#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Bubble_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Bubble_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bubble_DEFINED)
#include <Modloader/app/structs/Bubble__Fields.h>
#if defined(IL2CPP_STRUCT_Bubble__Fields_DEFINED)
#define IL2CPP_STRUCT_Bubble_DEFINED
struct Bubble__Class;
struct Bubble {
    struct Bubble__Class* klass;
    MonitorData* monitor;
    struct Bubble__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Bubble_FWDDECL)
#define IL2CPP_STRUCT_Bubble_FWDDECL
#include <Modloader/app/structs/Bubble__Class.h>
#endif
#undef IL2CPP_STRUCT_Bubble_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bubble_DEFINED) && !defined(IL2CPP_STRUCT_Bubble_FWDDECL)
#include <Modloader/app/structs/Bubble.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Bubble.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
