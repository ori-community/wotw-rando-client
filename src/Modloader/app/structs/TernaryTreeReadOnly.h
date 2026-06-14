#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TernaryTreeReadOnly_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TernaryTreeReadOnly_INITIALIZING
#if !defined(IL2CPP_STRUCT_TernaryTreeReadOnly_DEFINED)
#include <Modloader/app/structs/TernaryTreeReadOnly__Fields.h>
#if defined(IL2CPP_STRUCT_TernaryTreeReadOnly__Fields_DEFINED)
#define IL2CPP_STRUCT_TernaryTreeReadOnly_DEFINED
struct TernaryTreeReadOnly__Class;
struct TernaryTreeReadOnly {
    struct TernaryTreeReadOnly__Class* klass;
    MonitorData* monitor;
    struct TernaryTreeReadOnly__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TernaryTreeReadOnly_FWDDECL)
#define IL2CPP_STRUCT_TernaryTreeReadOnly_FWDDECL
#include <Modloader/app/structs/TernaryTreeReadOnly__Class.h>
#endif
#undef IL2CPP_STRUCT_TernaryTreeReadOnly_INITIALIZING
#if !defined(IL2CPP_STRUCT_TernaryTreeReadOnly_DEFINED) && !defined(IL2CPP_STRUCT_TernaryTreeReadOnly_FWDDECL)
#include <Modloader/app/structs/TernaryTreeReadOnly.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TernaryTreeReadOnly.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
