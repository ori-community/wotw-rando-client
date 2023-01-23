#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkVector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkVector_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkVector_DEFINED)
#include <Modloader/app/structs/AkVector__Fields.h>
#if defined(IL2CPP_STRUCT_AkVector__Fields_DEFINED)
#define IL2CPP_STRUCT_AkVector_DEFINED
struct AkVector__Class;
struct AkVector {
    struct AkVector__Class* klass;
    MonitorData* monitor;
    struct AkVector__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkVector_FWDDECL)
#define IL2CPP_STRUCT_AkVector_FWDDECL
#include <Modloader/app/structs/AkVector__Class.h>
#endif
#undef IL2CPP_STRUCT_AkVector_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkVector_DEFINED) && !defined(IL2CPP_STRUCT_AkVector_FWDDECL)
#include <Modloader/app/structs/AkVector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkVector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
