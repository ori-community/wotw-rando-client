#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ZeroOpNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ZeroOpNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZeroOpNode_DEFINED)
#include <Modloader/app/structs/ZeroOpNode__Fields.h>
#if defined(IL2CPP_STRUCT_ZeroOpNode__Fields_DEFINED)
#define IL2CPP_STRUCT_ZeroOpNode_DEFINED
struct ZeroOpNode__Class;
struct ZeroOpNode {
    struct ZeroOpNode__Class* klass;
    MonitorData* monitor;
    struct ZeroOpNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ZeroOpNode_FWDDECL)
#define IL2CPP_STRUCT_ZeroOpNode_FWDDECL
#include <Modloader/app/structs/ZeroOpNode__Class.h>
#endif
#undef IL2CPP_STRUCT_ZeroOpNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZeroOpNode_DEFINED) && !defined(IL2CPP_STRUCT_ZeroOpNode_FWDDECL)
#include <Modloader/app/structs/ZeroOpNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ZeroOpNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
