#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKLookPostprocess_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKLookPostprocess_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKLookPostprocess_DEFINED)
#include <Modloader/app/structs/IKLookPostprocess__Fields.h>
#if defined(IL2CPP_STRUCT_IKLookPostprocess__Fields_DEFINED)
#define IL2CPP_STRUCT_IKLookPostprocess_DEFINED
struct IKLookPostprocess__Class;
struct IKLookPostprocess {
    struct IKLookPostprocess__Class* klass;
    MonitorData* monitor;
    struct IKLookPostprocess__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKLookPostprocess_FWDDECL)
#define IL2CPP_STRUCT_IKLookPostprocess_FWDDECL
#include <Modloader/app/structs/IKLookPostprocess__Class.h>
#endif
#undef IL2CPP_STRUCT_IKLookPostprocess_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKLookPostprocess_DEFINED) && !defined(IL2CPP_STRUCT_IKLookPostprocess_FWDDECL)
#include <Modloader/app/structs/IKLookPostprocess.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKLookPostprocess.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
