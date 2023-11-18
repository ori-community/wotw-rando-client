#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InflateBlocks__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InflateBlocks__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InflateBlocks__Fields_DEFINED)
#include <Modloader/app/structs/InflateBlocks_InflateBlockMode__Enum.h>
#if defined(IL2CPP_STRUCT_InflateBlocks_InflateBlockMode__Enum_DEFINED)
#define IL2CPP_STRUCT_InflateBlocks__Fields_DEFINED
struct Int32__Array;
struct InflateCodes;
struct ZlibCodec;
struct Byte__Array;
struct Object;
struct InfTree;
struct __declspec(align(8)) InflateBlocks__Fields {
    InflateBlocks_InflateBlockMode__Enum mode;

    int32_t left;
    int32_t table;
    int32_t index;
    struct Int32__Array* blens;
    struct Int32__Array* bb;
    struct Int32__Array* tb;
    struct InflateCodes* codes;
    int32_t last;
    struct ZlibCodec* _codec;
    int32_t bitk;
    int32_t bitb;
    struct Int32__Array* hufts;
    struct Byte__Array* window;
    int32_t end;
    int32_t readAt;
    int32_t writeAt;
    struct Object* checkfn;
    uint32_t check;
    struct InfTree* inftree;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InflateBlocks__Fields_FWDDECL)
#define IL2CPP_STRUCT_InflateBlocks__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/InfTree.h>
#include <Modloader/app/structs/InflateCodes.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ZlibCodec.h>
#endif
#undef IL2CPP_STRUCT_InflateBlocks__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InflateBlocks__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InflateBlocks__Fields_FWDDECL)
#include <Modloader/app/structs/InflateBlocks__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InflateBlocks__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
