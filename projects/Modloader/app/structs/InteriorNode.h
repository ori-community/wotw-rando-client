#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteriorNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteriorNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteriorNode_DEFINED)
#include <Modloader/app/structs/InteriorNode__Fields.h>
#if defined(IL2CPP_STRUCT_InteriorNode__Fields_DEFINED)
#define IL2CPP_STRUCT_InteriorNode_DEFINED
struct InteriorNode__Class;
struct InteriorNode {
    struct InteriorNode__Class* klass;
    MonitorData* monitor;
    struct InteriorNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteriorNode_FWDDECL)
#define IL2CPP_STRUCT_InteriorNode_FWDDECL
#include <Modloader/app/structs/InteriorNode__Class.h>
#endif
#undef IL2CPP_STRUCT_InteriorNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteriorNode_DEFINED) && !defined(IL2CPP_STRUCT_InteriorNode_FWDDECL)
#include <Modloader/app/structs/InteriorNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteriorNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
