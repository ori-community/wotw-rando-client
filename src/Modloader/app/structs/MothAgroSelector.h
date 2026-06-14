#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MothAgroSelector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MothAgroSelector_INITIALIZING
#if !defined(IL2CPP_STRUCT_MothAgroSelector_DEFINED)
#include <Modloader/app/structs/MothAgroSelector__Fields.h>
#if defined(IL2CPP_STRUCT_MothAgroSelector__Fields_DEFINED)
#define IL2CPP_STRUCT_MothAgroSelector_DEFINED
struct MothAgroSelector__Class;
struct MothAgroSelector {
    struct MothAgroSelector__Class* klass;
    MonitorData* monitor;
    struct MothAgroSelector__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MothAgroSelector_FWDDECL)
#define IL2CPP_STRUCT_MothAgroSelector_FWDDECL
#include <Modloader/app/structs/MothAgroSelector__Class.h>
#endif
#undef IL2CPP_STRUCT_MothAgroSelector_INITIALIZING
#if !defined(IL2CPP_STRUCT_MothAgroSelector_DEFINED) && !defined(IL2CPP_STRUCT_MothAgroSelector_FWDDECL)
#include <Modloader/app/structs/MothAgroSelector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MothAgroSelector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
