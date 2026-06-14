#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TestSetManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TestSetManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestSetManager_DEFINED)
#include <Modloader/app/structs/TestSetManager__Fields.h>
#if defined(IL2CPP_STRUCT_TestSetManager__Fields_DEFINED)
#define IL2CPP_STRUCT_TestSetManager_DEFINED
struct TestSetManager__Class;
struct TestSetManager {
    struct TestSetManager__Class* klass;
    MonitorData* monitor;
    struct TestSetManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TestSetManager_FWDDECL)
#define IL2CPP_STRUCT_TestSetManager_FWDDECL
#include <Modloader/app/structs/TestSetManager__Class.h>
#endif
#undef IL2CPP_STRUCT_TestSetManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestSetManager_DEFINED) && !defined(IL2CPP_STRUCT_TestSetManager_FWDDECL)
#include <Modloader/app/structs/TestSetManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TestSetManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
