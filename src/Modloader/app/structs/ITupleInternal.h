#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITupleInternal_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITupleInternal_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITupleInternal_DEFINED)
#define IL2CPP_STRUCT_ITupleInternal_DEFINED
struct ITupleInternal__Class;
struct ITupleInternal {
    struct ITupleInternal__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ITupleInternal_FWDDECL)
#define IL2CPP_STRUCT_ITupleInternal_FWDDECL
#include <Modloader/app/structs/ITupleInternal__Class.h>
#endif
#undef IL2CPP_STRUCT_ITupleInternal_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITupleInternal_DEFINED) && !defined(IL2CPP_STRUCT_ITupleInternal_FWDDECL)
#include <Modloader/app/structs/ITupleInternal.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITupleInternal.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
