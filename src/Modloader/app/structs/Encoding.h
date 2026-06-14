#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Encoding_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Encoding_INITIALIZING
#if !defined(IL2CPP_STRUCT_Encoding_DEFINED)
#include <Modloader/app/structs/Encoding__Fields.h>
#if defined(IL2CPP_STRUCT_Encoding__Fields_DEFINED)
#define IL2CPP_STRUCT_Encoding_DEFINED
struct Encoding__Class;
struct Encoding {
    struct Encoding__Class* klass;
    MonitorData* monitor;
    struct Encoding__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Encoding_FWDDECL)
#define IL2CPP_STRUCT_Encoding_FWDDECL
#include <Modloader/app/structs/Encoding__Class.h>
#endif
#undef IL2CPP_STRUCT_Encoding_INITIALIZING
#if !defined(IL2CPP_STRUCT_Encoding_DEFINED) && !defined(IL2CPP_STRUCT_Encoding_FWDDECL)
#include <Modloader/app/structs/Encoding.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Encoding.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
