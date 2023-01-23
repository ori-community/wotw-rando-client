#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AesTransform__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AesTransform__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AesTransform__StaticFields_DEFINED)
#define IL2CPP_STRUCT_AesTransform__StaticFields_DEFINED
struct UInt32__Array;
struct Byte__Array;
struct AesTransform__StaticFields {
    struct UInt32__Array* Rcon;
    struct Byte__Array* SBox;
    struct Byte__Array* iSBox;
    struct UInt32__Array* T0;
    struct UInt32__Array* T1;
    struct UInt32__Array* T2;
    struct UInt32__Array* T3;
    struct UInt32__Array* iT0;
    struct UInt32__Array* iT1;
    struct UInt32__Array* iT2;
    struct UInt32__Array* iT3;
};
#endif
#if !defined(IL2CPP_STRUCT_AesTransform__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_AesTransform__StaticFields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/UInt32__Array.h>
#endif
#undef IL2CPP_STRUCT_AesTransform__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AesTransform__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_AesTransform__StaticFields_FWDDECL)
#include <Modloader/app/structs/AesTransform__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AesTransform__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
