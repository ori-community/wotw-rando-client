#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Ori_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Ori_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ori_DEFINED)
#include <Modloader/app/structs/Ori__Fields.h>
#if defined(IL2CPP_STRUCT_Ori__Fields_DEFINED)
#define IL2CPP_STRUCT_Ori_DEFINED
struct Ori__Class;
struct Ori {
    struct Ori__Class* klass;
    MonitorData* monitor;
    struct Ori__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Ori_FWDDECL)
#define IL2CPP_STRUCT_Ori_FWDDECL
#include <Modloader/app/structs/Ori__Class.h>
#endif
#undef IL2CPP_STRUCT_Ori_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ori_DEFINED) && !defined(IL2CPP_STRUCT_Ori_FWDDECL)
#include <Modloader/app/structs/Ori.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Ori.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
