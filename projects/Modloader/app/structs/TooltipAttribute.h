#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TooltipAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TooltipAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_TooltipAttribute_DEFINED)
#include <Modloader/app/structs/TooltipAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_TooltipAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_TooltipAttribute_DEFINED
struct TooltipAttribute__Class;
struct TooltipAttribute {
    struct TooltipAttribute__Class* klass;
    MonitorData* monitor;
    struct TooltipAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TooltipAttribute_FWDDECL)
#define IL2CPP_STRUCT_TooltipAttribute_FWDDECL
#include <Modloader/app/structs/TooltipAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_TooltipAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_TooltipAttribute_DEFINED) && !defined(IL2CPP_STRUCT_TooltipAttribute_FWDDECL)
#include <Modloader/app/structs/TooltipAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TooltipAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
