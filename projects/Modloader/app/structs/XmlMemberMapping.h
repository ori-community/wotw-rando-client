#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlMemberMapping_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlMemberMapping_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlMemberMapping_DEFINED)
#define IL2CPP_STRUCT_XmlMemberMapping_DEFINED
struct XmlMemberMapping__Class;
struct XmlMemberMapping {
    struct XmlMemberMapping__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlMemberMapping_FWDDECL)
#define IL2CPP_STRUCT_XmlMemberMapping_FWDDECL
#include <Modloader/app/structs/XmlMemberMapping__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlMemberMapping_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlMemberMapping_DEFINED) && !defined(IL2CPP_STRUCT_XmlMemberMapping_FWDDECL)
#include <Modloader/app/structs/XmlMemberMapping.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlMemberMapping.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
