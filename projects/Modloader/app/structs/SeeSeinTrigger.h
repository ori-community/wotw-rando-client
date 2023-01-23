#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeeSeinTrigger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeeSeinTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeeSeinTrigger_DEFINED)
#include <Modloader/app/structs/SeeSeinTrigger__Fields.h>
#if defined(IL2CPP_STRUCT_SeeSeinTrigger__Fields_DEFINED)
#define IL2CPP_STRUCT_SeeSeinTrigger_DEFINED
struct SeeSeinTrigger__Class;
struct SeeSeinTrigger {
    struct SeeSeinTrigger__Class* klass;
    MonitorData* monitor;
    struct SeeSeinTrigger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeeSeinTrigger_FWDDECL)
#define IL2CPP_STRUCT_SeeSeinTrigger_FWDDECL
#include <Modloader/app/structs/SeeSeinTrigger__Class.h>
#endif
#undef IL2CPP_STRUCT_SeeSeinTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeeSeinTrigger_DEFINED) && !defined(IL2CPP_STRUCT_SeeSeinTrigger_FWDDECL)
#include <Modloader/app/structs/SeeSeinTrigger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeeSeinTrigger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
