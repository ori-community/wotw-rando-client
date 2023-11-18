#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DSAParameters__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DSAParameters__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_DSAParameters__Boxed_DEFINED)
#include <Modloader/app/structs/DSAParameters.h>
#if defined(IL2CPP_STRUCT_DSAParameters_DEFINED)
#define IL2CPP_STRUCT_DSAParameters__Boxed_DEFINED
struct DSAParameters__Class;
struct DSAParameters__Boxed {
    struct DSAParameters__Class* klass;
    MonitorData* monitor;
    struct DSAParameters fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DSAParameters__Boxed_FWDDECL)
#define IL2CPP_STRUCT_DSAParameters__Boxed_FWDDECL
#include <Modloader/app/structs/DSAParameters__Class.h>
#endif
#undef IL2CPP_STRUCT_DSAParameters__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_DSAParameters__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_DSAParameters__Boxed_FWDDECL)
#include <Modloader/app/structs/DSAParameters__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DSAParameters__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
