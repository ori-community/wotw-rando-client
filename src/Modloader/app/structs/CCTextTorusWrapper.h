#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CCTextTorusWrapper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CCTextTorusWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCTextTorusWrapper_DEFINED)
#include <Modloader/app/structs/CCTextTorusWrapper__Fields.h>
#if defined(IL2CPP_STRUCT_CCTextTorusWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_CCTextTorusWrapper_DEFINED
struct CCTextTorusWrapper__Class;
struct CCTextTorusWrapper {
    struct CCTextTorusWrapper__Class* klass;
    MonitorData* monitor;
    struct CCTextTorusWrapper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CCTextTorusWrapper_FWDDECL)
#define IL2CPP_STRUCT_CCTextTorusWrapper_FWDDECL
#include <Modloader/app/structs/CCTextTorusWrapper__Class.h>
#endif
#undef IL2CPP_STRUCT_CCTextTorusWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCTextTorusWrapper_DEFINED) && !defined(IL2CPP_STRUCT_CCTextTorusWrapper_FWDDECL)
#include <Modloader/app/structs/CCTextTorusWrapper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CCTextTorusWrapper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
