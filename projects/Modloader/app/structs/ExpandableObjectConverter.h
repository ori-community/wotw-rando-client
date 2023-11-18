#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExpandableObjectConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExpandableObjectConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpandableObjectConverter_DEFINED)
#define IL2CPP_STRUCT_ExpandableObjectConverter_DEFINED
struct ExpandableObjectConverter__Class;
struct ExpandableObjectConverter {
    struct ExpandableObjectConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ExpandableObjectConverter_FWDDECL)
#define IL2CPP_STRUCT_ExpandableObjectConverter_FWDDECL
#include <Modloader/app/structs/ExpandableObjectConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_ExpandableObjectConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpandableObjectConverter_DEFINED) && !defined(IL2CPP_STRUCT_ExpandableObjectConverter_FWDDECL)
#include <Modloader/app/structs/ExpandableObjectConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExpandableObjectConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
