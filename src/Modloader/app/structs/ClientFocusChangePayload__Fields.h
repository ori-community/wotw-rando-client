#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClientFocusChangePayload__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClientFocusChangePayload__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientFocusChangePayload__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_DateTime__DEFINED)
#define IL2CPP_STRUCT_ClientFocusChangePayload__Fields_DEFINED
struct String;
struct __declspec(align(8)) ClientFocusChangePayload__Fields {
    struct String* ClientSessionID;
    struct Nullable_1_DateTime_ EventTimestamp;
    struct String* FocusID;
    bool FocusState;
    double FocusStateDuration;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ClientFocusChangePayload__Fields_FWDDECL)
#define IL2CPP_STRUCT_ClientFocusChangePayload__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ClientFocusChangePayload__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientFocusChangePayload__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ClientFocusChangePayload__Fields_FWDDECL)
#include <Modloader/app/structs/ClientFocusChangePayload__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClientFocusChangePayload__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
