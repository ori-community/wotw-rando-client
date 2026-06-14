#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InternalsVisibleToAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InternalsVisibleToAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalsVisibleToAttribute_DEFINED)
#include <Modloader/app/structs/InternalsVisibleToAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_InternalsVisibleToAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_InternalsVisibleToAttribute_DEFINED
struct InternalsVisibleToAttribute__Class;
struct InternalsVisibleToAttribute {
    struct InternalsVisibleToAttribute__Class* klass;
    MonitorData* monitor;
    struct InternalsVisibleToAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InternalsVisibleToAttribute_FWDDECL)
#define IL2CPP_STRUCT_InternalsVisibleToAttribute_FWDDECL
#include <Modloader/app/structs/InternalsVisibleToAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_InternalsVisibleToAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalsVisibleToAttribute_DEFINED) && !defined(IL2CPP_STRUCT_InternalsVisibleToAttribute_FWDDECL)
#include <Modloader/app/structs/InternalsVisibleToAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InternalsVisibleToAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
