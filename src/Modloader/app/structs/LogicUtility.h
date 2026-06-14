#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LogicUtility_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LogicUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_LogicUtility_DEFINED)
#define IL2CPP_STRUCT_LogicUtility_DEFINED
struct LogicUtility__Class;
struct LogicUtility {
    struct LogicUtility__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_LogicUtility_FWDDECL)
#define IL2CPP_STRUCT_LogicUtility_FWDDECL
#include <Modloader/app/structs/LogicUtility__Class.h>
#endif
#undef IL2CPP_STRUCT_LogicUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_LogicUtility_DEFINED) && !defined(IL2CPP_STRUCT_LogicUtility_FWDDECL)
#include <Modloader/app/structs/LogicUtility.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LogicUtility.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
