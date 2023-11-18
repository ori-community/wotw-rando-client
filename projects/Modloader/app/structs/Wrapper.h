#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Wrapper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Wrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_Wrapper_DEFINED)
#define IL2CPP_STRUCT_Wrapper_DEFINED
struct Wrapper__Class;
struct Wrapper {
    struct Wrapper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Wrapper_FWDDECL)
#define IL2CPP_STRUCT_Wrapper_FWDDECL
#include <Modloader/app/structs/Wrapper__Class.h>
#endif
#undef IL2CPP_STRUCT_Wrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_Wrapper_DEFINED) && !defined(IL2CPP_STRUCT_Wrapper_FWDDECL)
#include <Modloader/app/structs/Wrapper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Wrapper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
