#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlEntity_DEFINED)
#include <Modloader/app/structs/XmlEntity__Fields.h>
#if defined(IL2CPP_STRUCT_XmlEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlEntity_DEFINED
struct XmlEntity__Class;
struct XmlEntity {
    struct XmlEntity__Class* klass;
    MonitorData* monitor;
    struct XmlEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlEntity_FWDDECL)
#define IL2CPP_STRUCT_XmlEntity_FWDDECL
#include <Modloader/app/structs/XmlEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlEntity_DEFINED) && !defined(IL2CPP_STRUCT_XmlEntity_FWDDECL)
#include <Modloader/app/structs/XmlEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
