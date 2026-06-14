#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKEffector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKEffector_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKEffector_DEFINED)
#include <Modloader/app/structs/IKEffector__Fields.h>
#if defined(IL2CPP_STRUCT_IKEffector__Fields_DEFINED)
#define IL2CPP_STRUCT_IKEffector_DEFINED
struct IKEffector__Class;
struct IKEffector {
    struct IKEffector__Class* klass;
    MonitorData* monitor;
    struct IKEffector__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKEffector_FWDDECL)
#define IL2CPP_STRUCT_IKEffector_FWDDECL
#include <Modloader/app/structs/IKEffector__Class.h>
#endif
#undef IL2CPP_STRUCT_IKEffector_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKEffector_DEFINED) && !defined(IL2CPP_STRUCT_IKEffector_FWDDECL)
#include <Modloader/app/structs/IKEffector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKEffector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
