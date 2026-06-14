#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BitArray__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BitArray__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BitArray__Fields_DEFINED)
#define IL2CPP_STRUCT_BitArray__Fields_DEFINED
struct Int32__Array;
struct Object;
struct __declspec(align(8)) BitArray__Fields {
    struct Int32__Array* m_array;
    int32_t m_length;
    int32_t _version;
    struct Object* _syncRoot;
};
#endif
#if !defined(IL2CPP_STRUCT_BitArray__Fields_FWDDECL)
#define IL2CPP_STRUCT_BitArray__Fields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_BitArray__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BitArray__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BitArray__Fields_FWDDECL)
#include <Modloader/app/structs/BitArray__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BitArray__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
