#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Base64Stream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Base64Stream_INITIALIZING
#if !defined(IL2CPP_STRUCT_Base64Stream_DEFINED)
#include <Modloader/app/structs/Base64Stream__Fields.h>
#if defined(IL2CPP_STRUCT_Base64Stream__Fields_DEFINED)
#define IL2CPP_STRUCT_Base64Stream_DEFINED
struct Base64Stream__Class;
struct Base64Stream {
    struct Base64Stream__Class* klass;
    MonitorData* monitor;
    struct Base64Stream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Base64Stream_FWDDECL)
#define IL2CPP_STRUCT_Base64Stream_FWDDECL
#include <Modloader/app/structs/Base64Stream__Class.h>
#endif
#undef IL2CPP_STRUCT_Base64Stream_INITIALIZING
#if !defined(IL2CPP_STRUCT_Base64Stream_DEFINED) && !defined(IL2CPP_STRUCT_Base64Stream_FWDDECL)
#include <Modloader/app/structs/Base64Stream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Base64Stream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
