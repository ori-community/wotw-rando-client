#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Queue_1_Moon_BrainBehaviour___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Queue_1_Moon_BrainBehaviour___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Queue_1_Moon_BrainBehaviour___Fields_DEFINED)
#define IL2CPP_STRUCT_Queue_1_Moon_BrainBehaviour___Fields_DEFINED
struct BrainBehaviour__Array;
struct Object;
struct __declspec(align(8)) Queue_1_Moon_BrainBehaviour___Fields {
    struct BrainBehaviour__Array* _array;
    int32_t _head;
    int32_t _tail;
    int32_t _size;
    int32_t _version;
    struct Object* _syncRoot;
};
#endif
#if !defined(IL2CPP_STRUCT_Queue_1_Moon_BrainBehaviour___Fields_FWDDECL)
#define IL2CPP_STRUCT_Queue_1_Moon_BrainBehaviour___Fields_FWDDECL
#include <Modloader/app/structs/BrainBehaviour__Array.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_Queue_1_Moon_BrainBehaviour___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Queue_1_Moon_BrainBehaviour___Fields_DEFINED) && !defined(IL2CPP_STRUCT_Queue_1_Moon_BrainBehaviour___Fields_FWDDECL)
#include <Modloader/app/structs/Queue_1_Moon_BrainBehaviour___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Queue_1_Moon_BrainBehaviour___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
