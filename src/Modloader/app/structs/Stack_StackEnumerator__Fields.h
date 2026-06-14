#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Stack_StackEnumerator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Stack_StackEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Stack_StackEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_Stack_StackEnumerator__Fields_DEFINED
struct Stack;
struct Object;
struct __declspec(align(8)) Stack_StackEnumerator__Fields {
    struct Stack* _stack;
    int32_t _index;
    int32_t _version;
    struct Object* currentElement;
};
#endif
#if !defined(IL2CPP_STRUCT_Stack_StackEnumerator__Fields_FWDDECL)
#define IL2CPP_STRUCT_Stack_StackEnumerator__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Stack.h>
#endif
#undef IL2CPP_STRUCT_Stack_StackEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Stack_StackEnumerator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Stack_StackEnumerator__Fields_FWDDECL)
#include <Modloader/app/structs/Stack_StackEnumerator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Stack_StackEnumerator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
