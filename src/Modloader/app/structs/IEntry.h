#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEntry_DEFINED)
#define IL2CPP_STRUCT_IEntry_DEFINED
struct IEntry__Class;
struct IEntry {
    struct IEntry__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IEntry_FWDDECL)
#define IL2CPP_STRUCT_IEntry_FWDDECL
#include <Modloader/app/structs/IEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_IEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEntry_DEFINED) && !defined(IL2CPP_STRUCT_IEntry_FWDDECL)
#include <Modloader/app/structs/IEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
