#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssertionException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssertionException_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssertionException_DEFINED)
#include <Modloader/app/structs/AssertionException__Fields.h>
#if defined(IL2CPP_STRUCT_AssertionException__Fields_DEFINED)
#define IL2CPP_STRUCT_AssertionException_DEFINED
struct AssertionException__Class;
struct AssertionException {
    struct AssertionException__Class* klass;
    MonitorData* monitor;
    struct AssertionException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AssertionException_FWDDECL)
#define IL2CPP_STRUCT_AssertionException_FWDDECL
#include <Modloader/app/structs/AssertionException__Class.h>
#endif
#undef IL2CPP_STRUCT_AssertionException_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssertionException_DEFINED) && !defined(IL2CPP_STRUCT_AssertionException_FWDDECL)
#include <Modloader/app/structs/AssertionException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssertionException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
