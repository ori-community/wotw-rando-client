#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IOSelectorJob__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IOSelectorJob__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IOSelectorJob__Fields_DEFINED)
#include <Modloader/app/structs/IOOperation__Enum.h>
#if defined(IL2CPP_STRUCT_IOOperation__Enum_DEFINED)
#define IL2CPP_STRUCT_IOSelectorJob__Fields_DEFINED
struct IOAsyncCallback;
struct IOAsyncResult;
struct __declspec(align(8)) IOSelectorJob__Fields {
    IOOperation__Enum operation;

    struct IOAsyncCallback* callback;
    struct IOAsyncResult* state;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IOSelectorJob__Fields_FWDDECL)
#define IL2CPP_STRUCT_IOSelectorJob__Fields_FWDDECL
#include <Modloader/app/structs/IOAsyncCallback.h>
#include <Modloader/app/structs/IOAsyncResult.h>
#endif
#undef IL2CPP_STRUCT_IOSelectorJob__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IOSelectorJob__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IOSelectorJob__Fields_FWDDECL)
#include <Modloader/app/structs/IOSelectorJob__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IOSelectorJob__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
