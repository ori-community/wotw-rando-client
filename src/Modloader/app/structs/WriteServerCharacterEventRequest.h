#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WriteServerCharacterEventRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WriteServerCharacterEventRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteServerCharacterEventRequest_DEFINED)
#include <Modloader/app/structs/WriteServerCharacterEventRequest__Fields.h>
#if defined(IL2CPP_STRUCT_WriteServerCharacterEventRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_WriteServerCharacterEventRequest_DEFINED
struct WriteServerCharacterEventRequest__Class;
struct WriteServerCharacterEventRequest {
    struct WriteServerCharacterEventRequest__Class* klass;
    MonitorData* monitor;
    struct WriteServerCharacterEventRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WriteServerCharacterEventRequest_FWDDECL)
#define IL2CPP_STRUCT_WriteServerCharacterEventRequest_FWDDECL
#include <Modloader/app/structs/WriteServerCharacterEventRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_WriteServerCharacterEventRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteServerCharacterEventRequest_DEFINED) && !defined(IL2CPP_STRUCT_WriteServerCharacterEventRequest_FWDDECL)
#include <Modloader/app/structs/WriteServerCharacterEventRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WriteServerCharacterEventRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
