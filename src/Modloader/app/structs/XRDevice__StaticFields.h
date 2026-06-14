#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XRDevice__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XRDevice__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRDevice__StaticFields_DEFINED)
#define IL2CPP_STRUCT_XRDevice__StaticFields_DEFINED
struct Action_1_String_;
struct XRDevice__StaticFields {
    struct Action_1_String_* deviceLoaded;
};
#endif
#if !defined(IL2CPP_STRUCT_XRDevice__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_XRDevice__StaticFields_FWDDECL
#include <Modloader/app/structs/Action_1_String_.h>
#endif
#undef IL2CPP_STRUCT_XRDevice__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRDevice__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_XRDevice__StaticFields_FWDDECL)
#include <Modloader/app/structs/XRDevice__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XRDevice__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
