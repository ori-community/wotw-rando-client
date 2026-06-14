#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxOneFlow_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxOneFlow_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneFlow_DEFINED)
#include <Modloader/app/structs/XboxOneFlow__Fields.h>
#if defined(IL2CPP_STRUCT_XboxOneFlow__Fields_DEFINED)
#define IL2CPP_STRUCT_XboxOneFlow_DEFINED
struct XboxOneFlow__Class;
struct XboxOneFlow {
    struct XboxOneFlow__Class* klass;
    MonitorData* monitor;
    struct XboxOneFlow__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XboxOneFlow_FWDDECL)
#define IL2CPP_STRUCT_XboxOneFlow_FWDDECL
#include <Modloader/app/structs/XboxOneFlow__Class.h>
#endif
#undef IL2CPP_STRUCT_XboxOneFlow_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneFlow_DEFINED) && !defined(IL2CPP_STRUCT_XboxOneFlow_FWDDECL)
#include <Modloader/app/structs/XboxOneFlow.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxOneFlow.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
