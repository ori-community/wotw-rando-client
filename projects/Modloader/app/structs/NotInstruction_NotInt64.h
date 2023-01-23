#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NotInstruction_NotInt64_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NotInstruction_NotInt64_INITIALIZING
#if !defined(IL2CPP_STRUCT_NotInstruction_NotInt64_DEFINED)
#define IL2CPP_STRUCT_NotInstruction_NotInt64_DEFINED
struct NotInstruction_NotInt64__Class;
struct NotInstruction_NotInt64 {
    struct NotInstruction_NotInt64__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NotInstruction_NotInt64_FWDDECL)
#define IL2CPP_STRUCT_NotInstruction_NotInt64_FWDDECL
#include <Modloader/app/structs/NotInstruction_NotInt64__Class.h>
#endif
#undef IL2CPP_STRUCT_NotInstruction_NotInt64_INITIALIZING
#if !defined(IL2CPP_STRUCT_NotInstruction_NotInt64_DEFINED) && !defined(IL2CPP_STRUCT_NotInstruction_NotInt64_FWDDECL)
#include <Modloader/app/structs/NotInstruction_NotInt64.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NotInstruction_NotInt64.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
