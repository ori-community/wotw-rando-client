#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XAsyncBlock_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XAsyncBlock_INITIALIZING
#if !defined(IL2CPP_STRUCT_XAsyncBlock_DEFINED)
#include <Modloader/app/structs/XTaskQueueHandle.h>
#if defined(IL2CPP_STRUCT_XTaskQueueHandle_DEFINED)
#define IL2CPP_STRUCT_XAsyncBlock_DEFINED
struct XAsyncBlock {
    struct XTaskQueueHandle queue;
    void* context;
    void* callback;
    uint8_t i0;
    uint8_t i1;
    uint8_t i2;
    uint8_t i3;
    uint8_t i4;
    uint8_t i5;
    uint8_t i6;
    uint8_t i7;
    uint8_t i8;
    uint8_t i9;
    uint8_t i10;
    uint8_t i11;
    uint8_t i12;
    uint8_t i13;
    uint8_t i14;
    uint8_t i15;
    uint8_t i16;
    uint8_t i17;
    uint8_t i18;
    uint8_t i19;
    uint8_t i20;
    uint8_t i21;
    uint8_t i22;
    uint8_t i23;
    uint8_t i24;
    uint8_t i25;
    uint8_t i26;
    uint8_t i27;
    uint8_t i28;
    uint8_t i29;
    uint8_t i30;
    uint8_t i31;
    uint8_t i32;
    uint8_t i33;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XAsyncBlock_FWDDECL)
#define IL2CPP_STRUCT_XAsyncBlock_FWDDECL
#endif
#undef IL2CPP_STRUCT_XAsyncBlock_INITIALIZING
#if !defined(IL2CPP_STRUCT_XAsyncBlock_DEFINED) && !defined(IL2CPP_STRUCT_XAsyncBlock_FWDDECL)
#include <Modloader/app/structs/XAsyncBlock.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XAsyncBlock.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
