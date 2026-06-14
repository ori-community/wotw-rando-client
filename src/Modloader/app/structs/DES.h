#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DES_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DES_INITIALIZING
#if !defined(IL2CPP_STRUCT_DES_DEFINED)
#include <Modloader/app/structs/DES__Fields.h>
#if defined(IL2CPP_STRUCT_DES__Fields_DEFINED)
#define IL2CPP_STRUCT_DES_DEFINED
struct DES__Class;
struct DES {
    struct DES__Class* klass;
    MonitorData* monitor;
    struct DES__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DES_FWDDECL)
#define IL2CPP_STRUCT_DES_FWDDECL
#include <Modloader/app/structs/DES__Class.h>
#endif
#undef IL2CPP_STRUCT_DES_INITIALIZING
#if !defined(IL2CPP_STRUCT_DES_DEFINED) && !defined(IL2CPP_STRUCT_DES_FWDDECL)
#include <Modloader/app/structs/DES.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DES.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
