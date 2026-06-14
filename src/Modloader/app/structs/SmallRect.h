#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SmallRect_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SmallRect_INITIALIZING
#if !defined(IL2CPP_STRUCT_SmallRect_DEFINED)
#define IL2CPP_STRUCT_SmallRect_DEFINED
struct SmallRect {
    int16_t Left;
    int16_t Top;
    int16_t Right;
    int16_t Bottom;
};
#endif
#if !defined(IL2CPP_STRUCT_SmallRect_FWDDECL)
#define IL2CPP_STRUCT_SmallRect_FWDDECL
#endif
#undef IL2CPP_STRUCT_SmallRect_INITIALIZING
#if !defined(IL2CPP_STRUCT_SmallRect_DEFINED) && !defined(IL2CPP_STRUCT_SmallRect_FWDDECL)
#include <Modloader/app/structs/SmallRect.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SmallRect.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
