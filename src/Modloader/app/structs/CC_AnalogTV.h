#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CC_AnalogTV_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CC_AnalogTV_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_AnalogTV_DEFINED)
#include <Modloader/app/structs/CC_AnalogTV__Fields.h>
#if defined(IL2CPP_STRUCT_CC_AnalogTV__Fields_DEFINED)
#define IL2CPP_STRUCT_CC_AnalogTV_DEFINED
struct CC_AnalogTV__Class;
struct CC_AnalogTV {
    struct CC_AnalogTV__Class* klass;
    MonitorData* monitor;
    struct CC_AnalogTV__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CC_AnalogTV_FWDDECL)
#define IL2CPP_STRUCT_CC_AnalogTV_FWDDECL
#include <Modloader/app/structs/CC_AnalogTV__Class.h>
#endif
#undef IL2CPP_STRUCT_CC_AnalogTV_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_AnalogTV_DEFINED) && !defined(IL2CPP_STRUCT_CC_AnalogTV_FWDDECL)
#include <Modloader/app/structs/CC_AnalogTV.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CC_AnalogTV.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
