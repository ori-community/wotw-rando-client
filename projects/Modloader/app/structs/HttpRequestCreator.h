#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpRequestCreator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpRequestCreator_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpRequestCreator_DEFINED)
#define IL2CPP_STRUCT_HttpRequestCreator_DEFINED
struct HttpRequestCreator__Class;
struct HttpRequestCreator {
    struct HttpRequestCreator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_HttpRequestCreator_FWDDECL)
#define IL2CPP_STRUCT_HttpRequestCreator_FWDDECL
#include <Modloader/app/structs/HttpRequestCreator__Class.h>
#endif
#undef IL2CPP_STRUCT_HttpRequestCreator_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpRequestCreator_DEFINED) && !defined(IL2CPP_STRUCT_HttpRequestCreator_FWDDECL)
#include <Modloader/app/structs/HttpRequestCreator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpRequestCreator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
