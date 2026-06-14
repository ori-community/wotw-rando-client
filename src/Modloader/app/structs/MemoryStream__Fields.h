#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemoryStream__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemoryStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryStream__Fields_DEFINED)
#include <Modloader/app/structs/Stream__Fields.h>
#if defined(IL2CPP_STRUCT_Stream__Fields_DEFINED)
#define IL2CPP_STRUCT_MemoryStream__Fields_DEFINED
struct Byte__Array;
struct Task_1_System_Int32_;
struct MemoryStream__Fields {
    struct Stream__Fields _;
    struct Byte__Array* _buffer;
    int32_t _origin;
    int32_t _position;
    int32_t _length;
    int32_t _capacity;
    bool _expandable;
    bool _writable;
    bool _exposable;
    bool _isOpen;
    struct Task_1_System_Int32_* _lastReadTask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MemoryStream__Fields_FWDDECL)
#define IL2CPP_STRUCT_MemoryStream__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Task_1_System_Int32_.h>
#endif
#undef IL2CPP_STRUCT_MemoryStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryStream__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MemoryStream__Fields_FWDDECL)
#include <Modloader/app/structs/MemoryStream__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemoryStream__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
