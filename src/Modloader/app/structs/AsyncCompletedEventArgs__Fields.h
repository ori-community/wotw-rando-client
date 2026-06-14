#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncCompletedEventArgs__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncCompletedEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncCompletedEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_AsyncCompletedEventArgs__Fields_DEFINED
struct Exception;
struct Object;
struct __declspec(align(8)) AsyncCompletedEventArgs__Fields {
    struct Exception* error;
    bool cancelled;
    struct Object* userState;
};
#endif
#if !defined(IL2CPP_STRUCT_AsyncCompletedEventArgs__Fields_FWDDECL)
#define IL2CPP_STRUCT_AsyncCompletedEventArgs__Fields_FWDDECL
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_AsyncCompletedEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncCompletedEventArgs__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AsyncCompletedEventArgs__Fields_FWDDECL)
#include <Modloader/app/structs/AsyncCompletedEventArgs__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncCompletedEventArgs__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
