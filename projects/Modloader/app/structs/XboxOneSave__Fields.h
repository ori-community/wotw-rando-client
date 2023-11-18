#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxOneSave__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxOneSave__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneSave__Fields_DEFINED)
#define IL2CPP_STRUCT_XboxOneSave__Fields_DEFINED
struct Queue_1_System_Action_;
struct Queue_1_System_String_;
struct String;
struct __declspec(align(8)) XboxOneSave__Fields {
    struct Queue_1_System_Action_* m_queuedStorageOperations;
    struct Queue_1_System_String_* m_queuedStorageOperationNames;
    struct String* m_bufferName;
};
#endif
#if !defined(IL2CPP_STRUCT_XboxOneSave__Fields_FWDDECL)
#define IL2CPP_STRUCT_XboxOneSave__Fields_FWDDECL
#include <Modloader/app/structs/Queue_1_System_Action_.h>
#include <Modloader/app/structs/Queue_1_System_String_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XboxOneSave__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneSave__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XboxOneSave__Fields_FWDDECL)
#include <Modloader/app/structs/XboxOneSave__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxOneSave__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
