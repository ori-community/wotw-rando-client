#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InputField__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InputField__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputField__StaticFields_DEFINED)
#define IL2CPP_STRUCT_InputField__StaticFields_DEFINED
struct Char__Array;
struct InputField__StaticFields {
    struct Char__Array* kSeparators;
};
#endif
#if !defined(IL2CPP_STRUCT_InputField__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_InputField__StaticFields_FWDDECL
#include <Modloader/app/structs/Char__Array.h>
#endif
#undef IL2CPP_STRUCT_InputField__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputField__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_InputField__StaticFields_FWDDECL)
#include <Modloader/app/structs/InputField__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InputField__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
