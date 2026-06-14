#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPHostEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPHostEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPHostEntry_DEFINED)
#include <Modloader/app/structs/IPHostEntry__Fields.h>
#if defined(IL2CPP_STRUCT_IPHostEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_IPHostEntry_DEFINED
struct IPHostEntry__Class;
struct IPHostEntry {
    struct IPHostEntry__Class* klass;
    MonitorData* monitor;
    struct IPHostEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IPHostEntry_FWDDECL)
#define IL2CPP_STRUCT_IPHostEntry_FWDDECL
#include <Modloader/app/structs/IPHostEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_IPHostEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPHostEntry_DEFINED) && !defined(IL2CPP_STRUCT_IPHostEntry_FWDDECL)
#include <Modloader/app/structs/IPHostEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPHostEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
