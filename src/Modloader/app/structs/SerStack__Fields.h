#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerStack__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerStack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerStack__Fields_DEFINED)
#define IL2CPP_STRUCT_SerStack__Fields_DEFINED
struct Object__Array;
struct String;
struct __declspec(align(8)) SerStack__Fields {
    struct Object__Array* objects;
    struct String* stackId;
    int32_t top;
};
#endif
#if !defined(IL2CPP_STRUCT_SerStack__Fields_FWDDECL)
#define IL2CPP_STRUCT_SerStack__Fields_FWDDECL
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SerStack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerStack__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SerStack__Fields_FWDDECL)
#include <Modloader/app/structs/SerStack__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerStack__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
