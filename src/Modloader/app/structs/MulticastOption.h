#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MulticastOption_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MulticastOption_INITIALIZING
#if !defined(IL2CPP_STRUCT_MulticastOption_DEFINED)
#define IL2CPP_STRUCT_MulticastOption_DEFINED
struct MulticastOption__Class;
struct MulticastOption {
    struct MulticastOption__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MulticastOption_FWDDECL)
#define IL2CPP_STRUCT_MulticastOption_FWDDECL
#include <Modloader/app/structs/MulticastOption__Class.h>
#endif
#undef IL2CPP_STRUCT_MulticastOption_INITIALIZING
#if !defined(IL2CPP_STRUCT_MulticastOption_DEFINED) && !defined(IL2CPP_STRUCT_MulticastOption_FWDDECL)
#include <Modloader/app/structs/MulticastOption.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MulticastOption.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
