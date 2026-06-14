#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HyperHasher__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HyperHasher__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HyperHasher__StaticFields_DEFINED)
#define IL2CPP_STRUCT_HyperHasher__StaticFields_DEFINED
struct Byte__Array;
struct HyperHasher__StaticFields {
    uint8_t s_hashSize;
    uint32_t s_mask;
    struct Byte__Array* buffer;
};
#endif
#if !defined(IL2CPP_STRUCT_HyperHasher__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_HyperHasher__StaticFields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_HyperHasher__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HyperHasher__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_HyperHasher__StaticFields_FWDDECL)
#include <Modloader/app/structs/HyperHasher__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HyperHasher__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
