#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InspectorColorAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InspectorColorAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_InspectorColorAttribute_DEFINED)
#include <Modloader/app/structs/InspectorColorAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_InspectorColorAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_InspectorColorAttribute_DEFINED
struct InspectorColorAttribute__Class;
struct InspectorColorAttribute {
    struct InspectorColorAttribute__Class* klass;
    MonitorData* monitor;
    struct InspectorColorAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InspectorColorAttribute_FWDDECL)
#define IL2CPP_STRUCT_InspectorColorAttribute_FWDDECL
#include <Modloader/app/structs/InspectorColorAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_InspectorColorAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_InspectorColorAttribute_DEFINED) && !defined(IL2CPP_STRUCT_InspectorColorAttribute_FWDDECL)
#include <Modloader/app/structs/InspectorColorAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InspectorColorAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
