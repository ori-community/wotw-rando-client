#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExceptionCaptureAgent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExceptionCaptureAgent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionCaptureAgent__Fields_DEFINED)
#define IL2CPP_STRUCT_ExceptionCaptureAgent__Fields_DEFINED
struct String__Array;
struct String;
struct __declspec(align(8)) ExceptionCaptureAgent__Fields {
    struct String__Array* m_frameData;
    struct String* m_currentException;
    struct String* m_previousException;
};
#endif
#if !defined(IL2CPP_STRUCT_ExceptionCaptureAgent__Fields_FWDDECL)
#define IL2CPP_STRUCT_ExceptionCaptureAgent__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_ExceptionCaptureAgent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionCaptureAgent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ExceptionCaptureAgent__Fields_FWDDECL)
#include <Modloader/app/structs/ExceptionCaptureAgent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExceptionCaptureAgent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
