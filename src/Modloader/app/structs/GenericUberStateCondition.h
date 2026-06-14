#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GenericUberStateCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GenericUberStateCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericUberStateCondition_DEFINED)
#include <Modloader/app/structs/GenericUberStateCondition__Fields.h>
#if defined(IL2CPP_STRUCT_GenericUberStateCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_GenericUberStateCondition_DEFINED
struct GenericUberStateCondition__Class;
struct GenericUberStateCondition {
    struct GenericUberStateCondition__Class* klass;
    MonitorData* monitor;
    struct GenericUberStateCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GenericUberStateCondition_FWDDECL)
#define IL2CPP_STRUCT_GenericUberStateCondition_FWDDECL
#include <Modloader/app/structs/GenericUberStateCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_GenericUberStateCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericUberStateCondition_DEFINED) && !defined(IL2CPP_STRUCT_GenericUberStateCondition_FWDDECL)
#include <Modloader/app/structs/GenericUberStateCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GenericUberStateCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
