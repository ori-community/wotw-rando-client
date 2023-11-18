#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BrowsableAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BrowsableAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowsableAttribute_DEFINED)
#include <Modloader/app/structs/BrowsableAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_BrowsableAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_BrowsableAttribute_DEFINED
struct BrowsableAttribute__Class;
struct BrowsableAttribute {
    struct BrowsableAttribute__Class* klass;
    MonitorData* monitor;
    struct BrowsableAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BrowsableAttribute_FWDDECL)
#define IL2CPP_STRUCT_BrowsableAttribute_FWDDECL
#include <Modloader/app/structs/BrowsableAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_BrowsableAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowsableAttribute_DEFINED) && !defined(IL2CPP_STRUCT_BrowsableAttribute_FWDDECL)
#include <Modloader/app/structs/BrowsableAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BrowsableAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
