#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OpCodes_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OpCodes_INITIALIZING
#if !defined(IL2CPP_STRUCT_OpCodes_DEFINED)
#define IL2CPP_STRUCT_OpCodes_DEFINED
struct OpCodes__Class;
struct OpCodes {
    struct OpCodes__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_OpCodes_FWDDECL)
#define IL2CPP_STRUCT_OpCodes_FWDDECL
#include <Modloader/app/structs/OpCodes__Class.h>
#endif
#undef IL2CPP_STRUCT_OpCodes_INITIALIZING
#if !defined(IL2CPP_STRUCT_OpCodes_DEFINED) && !defined(IL2CPP_STRUCT_OpCodes_FWDDECL)
#include <Modloader/app/structs/OpCodes.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OpCodes.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
