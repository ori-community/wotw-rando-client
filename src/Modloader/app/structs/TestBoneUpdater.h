#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TestBoneUpdater_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TestBoneUpdater_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestBoneUpdater_DEFINED)
#include <Modloader/app/structs/TestBoneUpdater__Fields.h>
#if defined(IL2CPP_STRUCT_TestBoneUpdater__Fields_DEFINED)
#define IL2CPP_STRUCT_TestBoneUpdater_DEFINED
struct TestBoneUpdater__Class;
struct TestBoneUpdater {
    struct TestBoneUpdater__Class* klass;
    MonitorData* monitor;
    struct TestBoneUpdater__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TestBoneUpdater_FWDDECL)
#define IL2CPP_STRUCT_TestBoneUpdater_FWDDECL
#include <Modloader/app/structs/TestBoneUpdater__Class.h>
#endif
#undef IL2CPP_STRUCT_TestBoneUpdater_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestBoneUpdater_DEFINED) && !defined(IL2CPP_STRUCT_TestBoneUpdater_FWDDECL)
#include <Modloader/app/structs/TestBoneUpdater.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TestBoneUpdater.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
