#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Xbl_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Xbl_INITIALIZING
#if !defined(IL2CPP_STRUCT_Xbl_DEFINED)
#include <Modloader/app/structs/Xbl__Fields.h>
#if defined(IL2CPP_STRUCT_Xbl__Fields_DEFINED)
#define IL2CPP_STRUCT_Xbl_DEFINED
struct Xbl__Class;
struct Xbl {
    struct Xbl__Class* klass;
    MonitorData* monitor;
    struct Xbl__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Xbl_FWDDECL)
#define IL2CPP_STRUCT_Xbl_FWDDECL
#include <Modloader/app/structs/Xbl__Class.h>
#endif
#undef IL2CPP_STRUCT_Xbl_INITIALIZING
#if !defined(IL2CPP_STRUCT_Xbl_DEFINED) && !defined(IL2CPP_STRUCT_Xbl_FWDDECL)
#include <Modloader/app/structs/Xbl.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Xbl.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
