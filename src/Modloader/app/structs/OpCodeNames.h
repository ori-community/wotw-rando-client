#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OpCodeNames_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OpCodeNames_INITIALIZING
#if !defined(IL2CPP_STRUCT_OpCodeNames_DEFINED)
#define IL2CPP_STRUCT_OpCodeNames_DEFINED
struct OpCodeNames__Class;
struct OpCodeNames {
    struct OpCodeNames__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_OpCodeNames_FWDDECL)
#define IL2CPP_STRUCT_OpCodeNames_FWDDECL
#include <Modloader/app/structs/OpCodeNames__Class.h>
#endif
#undef IL2CPP_STRUCT_OpCodeNames_INITIALIZING
#if !defined(IL2CPP_STRUCT_OpCodeNames_DEFINED) && !defined(IL2CPP_STRUCT_OpCodeNames_FWDDECL)
#include <Modloader/app/structs/OpCodeNames.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OpCodeNames.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
