#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StrongNameKeyPair__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StrongNameKeyPair__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StrongNameKeyPair__Fields_DEFINED)
#define IL2CPP_STRUCT_StrongNameKeyPair__Fields_DEFINED
struct Byte__Array;
struct String;
struct __declspec(align(8)) StrongNameKeyPair__Fields {
    struct Byte__Array* _publicKey;
    struct String* _keyPairContainer;
    bool _keyPairExported;
    struct Byte__Array* _keyPairArray;
};
#endif
#if !defined(IL2CPP_STRUCT_StrongNameKeyPair__Fields_FWDDECL)
#define IL2CPP_STRUCT_StrongNameKeyPair__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_StrongNameKeyPair__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StrongNameKeyPair__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StrongNameKeyPair__Fields_FWDDECL)
#include <Modloader/app/structs/StrongNameKeyPair__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StrongNameKeyPair__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
