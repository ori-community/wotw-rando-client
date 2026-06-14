#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XalException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XalException_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalException_DEFINED)
#include <Modloader/app/structs/XalException__Fields.h>
#if defined(IL2CPP_STRUCT_XalException__Fields_DEFINED)
#define IL2CPP_STRUCT_XalException_DEFINED
struct XalException__Class;
struct XalException {
    struct XalException__Class* klass;
    MonitorData* monitor;
    struct XalException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XalException_FWDDECL)
#define IL2CPP_STRUCT_XalException_FWDDECL
#include <Modloader/app/structs/XalException__Class.h>
#endif
#undef IL2CPP_STRUCT_XalException_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalException_DEFINED) && !defined(IL2CPP_STRUCT_XalException_FWDDECL)
#include <Modloader/app/structs/XalException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XalException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
