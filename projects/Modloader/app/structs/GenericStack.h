#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GenericStack_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GenericStack_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericStack_DEFINED)
#include <Modloader/app/structs/GenericStack__Fields.h>
#if defined(IL2CPP_STRUCT_GenericStack__Fields_DEFINED)
#define IL2CPP_STRUCT_GenericStack_DEFINED
struct GenericStack__Class;
struct GenericStack {
    struct GenericStack__Class* klass;
    MonitorData* monitor;
    struct GenericStack__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GenericStack_FWDDECL)
#define IL2CPP_STRUCT_GenericStack_FWDDECL
#include <Modloader/app/structs/GenericStack__Class.h>
#endif
#undef IL2CPP_STRUCT_GenericStack_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericStack_DEFINED) && !defined(IL2CPP_STRUCT_GenericStack_FWDDECL)
#include <Modloader/app/structs/GenericStack.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GenericStack.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
