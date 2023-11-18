#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPoolAnalyze_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPoolAnalyze_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolAnalyze_DEFINED)
#define IL2CPP_STRUCT_UberPoolAnalyze_DEFINED
struct UberPoolAnalyze__Class;
struct UberPoolAnalyze {
    struct UberPoolAnalyze__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UberPoolAnalyze_FWDDECL)
#define IL2CPP_STRUCT_UberPoolAnalyze_FWDDECL
#include <Modloader/app/structs/UberPoolAnalyze__Class.h>
#endif
#undef IL2CPP_STRUCT_UberPoolAnalyze_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolAnalyze_DEFINED) && !defined(IL2CPP_STRUCT_UberPoolAnalyze_FWDDECL)
#include <Modloader/app/structs/UberPoolAnalyze.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPoolAnalyze.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
