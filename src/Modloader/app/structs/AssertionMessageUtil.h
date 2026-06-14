#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssertionMessageUtil_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssertionMessageUtil_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssertionMessageUtil_DEFINED)
#define IL2CPP_STRUCT_AssertionMessageUtil_DEFINED
struct AssertionMessageUtil__Class;
struct AssertionMessageUtil {
    struct AssertionMessageUtil__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AssertionMessageUtil_FWDDECL)
#define IL2CPP_STRUCT_AssertionMessageUtil_FWDDECL
#include <Modloader/app/structs/AssertionMessageUtil__Class.h>
#endif
#undef IL2CPP_STRUCT_AssertionMessageUtil_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssertionMessageUtil_DEFINED) && !defined(IL2CPP_STRUCT_AssertionMessageUtil_FWDDECL)
#include <Modloader/app/structs/AssertionMessageUtil.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssertionMessageUtil.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
