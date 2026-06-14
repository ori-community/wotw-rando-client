#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MSCompatUnicodeTable__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MSCompatUnicodeTable__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MSCompatUnicodeTable__StaticFields_DEFINED)
#define IL2CPP_STRUCT_MSCompatUnicodeTable__StaticFields_DEFINED
struct Char__Array;
struct TailoringInfo__Array;
struct Object;
struct MSCompatUnicodeTable__StaticFields {
    int32_t MaxExpansionLength;
    uint8_t* ignorableFlags;
    uint8_t* categories;
    uint8_t* level1;
    uint8_t* level2;
    uint8_t* level3;
    uint8_t* cjkCHScategory;
    uint8_t* cjkCHTcategory;
    uint8_t* cjkJAcategory;
    uint8_t* cjkKOcategory;
    uint8_t* cjkCHSlv1;
    uint8_t* cjkCHTlv1;
    uint8_t* cjkJAlv1;
    uint8_t* cjkKOlv1;
    uint8_t* cjkKOlv2;
    struct Char__Array* tailoringArr;
    struct TailoringInfo__Array* tailoringInfos;
    struct Object* forLock;
    bool isReady;
};
#endif
#if !defined(IL2CPP_STRUCT_MSCompatUnicodeTable__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MSCompatUnicodeTable__StaticFields_FWDDECL
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TailoringInfo__Array.h>
#endif
#undef IL2CPP_STRUCT_MSCompatUnicodeTable__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MSCompatUnicodeTable__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MSCompatUnicodeTable__StaticFields_FWDDECL)
#include <Modloader/app/structs/MSCompatUnicodeTable__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MSCompatUnicodeTable__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
