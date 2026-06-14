#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CC_Led_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CC_Led_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_Led_DEFINED)
#include <Modloader/app/structs/CC_Led__Fields.h>
#if defined(IL2CPP_STRUCT_CC_Led__Fields_DEFINED)
#define IL2CPP_STRUCT_CC_Led_DEFINED
struct CC_Led__Class;
struct CC_Led {
    struct CC_Led__Class* klass;
    MonitorData* monitor;
    struct CC_Led__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CC_Led_FWDDECL)
#define IL2CPP_STRUCT_CC_Led_FWDDECL
#include <Modloader/app/structs/CC_Led__Class.h>
#endif
#undef IL2CPP_STRUCT_CC_Led_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_Led_DEFINED) && !defined(IL2CPP_STRUCT_CC_Led_FWDDECL)
#include <Modloader/app/structs/CC_Led.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CC_Led.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
