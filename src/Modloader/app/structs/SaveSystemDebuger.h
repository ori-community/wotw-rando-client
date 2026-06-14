#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SaveSystemDebuger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SaveSystemDebuger_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSystemDebuger_DEFINED)
#define IL2CPP_STRUCT_SaveSystemDebuger_DEFINED
struct SaveSystemDebuger__Class;
struct SaveSystemDebuger {
    struct SaveSystemDebuger__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SaveSystemDebuger_FWDDECL)
#define IL2CPP_STRUCT_SaveSystemDebuger_FWDDECL
#include <Modloader/app/structs/SaveSystemDebuger__Class.h>
#endif
#undef IL2CPP_STRUCT_SaveSystemDebuger_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSystemDebuger_DEFINED) && !defined(IL2CPP_STRUCT_SaveSystemDebuger_FWDDECL)
#include <Modloader/app/structs/SaveSystemDebuger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SaveSystemDebuger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
