#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InflateManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InflateManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InflateManager__Fields_DEFINED)
#include <Modloader/app/structs/InflateManager_InflateManagerMode__Enum.h>
#if defined(IL2CPP_STRUCT_InflateManager_InflateManagerMode__Enum_DEFINED)
#define IL2CPP_STRUCT_InflateManager__Fields_DEFINED
struct ZlibCodec;
struct InflateBlocks;
struct __declspec(align(8)) InflateManager__Fields {
    InflateManager_InflateManagerMode__Enum mode;

    struct ZlibCodec* _codec;
    int32_t method;
    uint32_t computedCheck;
    uint32_t expectedCheck;
    int32_t marker;
    bool _handleRfc1950HeaderBytes;
    int32_t wbits;
    struct InflateBlocks* blocks;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InflateManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_InflateManager__Fields_FWDDECL
#include <Modloader/app/structs/InflateBlocks.h>
#include <Modloader/app/structs/ZlibCodec.h>
#endif
#undef IL2CPP_STRUCT_InflateManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InflateManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InflateManager__Fields_FWDDECL)
#include <Modloader/app/structs/InflateManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InflateManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
