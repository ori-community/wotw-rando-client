#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Shadow_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Shadow_INITIALIZING
#if !defined(IL2CPP_STRUCT_Shadow_DEFINED)
#include <Modloader/app/structs/Shadow__Fields.h>
#if defined(IL2CPP_STRUCT_Shadow__Fields_DEFINED)
#define IL2CPP_STRUCT_Shadow_DEFINED
struct Shadow__Class;
struct Shadow {
    struct Shadow__Class* klass;
    MonitorData* monitor;
    struct Shadow__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Shadow_FWDDECL)
#define IL2CPP_STRUCT_Shadow_FWDDECL
#include <Modloader/app/structs/Shadow__Class.h>
#endif
#undef IL2CPP_STRUCT_Shadow_INITIALIZING
#if !defined(IL2CPP_STRUCT_Shadow_DEFINED) && !defined(IL2CPP_STRUCT_Shadow_FWDDECL)
#include <Modloader/app/structs/Shadow.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Shadow.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
