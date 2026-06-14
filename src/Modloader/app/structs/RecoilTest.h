#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecoilTest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecoilTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecoilTest_DEFINED)
#include <Modloader/app/structs/RecoilTest__Fields.h>
#if defined(IL2CPP_STRUCT_RecoilTest__Fields_DEFINED)
#define IL2CPP_STRUCT_RecoilTest_DEFINED
struct RecoilTest__Class;
struct RecoilTest {
    struct RecoilTest__Class* klass;
    MonitorData* monitor;
    struct RecoilTest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecoilTest_FWDDECL)
#define IL2CPP_STRUCT_RecoilTest_FWDDECL
#include <Modloader/app/structs/RecoilTest__Class.h>
#endif
#undef IL2CPP_STRUCT_RecoilTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecoilTest_DEFINED) && !defined(IL2CPP_STRUCT_RecoilTest_FWDDECL)
#include <Modloader/app/structs/RecoilTest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecoilTest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
