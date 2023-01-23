#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Positions_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Positions_INITIALIZING
#if !defined(IL2CPP_STRUCT_Positions_DEFINED)
#include <Modloader/app/structs/Positions__Fields.h>
#if defined(IL2CPP_STRUCT_Positions__Fields_DEFINED)
#define IL2CPP_STRUCT_Positions_DEFINED
struct Positions__Class;
struct Positions {
    struct Positions__Class* klass;
    MonitorData* monitor;
    struct Positions__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Positions_FWDDECL)
#define IL2CPP_STRUCT_Positions_FWDDECL
#include <Modloader/app/structs/Positions__Class.h>
#endif
#undef IL2CPP_STRUCT_Positions_INITIALIZING
#if !defined(IL2CPP_STRUCT_Positions_DEFINED) && !defined(IL2CPP_STRUCT_Positions_FWDDECL)
#include <Modloader/app/structs/Positions.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Positions.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
