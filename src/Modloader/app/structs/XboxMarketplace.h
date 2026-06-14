#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxMarketplace_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxMarketplace_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxMarketplace_DEFINED)
#define IL2CPP_STRUCT_XboxMarketplace_DEFINED
struct XboxMarketplace__Class;
struct XboxMarketplace {
    struct XboxMarketplace__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_XboxMarketplace_FWDDECL)
#define IL2CPP_STRUCT_XboxMarketplace_FWDDECL
#include <Modloader/app/structs/XboxMarketplace__Class.h>
#endif
#undef IL2CPP_STRUCT_XboxMarketplace_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxMarketplace_DEFINED) && !defined(IL2CPP_STRUCT_XboxMarketplace_FWDDECL)
#include <Modloader/app/structs/XboxMarketplace.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxMarketplace.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
