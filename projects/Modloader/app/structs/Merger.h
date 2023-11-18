#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Merger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Merger_INITIALIZING
#if !defined(IL2CPP_STRUCT_Merger_DEFINED)
#include <Modloader/app/structs/Merger__Fields.h>
#if defined(IL2CPP_STRUCT_Merger__Fields_DEFINED)
#define IL2CPP_STRUCT_Merger_DEFINED
struct Merger__Class;
struct Merger {
    struct Merger__Class* klass;
    MonitorData* monitor;
    struct Merger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Merger_FWDDECL)
#define IL2CPP_STRUCT_Merger_FWDDECL
#include <Modloader/app/structs/Merger__Class.h>
#endif
#undef IL2CPP_STRUCT_Merger_INITIALIZING
#if !defined(IL2CPP_STRUCT_Merger_DEFINED) && !defined(IL2CPP_STRUCT_Merger_FWDDECL)
#include <Modloader/app/structs/Merger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Merger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
