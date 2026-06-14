#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPortalVisitor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPortalVisitor_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPortalVisitor_DEFINED)
#define IL2CPP_STRUCT_IPortalVisitor_DEFINED
struct IPortalVisitor__Class;
struct IPortalVisitor {
    struct IPortalVisitor__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPortalVisitor_FWDDECL)
#define IL2CPP_STRUCT_IPortalVisitor_FWDDECL
#include <Modloader/app/structs/IPortalVisitor__Class.h>
#endif
#undef IL2CPP_STRUCT_IPortalVisitor_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPortalVisitor_DEFINED) && !defined(IL2CPP_STRUCT_IPortalVisitor_FWDDECL)
#include <Modloader/app/structs/IPortalVisitor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPortalVisitor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
