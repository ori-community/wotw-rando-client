#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CC_Frost_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CC_Frost_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_Frost_DEFINED)
#include <Modloader/app/structs/CC_Frost__Fields.h>
#if defined(IL2CPP_STRUCT_CC_Frost__Fields_DEFINED)
#define IL2CPP_STRUCT_CC_Frost_DEFINED
struct CC_Frost__Class;
struct CC_Frost {
    struct CC_Frost__Class* klass;
    MonitorData* monitor;
    struct CC_Frost__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CC_Frost_FWDDECL)
#define IL2CPP_STRUCT_CC_Frost_FWDDECL
#include <Modloader/app/structs/CC_Frost__Class.h>
#endif
#undef IL2CPP_STRUCT_CC_Frost_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_Frost_DEFINED) && !defined(IL2CPP_STRUCT_CC_Frost_FWDDECL)
#include <Modloader/app/structs/CC_Frost.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CC_Frost.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
