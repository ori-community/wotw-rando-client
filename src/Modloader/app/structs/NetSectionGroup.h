#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NetSectionGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NetSectionGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_NetSectionGroup_DEFINED)
#define IL2CPP_STRUCT_NetSectionGroup_DEFINED
struct NetSectionGroup__Class;
struct NetSectionGroup {
    struct NetSectionGroup__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NetSectionGroup_FWDDECL)
#define IL2CPP_STRUCT_NetSectionGroup_FWDDECL
#include <Modloader/app/structs/NetSectionGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_NetSectionGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_NetSectionGroup_DEFINED) && !defined(IL2CPP_STRUCT_NetSectionGroup_FWDDECL)
#include <Modloader/app/structs/NetSectionGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NetSectionGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
