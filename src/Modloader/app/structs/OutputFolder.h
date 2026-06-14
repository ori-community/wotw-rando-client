#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OutputFolder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OutputFolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_OutputFolder_DEFINED)
#define IL2CPP_STRUCT_OutputFolder_DEFINED
struct OutputFolder__Class;
struct OutputFolder {
    struct OutputFolder__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_OutputFolder_FWDDECL)
#define IL2CPP_STRUCT_OutputFolder_FWDDECL
#include <Modloader/app/structs/OutputFolder__Class.h>
#endif
#undef IL2CPP_STRUCT_OutputFolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_OutputFolder_DEFINED) && !defined(IL2CPP_STRUCT_OutputFolder_FWDDECL)
#include <Modloader/app/structs/OutputFolder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OutputFolder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
