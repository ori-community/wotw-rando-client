#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TwistRelaxer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TwistRelaxer_INITIALIZING
#if !defined(IL2CPP_STRUCT_TwistRelaxer_DEFINED)
#include <Modloader/app/structs/TwistRelaxer__Fields.h>
#if defined(IL2CPP_STRUCT_TwistRelaxer__Fields_DEFINED)
#define IL2CPP_STRUCT_TwistRelaxer_DEFINED
struct TwistRelaxer__Class;
struct TwistRelaxer {
    struct TwistRelaxer__Class* klass;
    MonitorData* monitor;
    struct TwistRelaxer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TwistRelaxer_FWDDECL)
#define IL2CPP_STRUCT_TwistRelaxer_FWDDECL
#include <Modloader/app/structs/TwistRelaxer__Class.h>
#endif
#undef IL2CPP_STRUCT_TwistRelaxer_INITIALIZING
#if !defined(IL2CPP_STRUCT_TwistRelaxer_DEFINED) && !defined(IL2CPP_STRUCT_TwistRelaxer_FWDDECL)
#include <Modloader/app/structs/TwistRelaxer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TwistRelaxer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
