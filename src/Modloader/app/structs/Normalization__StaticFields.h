#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Normalization__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Normalization__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Normalization__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Normalization__StaticFields_DEFINED
struct Object;
struct Normalization__StaticFields {
    uint8_t* props;
    int32_t* mappedChars;
    int16_t* charMapIndex;
    int16_t* helperIndex;
    uint16_t* mapIdxToComposite;
    uint8_t* combiningClass;
    struct Object* forLock;
    bool isReady;
};
#endif
#if !defined(IL2CPP_STRUCT_Normalization__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Normalization__StaticFields_FWDDECL
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_Normalization__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Normalization__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Normalization__StaticFields_FWDDECL)
#include <Modloader/app/structs/Normalization__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Normalization__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
