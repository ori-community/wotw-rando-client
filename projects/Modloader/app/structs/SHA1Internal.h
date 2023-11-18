#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SHA1Internal_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SHA1Internal_INITIALIZING
#if !defined(IL2CPP_STRUCT_SHA1Internal_DEFINED)
#include <Modloader/app/structs/SHA1Internal__Fields.h>
#if defined(IL2CPP_STRUCT_SHA1Internal__Fields_DEFINED)
#define IL2CPP_STRUCT_SHA1Internal_DEFINED
struct SHA1Internal__Class;
struct SHA1Internal {
    struct SHA1Internal__Class* klass;
    MonitorData* monitor;
    struct SHA1Internal__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SHA1Internal_FWDDECL)
#define IL2CPP_STRUCT_SHA1Internal_FWDDECL
#include <Modloader/app/structs/SHA1Internal__Class.h>
#endif
#undef IL2CPP_STRUCT_SHA1Internal_INITIALIZING
#if !defined(IL2CPP_STRUCT_SHA1Internal_DEFINED) && !defined(IL2CPP_STRUCT_SHA1Internal_FWDDECL)
#include <Modloader/app/structs/SHA1Internal.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SHA1Internal.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
