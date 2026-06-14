#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CC_Posterize_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CC_Posterize_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_Posterize_DEFINED)
#include <Modloader/app/structs/CC_Posterize__Fields.h>
#if defined(IL2CPP_STRUCT_CC_Posterize__Fields_DEFINED)
#define IL2CPP_STRUCT_CC_Posterize_DEFINED
struct CC_Posterize__Class;
struct CC_Posterize {
    struct CC_Posterize__Class* klass;
    MonitorData* monitor;
    struct CC_Posterize__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CC_Posterize_FWDDECL)
#define IL2CPP_STRUCT_CC_Posterize_FWDDECL
#include <Modloader/app/structs/CC_Posterize__Class.h>
#endif
#undef IL2CPP_STRUCT_CC_Posterize_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_Posterize_DEFINED) && !defined(IL2CPP_STRUCT_CC_Posterize_FWDDECL)
#include <Modloader/app/structs/CC_Posterize.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CC_Posterize.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
