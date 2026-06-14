#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlBinary_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlBinary_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlBinary_DEFINED)
#define IL2CPP_STRUCT_SqlBinary_DEFINED
struct Byte__Array;
struct SqlBinary {
    struct Byte__Array* _value;
};
#endif
#if !defined(IL2CPP_STRUCT_SqlBinary_FWDDECL)
#define IL2CPP_STRUCT_SqlBinary_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_SqlBinary_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlBinary_DEFINED) && !defined(IL2CPP_STRUCT_SqlBinary_FWDDECL)
#include <Modloader/app/structs/SqlBinary.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlBinary.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
