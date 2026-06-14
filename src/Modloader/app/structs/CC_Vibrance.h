#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CC_Vibrance_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CC_Vibrance_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_Vibrance_DEFINED)
#include <Modloader/app/structs/CC_Vibrance__Fields.h>
#if defined(IL2CPP_STRUCT_CC_Vibrance__Fields_DEFINED)
#define IL2CPP_STRUCT_CC_Vibrance_DEFINED
struct CC_Vibrance__Class;
struct CC_Vibrance {
    struct CC_Vibrance__Class* klass;
    MonitorData* monitor;
    struct CC_Vibrance__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CC_Vibrance_FWDDECL)
#define IL2CPP_STRUCT_CC_Vibrance_FWDDECL
#include <Modloader/app/structs/CC_Vibrance__Class.h>
#endif
#undef IL2CPP_STRUCT_CC_Vibrance_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_Vibrance_DEFINED) && !defined(IL2CPP_STRUCT_CC_Vibrance_FWDDECL)
#include <Modloader/app/structs/CC_Vibrance.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CC_Vibrance.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
