#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKPostprocess_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKPostprocess_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKPostprocess_DEFINED)
#include <Modloader/app/structs/IKPostprocess__Fields.h>
#if defined(IL2CPP_STRUCT_IKPostprocess__Fields_DEFINED)
#define IL2CPP_STRUCT_IKPostprocess_DEFINED
struct IKPostprocess__Class;
struct IKPostprocess {
    struct IKPostprocess__Class* klass;
    MonitorData* monitor;
    struct IKPostprocess__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKPostprocess_FWDDECL)
#define IL2CPP_STRUCT_IKPostprocess_FWDDECL
#include <Modloader/app/structs/IKPostprocess__Class.h>
#endif
#undef IL2CPP_STRUCT_IKPostprocess_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKPostprocess_DEFINED) && !defined(IL2CPP_STRUCT_IKPostprocess_FWDDECL)
#include <Modloader/app/structs/IKPostprocess.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKPostprocess.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
