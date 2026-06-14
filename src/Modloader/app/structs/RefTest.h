#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RefTest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RefTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RefTest_DEFINED)
#include <Modloader/app/structs/RefTest__Fields.h>
#if defined(IL2CPP_STRUCT_RefTest__Fields_DEFINED)
#define IL2CPP_STRUCT_RefTest_DEFINED
struct RefTest__Class;
struct RefTest {
    struct RefTest__Class* klass;
    MonitorData* monitor;
    struct RefTest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RefTest_FWDDECL)
#define IL2CPP_STRUCT_RefTest_FWDDECL
#include <Modloader/app/structs/RefTest__Class.h>
#endif
#undef IL2CPP_STRUCT_RefTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RefTest_DEFINED) && !defined(IL2CPP_STRUCT_RefTest_FWDDECL)
#include <Modloader/app/structs/RefTest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RefTest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
