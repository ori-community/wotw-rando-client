#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoMethodMessage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoMethodMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoMethodMessage_DEFINED)
#include <Modloader/app/structs/MonoMethodMessage__Fields.h>
#if defined(IL2CPP_STRUCT_MonoMethodMessage__Fields_DEFINED)
#define IL2CPP_STRUCT_MonoMethodMessage_DEFINED
struct MonoMethodMessage__Class;
struct MonoMethodMessage {
    struct MonoMethodMessage__Class* klass;
    MonitorData* monitor;
    struct MonoMethodMessage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoMethodMessage_FWDDECL)
#define IL2CPP_STRUCT_MonoMethodMessage_FWDDECL
#include <Modloader/app/structs/MonoMethodMessage__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoMethodMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoMethodMessage_DEFINED) && !defined(IL2CPP_STRUCT_MonoMethodMessage_FWDDECL)
#include <Modloader/app/structs/MonoMethodMessage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoMethodMessage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
