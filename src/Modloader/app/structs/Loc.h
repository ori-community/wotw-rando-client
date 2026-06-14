#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Loc_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Loc_INITIALIZING
#if !defined(IL2CPP_STRUCT_Loc_DEFINED)
#include <Modloader/app/structs/Loc__Fields.h>
#if defined(IL2CPP_STRUCT_Loc__Fields_DEFINED)
#define IL2CPP_STRUCT_Loc_DEFINED
struct Loc__Class;
struct Loc {
    struct Loc__Class* klass;
    MonitorData* monitor;
    struct Loc__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Loc_FWDDECL)
#define IL2CPP_STRUCT_Loc_FWDDECL
#include <Modloader/app/structs/Loc__Class.h>
#endif
#undef IL2CPP_STRUCT_Loc_INITIALIZING
#if !defined(IL2CPP_STRUCT_Loc_DEFINED) && !defined(IL2CPP_STRUCT_Loc_FWDDECL)
#include <Modloader/app/structs/Loc.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Loc.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
