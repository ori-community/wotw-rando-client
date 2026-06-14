#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebuggerDisplayXmlNodeProxy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebuggerDisplayXmlNodeProxy_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebuggerDisplayXmlNodeProxy_DEFINED)
#define IL2CPP_STRUCT_DebuggerDisplayXmlNodeProxy_DEFINED
struct XmlNode;
struct DebuggerDisplayXmlNodeProxy {
    struct XmlNode* node;
};
#endif
#if !defined(IL2CPP_STRUCT_DebuggerDisplayXmlNodeProxy_FWDDECL)
#define IL2CPP_STRUCT_DebuggerDisplayXmlNodeProxy_FWDDECL
#include <Modloader/app/structs/XmlNode.h>
#endif
#undef IL2CPP_STRUCT_DebuggerDisplayXmlNodeProxy_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebuggerDisplayXmlNodeProxy_DEFINED) && !defined(IL2CPP_STRUCT_DebuggerDisplayXmlNodeProxy_FWDDECL)
#include <Modloader/app/structs/DebuggerDisplayXmlNodeProxy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebuggerDisplayXmlNodeProxy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
