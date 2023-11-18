#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PipeStream__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PipeStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PipeStream__Fields_DEFINED)
#include <Modloader/app/structs/PipeDirection__Enum.h>
#include <Modloader/app/structs/PipeTransmissionMode__Enum.h>
#include <Modloader/app/structs/Stream__Fields.h>
#if defined(IL2CPP_STRUCT_Stream__Fields_DEFINED) && defined(IL2CPP_STRUCT_PipeDirection__Enum_DEFINED) && defined(IL2CPP_STRUCT_PipeTransmissionMode__Enum_DEFINED)
#define IL2CPP_STRUCT_PipeStream__Fields_DEFINED
struct SafePipeHandle;
struct Stream;
struct Func_4_Byte_Int32_Int32_Int32_;
struct Action_3_Byte_Int32_Int32_;
struct PipeStream__Fields {
    struct Stream__Fields _;
    PipeDirection__Enum direction;

    PipeTransmissionMode__Enum transmission_mode;

    PipeTransmissionMode__Enum read_trans_mode;

    int32_t buffer_size;
    struct SafePipeHandle* handle;
    struct Stream* stream;
    bool _IsAsync_k__BackingField;
    bool _IsConnected_k__BackingField;
    struct Func_4_Byte_Int32_Int32_Int32_* read_delegate;
    struct Action_3_Byte_Int32_Int32_* write_delegate;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PipeStream__Fields_FWDDECL)
#define IL2CPP_STRUCT_PipeStream__Fields_FWDDECL
#include <Modloader/app/structs/Action_3_Byte_Int32_Int32_.h>
#include <Modloader/app/structs/Func_4_Byte_Int32_Int32_Int32_.h>
#include <Modloader/app/structs/SafePipeHandle.h>
#include <Modloader/app/structs/Stream.h>
#endif
#undef IL2CPP_STRUCT_PipeStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PipeStream__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PipeStream__Fields_FWDDECL)
#include <Modloader/app/structs/PipeStream__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PipeStream__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
