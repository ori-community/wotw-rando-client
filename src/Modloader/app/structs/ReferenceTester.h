#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReferenceTester_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReferenceTester_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReferenceTester_DEFINED)
#include <Modloader/app/structs/ReferenceTester__Fields.h>
#if defined(IL2CPP_STRUCT_ReferenceTester__Fields_DEFINED)
#define IL2CPP_STRUCT_ReferenceTester_DEFINED
struct ReferenceTester__Class;
struct ReferenceTester {
    struct ReferenceTester__Class* klass;
    MonitorData* monitor;
    struct ReferenceTester__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReferenceTester_FWDDECL)
#define IL2CPP_STRUCT_ReferenceTester_FWDDECL
#include <Modloader/app/structs/ReferenceTester__Class.h>
#endif
#undef IL2CPP_STRUCT_ReferenceTester_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReferenceTester_DEFINED) && !defined(IL2CPP_STRUCT_ReferenceTester_FWDDECL)
#include <Modloader/app/structs/ReferenceTester.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReferenceTester.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
