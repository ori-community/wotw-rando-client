#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TripleDES_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TripleDES_INITIALIZING
#if !defined(IL2CPP_STRUCT_TripleDES_DEFINED)
#include <Modloader/app/structs/TripleDES__Fields.h>
#if defined(IL2CPP_STRUCT_TripleDES__Fields_DEFINED)
#define IL2CPP_STRUCT_TripleDES_DEFINED
struct TripleDES__Class;
struct TripleDES {
    struct TripleDES__Class* klass;
    MonitorData* monitor;
    struct TripleDES__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TripleDES_FWDDECL)
#define IL2CPP_STRUCT_TripleDES_FWDDECL
#include <Modloader/app/structs/TripleDES__Class.h>
#endif
#undef IL2CPP_STRUCT_TripleDES_INITIALIZING
#if !defined(IL2CPP_STRUCT_TripleDES_DEFINED) && !defined(IL2CPP_STRUCT_TripleDES_FWDDECL)
#include <Modloader/app/structs/TripleDES.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TripleDES.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
