#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WriteClientCharacterEventRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WriteClientCharacterEventRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteClientCharacterEventRequest_DEFINED)
#include <Modloader/app/structs/WriteClientCharacterEventRequest__Fields.h>
#if defined(IL2CPP_STRUCT_WriteClientCharacterEventRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_WriteClientCharacterEventRequest_DEFINED
struct WriteClientCharacterEventRequest__Class;
struct WriteClientCharacterEventRequest {
    struct WriteClientCharacterEventRequest__Class* klass;
    MonitorData* monitor;
    struct WriteClientCharacterEventRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WriteClientCharacterEventRequest_FWDDECL)
#define IL2CPP_STRUCT_WriteClientCharacterEventRequest_FWDDECL
#include <Modloader/app/structs/WriteClientCharacterEventRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_WriteClientCharacterEventRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteClientCharacterEventRequest_DEFINED) && !defined(IL2CPP_STRUCT_WriteClientCharacterEventRequest_FWDDECL)
#include <Modloader/app/structs/WriteClientCharacterEventRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WriteClientCharacterEventRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
