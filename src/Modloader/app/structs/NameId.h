#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NameId_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NameId_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameId_DEFINED)
#include <Modloader/app/structs/NameId__Fields.h>
#if defined(IL2CPP_STRUCT_NameId__Fields_DEFINED)
#define IL2CPP_STRUCT_NameId_DEFINED
struct NameId__Class;
struct NameId {
    struct NameId__Class* klass;
    MonitorData* monitor;
    struct NameId__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NameId_FWDDECL)
#define IL2CPP_STRUCT_NameId_FWDDECL
#include <Modloader/app/structs/NameId__Class.h>
#endif
#undef IL2CPP_STRUCT_NameId_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameId_DEFINED) && !defined(IL2CPP_STRUCT_NameId_FWDDECL)
#include <Modloader/app/structs/NameId.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NameId.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
