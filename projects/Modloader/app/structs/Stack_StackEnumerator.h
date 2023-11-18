#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Stack_StackEnumerator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Stack_StackEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_Stack_StackEnumerator_DEFINED)
#include <Modloader/app/structs/Stack_StackEnumerator__Fields.h>
#if defined(IL2CPP_STRUCT_Stack_StackEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_Stack_StackEnumerator_DEFINED
struct Stack_StackEnumerator__Class;
struct Stack_StackEnumerator {
    struct Stack_StackEnumerator__Class* klass;
    MonitorData* monitor;
    struct Stack_StackEnumerator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Stack_StackEnumerator_FWDDECL)
#define IL2CPP_STRUCT_Stack_StackEnumerator_FWDDECL
#include <Modloader/app/structs/Stack_StackEnumerator__Class.h>
#endif
#undef IL2CPP_STRUCT_Stack_StackEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_Stack_StackEnumerator_DEFINED) && !defined(IL2CPP_STRUCT_Stack_StackEnumerator_FWDDECL)
#include <Modloader/app/structs/Stack_StackEnumerator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Stack_StackEnumerator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
