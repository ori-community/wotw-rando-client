#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XTextWrapper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XTextWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_XTextWrapper_DEFINED)
#include <Modloader/app/structs/XTextWrapper__Fields.h>
#if defined(IL2CPP_STRUCT_XTextWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_XTextWrapper_DEFINED
struct XTextWrapper__Class;
struct XTextWrapper {
    struct XTextWrapper__Class* klass;
    MonitorData* monitor;
    struct XTextWrapper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XTextWrapper_FWDDECL)
#define IL2CPP_STRUCT_XTextWrapper_FWDDECL
#include <Modloader/app/structs/XTextWrapper__Class.h>
#endif
#undef IL2CPP_STRUCT_XTextWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_XTextWrapper_DEFINED) && !defined(IL2CPP_STRUCT_XTextWrapper_FWDDECL)
#include <Modloader/app/structs/XTextWrapper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XTextWrapper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
