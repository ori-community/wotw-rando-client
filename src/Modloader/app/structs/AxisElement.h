#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AxisElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AxisElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_AxisElement_DEFINED)
#include <Modloader/app/structs/AxisElement__Fields.h>
#if defined(IL2CPP_STRUCT_AxisElement__Fields_DEFINED)
#define IL2CPP_STRUCT_AxisElement_DEFINED
struct AxisElement__Class;
struct AxisElement {
    struct AxisElement__Class* klass;
    MonitorData* monitor;
    struct AxisElement__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AxisElement_FWDDECL)
#define IL2CPP_STRUCT_AxisElement_FWDDECL
#include <Modloader/app/structs/AxisElement__Class.h>
#endif
#undef IL2CPP_STRUCT_AxisElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_AxisElement_DEFINED) && !defined(IL2CPP_STRUCT_AxisElement_FWDDECL)
#include <Modloader/app/structs/AxisElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AxisElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
