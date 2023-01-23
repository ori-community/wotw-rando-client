#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Guid_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Guid_INITIALIZING
#if !defined(IL2CPP_STRUCT_Guid_DEFINED)
#define IL2CPP_STRUCT_Guid_DEFINED
struct Guid {
    int32_t _a;
    int16_t _b;
    int16_t _c;
    uint8_t _d;
    uint8_t _e;
    uint8_t _f;
    uint8_t _g;
    uint8_t _h;
    uint8_t _i;
    uint8_t _j;
    uint8_t _k;
};
#endif
#if !defined(IL2CPP_STRUCT_Guid_FWDDECL)
#define IL2CPP_STRUCT_Guid_FWDDECL
#endif
#undef IL2CPP_STRUCT_Guid_INITIALIZING
#if !defined(IL2CPP_STRUCT_Guid_DEFINED) && !defined(IL2CPP_STRUCT_Guid_FWDDECL)
#include <Modloader/app/structs/Guid.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Guid.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
