#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IkLimbPostprocess_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IkLimbPostprocess_INITIALIZING
#if !defined(IL2CPP_STRUCT_IkLimbPostprocess_DEFINED)
#include <Modloader/app/structs/IkLimbPostprocess__Fields.h>
#if defined(IL2CPP_STRUCT_IkLimbPostprocess__Fields_DEFINED)
#define IL2CPP_STRUCT_IkLimbPostprocess_DEFINED
struct IkLimbPostprocess__Class;
struct IkLimbPostprocess {
    struct IkLimbPostprocess__Class* klass;
    MonitorData* monitor;
    struct IkLimbPostprocess__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IkLimbPostprocess_FWDDECL)
#define IL2CPP_STRUCT_IkLimbPostprocess_FWDDECL
#include <Modloader/app/structs/IkLimbPostprocess__Class.h>
#endif
#undef IL2CPP_STRUCT_IkLimbPostprocess_INITIALIZING
#if !defined(IL2CPP_STRUCT_IkLimbPostprocess_DEFINED) && !defined(IL2CPP_STRUCT_IkLimbPostprocess_FWDDECL)
#include <Modloader/app/structs/IkLimbPostprocess.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IkLimbPostprocess.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
