#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HueSaturationValue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HueSaturationValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_HueSaturationValue_DEFINED)
#include <Modloader/app/structs/HueSaturationValue__Fields.h>
#if defined(IL2CPP_STRUCT_HueSaturationValue__Fields_DEFINED)
#define IL2CPP_STRUCT_HueSaturationValue_DEFINED
struct HueSaturationValue__Class;
struct HueSaturationValue {
    struct HueSaturationValue__Class* klass;
    MonitorData* monitor;
    struct HueSaturationValue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HueSaturationValue_FWDDECL)
#define IL2CPP_STRUCT_HueSaturationValue_FWDDECL
#include <Modloader/app/structs/HueSaturationValue__Class.h>
#endif
#undef IL2CPP_STRUCT_HueSaturationValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_HueSaturationValue_DEFINED) && !defined(IL2CPP_STRUCT_HueSaturationValue_FWDDECL)
#include <Modloader/app/structs/HueSaturationValue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HueSaturationValue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
