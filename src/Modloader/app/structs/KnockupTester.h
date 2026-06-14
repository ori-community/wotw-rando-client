#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KnockupTester_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KnockupTester_INITIALIZING
#if !defined(IL2CPP_STRUCT_KnockupTester_DEFINED)
#include <Modloader/app/structs/KnockupTester__Fields.h>
#if defined(IL2CPP_STRUCT_KnockupTester__Fields_DEFINED)
#define IL2CPP_STRUCT_KnockupTester_DEFINED
struct KnockupTester__Class;
struct KnockupTester {
    struct KnockupTester__Class* klass;
    MonitorData* monitor;
    struct KnockupTester__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KnockupTester_FWDDECL)
#define IL2CPP_STRUCT_KnockupTester_FWDDECL
#include <Modloader/app/structs/KnockupTester__Class.h>
#endif
#undef IL2CPP_STRUCT_KnockupTester_INITIALIZING
#if !defined(IL2CPP_STRUCT_KnockupTester_DEFINED) && !defined(IL2CPP_STRUCT_KnockupTester_FWDDECL)
#include <Modloader/app/structs/KnockupTester.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KnockupTester.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
