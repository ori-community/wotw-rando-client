#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CC_Base_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CC_Base_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_Base_DEFINED)
#include <Modloader/app/structs/CC_Base__Fields.h>
#if defined(IL2CPP_STRUCT_CC_Base__Fields_DEFINED)
#define IL2CPP_STRUCT_CC_Base_DEFINED
struct CC_Base__Class;
struct CC_Base {
    struct CC_Base__Class* klass;
    MonitorData* monitor;
    struct CC_Base__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CC_Base_FWDDECL)
#define IL2CPP_STRUCT_CC_Base_FWDDECL
#include <Modloader/app/structs/CC_Base__Class.h>
#endif
#undef IL2CPP_STRUCT_CC_Base_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_Base_DEFINED) && !defined(IL2CPP_STRUCT_CC_Base_FWDDECL)
#include <Modloader/app/structs/CC_Base.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CC_Base.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
