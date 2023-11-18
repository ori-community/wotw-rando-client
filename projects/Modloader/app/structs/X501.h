#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X501_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X501_INITIALIZING
#if !defined(IL2CPP_STRUCT_X501_DEFINED)
#define IL2CPP_STRUCT_X501_DEFINED
struct X501__Class;
struct X501 {
    struct X501__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_X501_FWDDECL)
#define IL2CPP_STRUCT_X501_FWDDECL
#include <Modloader/app/structs/X501__Class.h>
#endif
#undef IL2CPP_STRUCT_X501_INITIALIZING
#if !defined(IL2CPP_STRUCT_X501_DEFINED) && !defined(IL2CPP_STRUCT_X501_FWDDECL)
#include <Modloader/app/structs/X501.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X501.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
