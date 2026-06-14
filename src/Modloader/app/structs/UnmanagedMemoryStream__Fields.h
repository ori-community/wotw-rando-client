#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnmanagedMemoryStream__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnmanagedMemoryStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnmanagedMemoryStream__Fields_DEFINED)
#include <Modloader/app/structs/FileAccess__Enum.h>
#include <Modloader/app/structs/Stream__Fields.h>
#if defined(IL2CPP_STRUCT_Stream__Fields_DEFINED) && defined(IL2CPP_STRUCT_FileAccess__Enum_DEFINED)
#define IL2CPP_STRUCT_UnmanagedMemoryStream__Fields_DEFINED
struct SafeBuffer;
struct Task_1_System_Int32_;
struct UnmanagedMemoryStream__Fields {
    struct Stream__Fields _;
    struct SafeBuffer* _buffer;
    uint8_t* _mem;
    int64_t _length;
    int64_t _capacity;
    int64_t _position;
    int64_t _offset;
    FileAccess__Enum _access;

    bool _isOpen;
    struct Task_1_System_Int32_* _lastReadTask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnmanagedMemoryStream__Fields_FWDDECL)
#define IL2CPP_STRUCT_UnmanagedMemoryStream__Fields_FWDDECL
#include <Modloader/app/structs/SafeBuffer.h>
#include <Modloader/app/structs/Task_1_System_Int32_.h>
#endif
#undef IL2CPP_STRUCT_UnmanagedMemoryStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnmanagedMemoryStream__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UnmanagedMemoryStream__Fields_FWDDECL)
#include <Modloader/app/structs/UnmanagedMemoryStream__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnmanagedMemoryStream__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
