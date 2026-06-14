#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StringBuilder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StringBuilder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringBuilder__Fields_DEFINED)
#define IL2CPP_STRUCT_StringBuilder__Fields_DEFINED
struct Char__Array;
struct StringBuilder;
struct __declspec(align(8)) StringBuilder__Fields {
    struct Char__Array* m_ChunkChars;
    struct StringBuilder* m_ChunkPrevious;
    int32_t m_ChunkLength;
    int32_t m_ChunkOffset;
    int32_t m_MaxCapacity;
};
#endif
#if !defined(IL2CPP_STRUCT_StringBuilder__Fields_FWDDECL)
#define IL2CPP_STRUCT_StringBuilder__Fields_FWDDECL
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/StringBuilder.h>
#endif
#undef IL2CPP_STRUCT_StringBuilder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringBuilder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StringBuilder__Fields_FWDDECL)
#include <Modloader/app/structs/StringBuilder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StringBuilder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
