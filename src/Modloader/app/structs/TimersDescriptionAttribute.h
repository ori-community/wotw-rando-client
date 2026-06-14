#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimersDescriptionAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimersDescriptionAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimersDescriptionAttribute_DEFINED)
#include <Modloader/app/structs/TimersDescriptionAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_TimersDescriptionAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_TimersDescriptionAttribute_DEFINED
struct TimersDescriptionAttribute__Class;
struct TimersDescriptionAttribute {
    struct TimersDescriptionAttribute__Class* klass;
    MonitorData* monitor;
    struct TimersDescriptionAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimersDescriptionAttribute_FWDDECL)
#define IL2CPP_STRUCT_TimersDescriptionAttribute_FWDDECL
#include <Modloader/app/structs/TimersDescriptionAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_TimersDescriptionAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimersDescriptionAttribute_DEFINED) && !defined(IL2CPP_STRUCT_TimersDescriptionAttribute_FWDDECL)
#include <Modloader/app/structs/TimersDescriptionAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimersDescriptionAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
