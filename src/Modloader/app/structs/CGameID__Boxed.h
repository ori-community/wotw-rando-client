#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CGameID__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CGameID__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_CGameID__Boxed_DEFINED)
#include <Modloader/app/structs/CGameID.h>
#if defined(IL2CPP_STRUCT_CGameID_DEFINED)
#define IL2CPP_STRUCT_CGameID__Boxed_DEFINED
struct CGameID__Class;
struct CGameID__Boxed {
    struct CGameID__Class* klass;
    MonitorData* monitor;
    struct CGameID fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CGameID__Boxed_FWDDECL)
#define IL2CPP_STRUCT_CGameID__Boxed_FWDDECL
#include <Modloader/app/structs/CGameID__Class.h>
#endif
#undef IL2CPP_STRUCT_CGameID__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_CGameID__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_CGameID__Boxed_FWDDECL)
#include <Modloader/app/structs/CGameID__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CGameID__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
