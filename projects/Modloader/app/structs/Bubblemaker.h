#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Bubblemaker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Bubblemaker_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bubblemaker_DEFINED)
#include <Modloader/app/structs/Bubblemaker__Fields.h>
#if defined(IL2CPP_STRUCT_Bubblemaker__Fields_DEFINED)
#define IL2CPP_STRUCT_Bubblemaker_DEFINED
struct Bubblemaker__Class;
struct Bubblemaker {
    struct Bubblemaker__Class* klass;
    MonitorData* monitor;
    struct Bubblemaker__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Bubblemaker_FWDDECL)
#define IL2CPP_STRUCT_Bubblemaker_FWDDECL
#include <Modloader/app/structs/Bubblemaker__Class.h>
#endif
#undef IL2CPP_STRUCT_Bubblemaker_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bubblemaker_DEFINED) && !defined(IL2CPP_STRUCT_Bubblemaker_FWDDECL)
#include <Modloader/app/structs/Bubblemaker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Bubblemaker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
