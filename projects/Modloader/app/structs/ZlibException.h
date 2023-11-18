#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ZlibException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ZlibException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZlibException_DEFINED)
#include <Modloader/app/structs/ZlibException__Fields.h>
#if defined(IL2CPP_STRUCT_ZlibException__Fields_DEFINED)
#define IL2CPP_STRUCT_ZlibException_DEFINED
struct ZlibException__Class;
struct ZlibException {
    struct ZlibException__Class* klass;
    MonitorData* monitor;
    struct ZlibException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ZlibException_FWDDECL)
#define IL2CPP_STRUCT_ZlibException_FWDDECL
#include <Modloader/app/structs/ZlibException__Class.h>
#endif
#undef IL2CPP_STRUCT_ZlibException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZlibException_DEFINED) && !defined(IL2CPP_STRUCT_ZlibException_FWDDECL)
#include <Modloader/app/structs/ZlibException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ZlibException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
