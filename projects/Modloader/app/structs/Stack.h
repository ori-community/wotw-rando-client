#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Stack_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Stack_INITIALIZING
#if !defined(IL2CPP_STRUCT_Stack_DEFINED)
#include <Modloader/app/structs/Stack__Fields.h>
#if defined(IL2CPP_STRUCT_Stack__Fields_DEFINED)
#define IL2CPP_STRUCT_Stack_DEFINED
struct Stack__Class;
struct Stack {
    struct Stack__Class* klass;
    MonitorData* monitor;
    struct Stack__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Stack_FWDDECL)
#define IL2CPP_STRUCT_Stack_FWDDECL
#include <Modloader/app/structs/Stack__Class.h>
#endif
#undef IL2CPP_STRUCT_Stack_INITIALIZING
#if !defined(IL2CPP_STRUCT_Stack_DEFINED) && !defined(IL2CPP_STRUCT_Stack_FWDDECL)
#include <Modloader/app/structs/Stack.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Stack.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
