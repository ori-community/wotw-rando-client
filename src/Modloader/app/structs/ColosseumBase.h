#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColosseumBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColosseumBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColosseumBase_DEFINED)
#include <Modloader/app/structs/ColosseumBase__Fields.h>
#if defined(IL2CPP_STRUCT_ColosseumBase__Fields_DEFINED)
#define IL2CPP_STRUCT_ColosseumBase_DEFINED
struct ColosseumBase__Class;
struct ColosseumBase {
    struct ColosseumBase__Class* klass;
    MonitorData* monitor;
    struct ColosseumBase__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ColosseumBase_FWDDECL)
#define IL2CPP_STRUCT_ColosseumBase_FWDDECL
#include <Modloader/app/structs/ColosseumBase__Class.h>
#endif
#undef IL2CPP_STRUCT_ColosseumBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColosseumBase_DEFINED) && !defined(IL2CPP_STRUCT_ColosseumBase_FWDDECL)
#include <Modloader/app/structs/ColosseumBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColosseumBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
