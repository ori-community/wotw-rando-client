#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XObjectChangeEventArgs__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XObjectChangeEventArgs__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XObjectChangeEventArgs__StaticFields_DEFINED)
#define IL2CPP_STRUCT_XObjectChangeEventArgs__StaticFields_DEFINED
struct XObjectChangeEventArgs;
struct XObjectChangeEventArgs__StaticFields {
    struct XObjectChangeEventArgs* Add;
    struct XObjectChangeEventArgs* Remove;
    struct XObjectChangeEventArgs* Name;
    struct XObjectChangeEventArgs* Value;
};
#endif
#if !defined(IL2CPP_STRUCT_XObjectChangeEventArgs__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_XObjectChangeEventArgs__StaticFields_FWDDECL
#include <Modloader/app/structs/XObjectChangeEventArgs.h>
#endif
#undef IL2CPP_STRUCT_XObjectChangeEventArgs__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XObjectChangeEventArgs__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_XObjectChangeEventArgs__StaticFields_FWDDECL)
#include <Modloader/app/structs/XObjectChangeEventArgs__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XObjectChangeEventArgs__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
