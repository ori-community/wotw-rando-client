#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CC_HueSaturationValue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CC_HueSaturationValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_HueSaturationValue_DEFINED)
#include <Modloader/app/structs/CC_HueSaturationValue__Fields.h>
#if defined(IL2CPP_STRUCT_CC_HueSaturationValue__Fields_DEFINED)
#define IL2CPP_STRUCT_CC_HueSaturationValue_DEFINED
struct CC_HueSaturationValue__Class;
struct CC_HueSaturationValue {
    struct CC_HueSaturationValue__Class* klass;
    MonitorData* monitor;
    struct CC_HueSaturationValue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CC_HueSaturationValue_FWDDECL)
#define IL2CPP_STRUCT_CC_HueSaturationValue_FWDDECL
#include <Modloader/app/structs/CC_HueSaturationValue__Class.h>
#endif
#undef IL2CPP_STRUCT_CC_HueSaturationValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_HueSaturationValue_DEFINED) && !defined(IL2CPP_STRUCT_CC_HueSaturationValue_FWDDECL)
#include <Modloader/app/structs/CC_HueSaturationValue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CC_HueSaturationValue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
