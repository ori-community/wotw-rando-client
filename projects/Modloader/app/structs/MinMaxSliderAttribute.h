#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MinMaxSliderAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MinMaxSliderAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinMaxSliderAttribute_DEFINED)
#include <Modloader/app/structs/MinMaxSliderAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_MinMaxSliderAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_MinMaxSliderAttribute_DEFINED
struct MinMaxSliderAttribute__Class;
struct MinMaxSliderAttribute {
    struct MinMaxSliderAttribute__Class* klass;
    MonitorData* monitor;
    struct MinMaxSliderAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MinMaxSliderAttribute_FWDDECL)
#define IL2CPP_STRUCT_MinMaxSliderAttribute_FWDDECL
#include <Modloader/app/structs/MinMaxSliderAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_MinMaxSliderAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinMaxSliderAttribute_DEFINED) && !defined(IL2CPP_STRUCT_MinMaxSliderAttribute_FWDDECL)
#include <Modloader/app/structs/MinMaxSliderAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MinMaxSliderAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
