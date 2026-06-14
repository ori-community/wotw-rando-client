#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EndPointListener_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EndPointListener_INITIALIZING
#if !defined(IL2CPP_STRUCT_EndPointListener_DEFINED)
#include <Modloader/app/structs/EndPointListener__Fields.h>
#if defined(IL2CPP_STRUCT_EndPointListener__Fields_DEFINED)
#define IL2CPP_STRUCT_EndPointListener_DEFINED
struct EndPointListener__Class;
struct EndPointListener {
    struct EndPointListener__Class* klass;
    MonitorData* monitor;
    struct EndPointListener__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EndPointListener_FWDDECL)
#define IL2CPP_STRUCT_EndPointListener_FWDDECL
#include <Modloader/app/structs/EndPointListener__Class.h>
#endif
#undef IL2CPP_STRUCT_EndPointListener_INITIALIZING
#if !defined(IL2CPP_STRUCT_EndPointListener_DEFINED) && !defined(IL2CPP_STRUCT_EndPointListener_FWDDECL)
#include <Modloader/app/structs/EndPointListener.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EndPointListener.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
