#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Queue_QueueEnumerator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Queue_QueueEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Queue_QueueEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_Queue_QueueEnumerator__Fields_DEFINED
struct Queue;
struct Object;
struct __declspec(align(8)) Queue_QueueEnumerator__Fields {
    struct Queue* _q;
    int32_t _index;
    int32_t _version;
    struct Object* currentElement;
};
#endif
#if !defined(IL2CPP_STRUCT_Queue_QueueEnumerator__Fields_FWDDECL)
#define IL2CPP_STRUCT_Queue_QueueEnumerator__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Queue.h>
#endif
#undef IL2CPP_STRUCT_Queue_QueueEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Queue_QueueEnumerator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Queue_QueueEnumerator__Fields_FWDDECL)
#include <Modloader/app/structs/Queue_QueueEnumerator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Queue_QueueEnumerator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
