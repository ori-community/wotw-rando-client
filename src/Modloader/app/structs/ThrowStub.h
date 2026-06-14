#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ThrowStub_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ThrowStub_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThrowStub_DEFINED)
#include <Modloader/app/structs/ThrowStub__Fields.h>
#if defined(IL2CPP_STRUCT_ThrowStub__Fields_DEFINED)
#define IL2CPP_STRUCT_ThrowStub_DEFINED
struct ThrowStub__Class;
struct ThrowStub {
    struct ThrowStub__Class* klass;
    MonitorData* monitor;
    struct ThrowStub__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ThrowStub_FWDDECL)
#define IL2CPP_STRUCT_ThrowStub_FWDDECL
#include <Modloader/app/structs/ThrowStub__Class.h>
#endif
#undef IL2CPP_STRUCT_ThrowStub_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThrowStub_DEFINED) && !defined(IL2CPP_STRUCT_ThrowStub_FWDDECL)
#include <Modloader/app/structs/ThrowStub.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ThrowStub.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
