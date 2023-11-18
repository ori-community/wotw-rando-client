#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FastEncoder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FastEncoder_INITIALIZING
#if !defined(IL2CPP_STRUCT_FastEncoder_DEFINED)
#include <Modloader/app/structs/FastEncoder__Fields.h>
#if defined(IL2CPP_STRUCT_FastEncoder__Fields_DEFINED)
#define IL2CPP_STRUCT_FastEncoder_DEFINED
struct FastEncoder__Class;
struct FastEncoder {
    struct FastEncoder__Class* klass;
    MonitorData* monitor;
    struct FastEncoder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FastEncoder_FWDDECL)
#define IL2CPP_STRUCT_FastEncoder_FWDDECL
#include <Modloader/app/structs/FastEncoder__Class.h>
#endif
#undef IL2CPP_STRUCT_FastEncoder_INITIALIZING
#if !defined(IL2CPP_STRUCT_FastEncoder_DEFINED) && !defined(IL2CPP_STRUCT_FastEncoder_FWDDECL)
#include <Modloader/app/structs/FastEncoder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FastEncoder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
