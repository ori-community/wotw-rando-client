#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Posterize_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Posterize_INITIALIZING
#if !defined(IL2CPP_STRUCT_Posterize_DEFINED)
#include <Modloader/app/structs/Posterize__Fields.h>
#if defined(IL2CPP_STRUCT_Posterize__Fields_DEFINED)
#define IL2CPP_STRUCT_Posterize_DEFINED
struct Posterize__Class;
struct Posterize {
    struct Posterize__Class* klass;
    MonitorData* monitor;
    struct Posterize__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Posterize_FWDDECL)
#define IL2CPP_STRUCT_Posterize_FWDDECL
#include <Modloader/app/structs/Posterize__Class.h>
#endif
#undef IL2CPP_STRUCT_Posterize_INITIALIZING
#if !defined(IL2CPP_STRUCT_Posterize_DEFINED) && !defined(IL2CPP_STRUCT_Posterize_FWDDECL)
#include <Modloader/app/structs/Posterize.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Posterize.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
