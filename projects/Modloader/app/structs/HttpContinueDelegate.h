#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpContinueDelegate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpContinueDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpContinueDelegate_DEFINED)
#include <Modloader/app/structs/HttpContinueDelegate__Fields.h>
#if defined(IL2CPP_STRUCT_HttpContinueDelegate__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpContinueDelegate_DEFINED
struct HttpContinueDelegate__Class;
struct HttpContinueDelegate {
    struct HttpContinueDelegate__Class* klass;
    MonitorData* monitor;
    struct HttpContinueDelegate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HttpContinueDelegate_FWDDECL)
#define IL2CPP_STRUCT_HttpContinueDelegate_FWDDECL
#include <Modloader/app/structs/HttpContinueDelegate__Class.h>
#endif
#undef IL2CPP_STRUCT_HttpContinueDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpContinueDelegate_DEFINED) && !defined(IL2CPP_STRUCT_HttpContinueDelegate_FWDDECL)
#include <Modloader/app/structs/HttpContinueDelegate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpContinueDelegate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
