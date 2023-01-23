#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventProvider__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventProvider__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventProvider__StaticFields_DEFINED)
#include <Modloader/app/structs/EventProvider_WriteEventErrorCode__Enum.h>
#if defined(IL2CPP_STRUCT_EventProvider_WriteEventErrorCode__Enum_DEFINED)
#define IL2CPP_STRUCT_EventProvider__StaticFields_DEFINED
struct Int32__Array;
struct EventProvider__StaticFields {
    bool m_setInformationMissing;
    EventProvider_WriteEventErrorCode__Enum s_returnCode;

    struct Int32__Array* nibblebits;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventProvider__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_EventProvider__StaticFields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#endif
#undef IL2CPP_STRUCT_EventProvider__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventProvider__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_EventProvider__StaticFields_FWDDECL)
#include <Modloader/app/structs/EventProvider__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventProvider__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
