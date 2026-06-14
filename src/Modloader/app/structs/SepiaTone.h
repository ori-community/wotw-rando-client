#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SepiaTone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SepiaTone_INITIALIZING
#if !defined(IL2CPP_STRUCT_SepiaTone_DEFINED)
#include <Modloader/app/structs/SepiaTone__Fields.h>
#if defined(IL2CPP_STRUCT_SepiaTone__Fields_DEFINED)
#define IL2CPP_STRUCT_SepiaTone_DEFINED
struct SepiaTone__Class;
struct SepiaTone {
    struct SepiaTone__Class* klass;
    MonitorData* monitor;
    struct SepiaTone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SepiaTone_FWDDECL)
#define IL2CPP_STRUCT_SepiaTone_FWDDECL
#include <Modloader/app/structs/SepiaTone__Class.h>
#endif
#undef IL2CPP_STRUCT_SepiaTone_INITIALIZING
#if !defined(IL2CPP_STRUCT_SepiaTone_DEFINED) && !defined(IL2CPP_STRUCT_SepiaTone_FWDDECL)
#include <Modloader/app/structs/SepiaTone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SepiaTone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
