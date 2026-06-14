#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NodeDataUI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NodeDataUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_NodeDataUI_DEFINED)
#include <Modloader/app/structs/NodeDataUI__Fields.h>
#if defined(IL2CPP_STRUCT_NodeDataUI__Fields_DEFINED)
#define IL2CPP_STRUCT_NodeDataUI_DEFINED
struct NodeDataUI__Class;
struct NodeDataUI {
    struct NodeDataUI__Class* klass;
    MonitorData* monitor;
    struct NodeDataUI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NodeDataUI_FWDDECL)
#define IL2CPP_STRUCT_NodeDataUI_FWDDECL
#include <Modloader/app/structs/NodeDataUI__Class.h>
#endif
#undef IL2CPP_STRUCT_NodeDataUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_NodeDataUI_DEFINED) && !defined(IL2CPP_STRUCT_NodeDataUI_FWDDECL)
#include <Modloader/app/structs/NodeDataUI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NodeDataUI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
