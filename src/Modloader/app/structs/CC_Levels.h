#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CC_Levels_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CC_Levels_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_Levels_DEFINED)
#include <Modloader/app/structs/CC_Levels__Fields.h>
#if defined(IL2CPP_STRUCT_CC_Levels__Fields_DEFINED)
#define IL2CPP_STRUCT_CC_Levels_DEFINED
struct CC_Levels__Class;
struct CC_Levels {
    struct CC_Levels__Class* klass;
    MonitorData* monitor;
    struct CC_Levels__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CC_Levels_FWDDECL)
#define IL2CPP_STRUCT_CC_Levels_FWDDECL
#include <Modloader/app/structs/CC_Levels__Class.h>
#endif
#undef IL2CPP_STRUCT_CC_Levels_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_Levels_DEFINED) && !defined(IL2CPP_STRUCT_CC_Levels_FWDDECL)
#include <Modloader/app/structs/CC_Levels.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CC_Levels.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
