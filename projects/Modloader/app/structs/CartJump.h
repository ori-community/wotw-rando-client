#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartJump_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartJump_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartJump_DEFINED)
#include <Modloader/app/structs/CartJump__Fields.h>
#if defined(IL2CPP_STRUCT_CartJump__Fields_DEFINED)
#define IL2CPP_STRUCT_CartJump_DEFINED
struct CartJump__Class;
struct CartJump {
    struct CartJump__Class* klass;
    MonitorData* monitor;
    struct CartJump__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartJump_FWDDECL)
#define IL2CPP_STRUCT_CartJump_FWDDECL
#include <Modloader/app/structs/CartJump__Class.h>
#endif
#undef IL2CPP_STRUCT_CartJump_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartJump_DEFINED) && !defined(IL2CPP_STRUCT_CartJump_FWDDECL)
#include <Modloader/app/structs/CartJump.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartJump.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
