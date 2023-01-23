#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CheatsHandler__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CheatsHandler__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CheatsHandler__StaticFields_DEFINED)
#define IL2CPP_STRUCT_CheatsHandler__StaticFields_DEFINED
struct CheatsHandler;
struct CheatsHandler__StaticFields {
    struct CheatsHandler* Instance;
    bool DebugWasEnabled;
    bool DebugAlwaysEnabled;
    bool InfiniteDoubleJumps;
};
#endif
#if !defined(IL2CPP_STRUCT_CheatsHandler__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_CheatsHandler__StaticFields_FWDDECL
#include <Modloader/app/structs/CheatsHandler.h>
#endif
#undef IL2CPP_STRUCT_CheatsHandler__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CheatsHandler__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_CheatsHandler__StaticFields_FWDDECL)
#include <Modloader/app/structs/CheatsHandler__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CheatsHandler__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
